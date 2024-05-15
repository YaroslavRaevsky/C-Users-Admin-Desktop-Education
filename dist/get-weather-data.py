from urllib.request import urlopen
from bs4 import BeautifulSoup
import requests

url = "https://coinmarketcap.com/ru/currencies/xrp/"
page = urlopen(url)
#print (page)
#page = requests.get(url)
#print(page.status_code)
#soup = BeautifulSoup(page)
#print (page)
#wx-values = soup.findAll(attrs={"strong":"<!-- -->$"})
#print (wx-values)