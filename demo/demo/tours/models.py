from django.db import models
from multiselectfield import MultiSelectField

# Create your models here.

INCLUSIONS =(
    ('meals','Meals'),
    ('flight','Flight'),
    ('bus','Bus'),
    ('sightseeing','Sightseeing'),
    ('hotel','Hotel'),
)
EXCLUSIONS =(
    ('flight','Flight'),
    ('paid','Paid'),
    ('shipped','Shipped'),
    ('refunded','Refunded')
)
TYPE=(
    ('couple','Couple'),
    ('person','Person')
)
CATEGORY=(
    ('family_holiday','Family Holiday'),
    ('road_trip','Road Trip'),
    ('natural_escape','Natural Escape'),

)


class Provider(models.Model):
    name = models.CharField(max_length=30, null=True, blank=True)
    email = models.EmailField(null=True, blank=True)
    address=models.CharField(max_length=40, null=True, blank=True)

    def __str__(self):
        return self.name

class Tour(models.Model):
    name = models.CharField(max_length=30, null=True, blank=True)
    provider=models.ForeignKey(Provider,on_delete=models.CASCADE)
    inclusions=MultiSelectField(choices=INCLUSIONS, default='meals')
    exclusions =MultiSelectField(choices=EXCLUSIONS, default='flight', max_length=30)
    price=models.DecimalField(default=0.00, max_digits=30, decimal_places=2)
    discount=models.DecimalField(default=0.00, max_digits=30, decimal_places=2)
    number_of_days=models.BigIntegerField(default=1,)
    details=models.TextField(null=True, blank=True)
    conditions=models.TextField(null=True,blank=True)
    policy=models.TextField(null=True,blank=True)
    type=models.CharField(choices=TYPE,default='person',max_length=20)
    review=models.DecimalField(default=0.00, max_digits=30, decimal_places=2)
    destination=models.CharField(max_length=30, null=True, blank=True)
    catergory=MultiSelectField(choices=CATEGORY,default='family_holiday')
    image = models.ImageField(null=True, blank=True, upload_to='static_cdn/media_root')

    def __str__(self):
        return self.name