import pandas as pd

df = pd.read_csv('Salaries.csv - Salaries.csv.csv')

rows, columns = df.shape

print("Number of rows = ", rows)
print("Number of columns = ", columns)
