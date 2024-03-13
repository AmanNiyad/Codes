import numpy as np
import random
li = [random.randrange(5,10) for x in range(10)]
z = np.asarray(li, dtype = float)

z = z.reshape(2,5)
print(z)
