import requests
from bs4 import BeautifulSoup
from transformers import pipeline
import bleach
import re

pipe = pipeline("token-classification", model="jtlicardo/bpmn-information-extraction-v2")

r = requests.get('https://www.livemint.com/economy/budget-2024-25-key-highlights-live-updates-interim-budget-agriculture-infra-fiscal-deficit-nirmala-sitharaman-11706695416199.html')

soup = BeautifulSoup(r.content, 'html.parser')

s = soup.find('div', class_='contentSec')

content = s.find_all('p')
content = str(content)
clean = bleach.clean(content, tags=[], strip=True)
clean = re.sub(r'[^.\w\s+]', '', clean)

for i in pipe(clean):
    print(i, end = "\n")
