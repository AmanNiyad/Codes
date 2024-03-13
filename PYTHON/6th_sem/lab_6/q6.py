import numpy as np


z = np.random.randint(0, 20, (15))

unique, counts = np.unique(z, return_counts = True)

maximum = max(counts)
print("Array : ", z)
for i in range(len(unique)):
    if(counts[i] == maximum):
        print(unique[i], ":", counts[i])


