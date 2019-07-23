"""demo URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/2.1/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path,include

from .views import TourListView, TourDetailView, SearchTourListView,SearchDestination,SearchCategory
from . import views

urlpatterns = [
    path('home',views.home,name='home'),
    path('',TourListView.as_view(), name = 'tourlist'),
    path('details/<int:pk>',TourDetailView.as_view(), name='tourdetails'),
    path('search',SearchTourListView.as_view(),name='searchtour'),
    path('search',SearchDestination.as_view(),name='searchtour_destination'),
    path('search',SearchCategory.as_view(),name='searchtour_category')
   
]
