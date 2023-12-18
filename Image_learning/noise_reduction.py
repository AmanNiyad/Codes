import tensorflow as tf
import matplotlib.pyplot as plt
from tensorflow.keras.datasets import fashion_mnist

(x_train, _), (x_test, _) = fashion_mnist.load_data()

fig, axs = plt.subplots(5, 10)
fig.tight_layout(pad=-1)
plt.gray()
a = 0
for i in range(5):
    for j in range(10):
        axs[i, j].imshow(tf.squeeze(x_test[a]))
        axs[i, j].xaxis.set_visible(False)
        axs[i, j].yaxis.set_visible(False)
        a = a + 1
