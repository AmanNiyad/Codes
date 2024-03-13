import numpy as np

z = np.random.randint(0, 20, (10, 2))

print("Mean: ",np.mean(z))
print("Median: ",np.median(z))

unique, counts = np.unique(z, return_counts = True)

maximum = max(counts)
print("Mode: ", maximum)


