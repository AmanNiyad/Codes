from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def index1(response):
    return(HttpResponse("<h1>This is a test</h1>"))


def index2(response):
    return(HttpResponse("<h1>This is not a  test</h1>"))
