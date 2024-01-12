from urllib.request import  urlopen
from nltk.tokenize import RegexpTokenizer

url = 'https://www.moneycontrol.com/'

pageopen = urlopen(url)
html = pageopen.read().decode('UTF-8')

tokenizer = RegexpTokenizer(r'\w+|\$[\d\.]+|\S+')
print(len(tokenizer.tokenize(html)))

