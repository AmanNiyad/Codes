from django.urls import path
from . import views

urlpatterns = [
    path("<int:id>" ,views.index1, name = "index1"),
]

