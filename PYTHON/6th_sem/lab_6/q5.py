import numpy as np

z = np.random.randint(0, 200, (10, 2))

z = sorted(z, key = lambda row : row[0])

for i in z:
    print(i, end = "\n")
