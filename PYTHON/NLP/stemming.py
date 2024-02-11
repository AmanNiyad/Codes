from nltk.stem import PorterStemmer
from nltk.tokenize import word_tokenize

ps = PorterStemmer()

sentence = "Computer revival"
words = word_tokenize(sentence)
 
for w in words:
    print(w, " : ", ps.stem(w))
