import numpy as np

z = np.random.randint(0, 200, (10, 2))

print("Original array: ", z)
z = z.flatten()
print(z)
