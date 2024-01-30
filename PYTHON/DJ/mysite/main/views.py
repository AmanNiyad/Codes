from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def index1(response, id):
    return(HttpResponse("<h1>This is a test %s</h1>" % id))

