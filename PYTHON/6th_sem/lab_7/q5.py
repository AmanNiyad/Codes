import pandas as pd

df = pd.read_csv('Salaries.csv - Salaries.csv.csv')
mean=df['salary'].mean()
df['salary'].fillna(value=mean,inplace=True)
print(df['salary'])
