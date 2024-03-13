import pandas as pd

df = pd.read_csv('Salaries.csv - Salaries.csv.csv')

print("Max: \n")
print(df.loc[df['salary'].idxmax()])

print("\nMin: \n")
print(df.loc[df['salary'].idxmin()])
