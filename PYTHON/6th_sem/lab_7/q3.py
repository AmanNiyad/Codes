import pandas as pd

df = pd.read_csv('Salaries.csv - Salaries.csv.csv')

df2 = df.loc[df['sex']=='Male']
print("Max(MALE): \n")
print(df2.loc[df2['salary'].idxmax()])
print("Min(MALE): \n")
print(df2.loc[df2['salary'].idxmin()])

df2 = df.loc[df['sex']=='Female']
print("Max(FEMALE): \n")
print(df2.loc[df2['salary'].idxmax()])
print("Min(FEMALE): \n")
print(df2.loc[df2['salary'].idxmin()])
