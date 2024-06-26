import numpy as np
from numpy.fft import fft2, ifft2
from PIL import Image

import subprocess

import cusignal
import cupy as cp

image = Image.open("beach-009.jpg")

def np_fftconvolve(A, B):
    return np.real(ifft2(fft2(A)*fft2(B, s=A.shape)))

def mean_values(transpose):
    kernel = np.ones((25,25))
    kernel[1,1] =0

    nsum = np_fftconvolve(transpose, kernel)
    nnei = np_fftconvolve(np.ones(transpose.shape), kernel)

    mean_arr = nsum/nnei
    return(mean_arr)

def mean_values_gpu(transpose):
    kernel = np.ones((35,35))
    kernel[1,1] =0

    nsum = cp.asnumpy(cusignal.convolve2d(transpose, kernel, mode='same'))
    nnei = cp.asnumpy(cusignal.convolve2d(np.ones(transpose.shape), kernel, mode='same'))

    mean_arr = nsum/nnei
    return(mean_arr)

image = image.convert('HSV')

lut = np.asarray(image, dtype = int)

transpose = lut[..., 2]
threshold = np.max(transpose)
try:
    subprocess.check_output('nvidia-smi')
    mean_arr = mean_values_gpu(transpose)
except:
    mean_arr = mean_values(transpose)

transpose[mean_arr < threshold/2] -= 20
lut[..., 2] = transpose

image_new = Image.fromarray(lut.astype('uint8'), mode = 'HSV')
image_new = image_new.convert('RGB')
image_new.save('output.jpg')
