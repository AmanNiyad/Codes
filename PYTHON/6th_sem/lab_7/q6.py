import pandas as pd

df = pd.read_csv('Salaries.csv - Salaries.csv.csv')
mean_phd_by_service = df.groupby('service')['phd'].transform('mean')
df['phd'] = df['phd'].fillna(mean_phd_by_service)
print(df['phd'])
