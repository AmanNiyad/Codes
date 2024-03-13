import numpy as np

listy = [[1,1,1,1,1,1],[0,0,0,0,0,0]]
z = np.asarray(listy, dtype = int)
z = np.flip(z, 0)
print(z)
