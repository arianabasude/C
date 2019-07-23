from django.conf import settings
from django.core.mail import send_mail
from django.http import HttpResponse
from django.shortcuts import render
from django.db.models import Q
from django import forms


# Create your views here.
from django.views.generic import ListView, DetailView

from .models import Tour


def home(request):
    return render(request,template_name='home.html',context={'title':'Home',})


class TourListView(ListView):
    template_name = 'home.html'
    queryset = Tour.objects.all() #it returns object_list
    context_object_name = 'tour' #object_list =tour
    extra_context = {'title':'Tours'}

    #paginate_by = 6
    #ordering = ['-date']


class TourDetailView(DetailView):
    #form_class = ItemForm
    template_name = 'tours/tourdetails.html'
    queryset = Tour.objects.all() #it returns object
    context_object_name = 'tour' # object==tour
    extra_context = {'title':'Tour Details'}





class SearchTourListView(ListView):
    template_name = 'home.html'

    context_object_name = 'tour' #object_list =product
    extra_context = {'title':'Search Result'}

    def get_queryset(self, *args, **kwargs):
        request=self.request
        query = request.GET.get('q')
        if query is not None:
            manyquery =Q(name__icontains=query) | Q(details__icontains=query)|Q(catergory__icontains=query)|Q(type__icontains=query)
            return Tour.objects.filter(manyquery).distinct()
        else:
            return Tour.objects.none()

    def get_context_data(self,*args, **kwargs):
        context = super(SearchTourListView,self).get_context_data(*args,**kwargs)
        context['query'] = self.request.GET.get('q')
        return context


"""
class GetInfoForm(forms.Form):
    email=forms.EmailField()
    name=forms.CharField()


def getInfo(request):
    form=GetInfoForm()
    if request.method=="POST":
        if form.is_valid():


            subject = "Tour Details"
            message =  + "Thank you for getting interest in this tour...."
            emailfrom = settings.EMAIL_HOST_USER
            emaillto = form.cleaned_data['email']

            send_mail(
                subject,
                message,
                emailfrom,
                [emaillto],
                fail_silently=True,
            )

            title = "Thank You"
            data = "we will get right back to you."
            return HttpResponse(title+"\n"+data)
        return render(request,"tours/tourdetails.html",{"form":form})
    else:
        return render(request, "tours/tourdetails.html", {"form": form})
         """
