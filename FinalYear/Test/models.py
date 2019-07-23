from django.contrib.auth.models import AbstractUser
from django.db import models


# Create your models here.

class User(AbstractUser):
    is_customer = models.BooleanField(default=False)
    is_employee = models.BooleanField(default=False)


class Customer(models.Model):
    user = user = models.OneToOneField(User, on_delete=models.CASCADE, primary_key=True)
    name = models.CharField(max_length=30)
    email = models.EmailField()
    # password = models.CharField(max_length=30)  from User it is coming
    gstno = models.CharField(max_length=15)
    phoneno = models.BigAutoField()
    address = models.TextField()
    bankaccountno = models.CharField(max_length=30)
    ifsc = models.CharField(max_length=10)
    bankname = models.CharField(max_length=30)
    balance = models.FloatField()
    # order
    # invoice


class Employee(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, primary_key=True)
    name = models.CharField(max_length=30)
    email = models.EmailField()
    #password = models.CharField(max_length=30)  from it is coming
    phoneno = models.BigAutoField()
    address = models.TextField()
    salary = models.FloatField()

