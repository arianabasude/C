from django.shortcuts import render
from django.db.models import Q


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
            manyquery =Q(name__icontains=query) | Q(details__icontains=query)|Q(catergory__icontains=query)
            return Tour.objects.filter(manyquery).distinct()
        else:
            return Tour.objects.none()

    def get_context_data(self,*args, **kwargs):
        context = super(SearchTourListView,self).get_context_data(*args,**kwargs)
        context['query'] = self.request.GET.get('q')
        return context


class SearchDestination(ListView):
    template_name = 'home.html'

    context_object_name = 'tour'  # object_list =product
    extra_context = {'title': 'Search Result'}

    def get_queryset(self, *args, **kwargs):
        request = self.request
        query = request.GET.get('q')
        if query is not None:
            manyquery = Q(destination__icontains=query)
            return Tour.objects.filter(manyquery).distinct()
        else:
            return Tour.objects.none()

    def get_context_data(self, *args, **kwargs):
        context = super(SearchDestination, self).get_context_data(*args, **kwargs)
        context['query'] = self.request.GET.get('q')
        return context

class SearchCategory(ListView):
    template_name = 'home.html'

    context_object_name = 'tour'  # object_list =product
    extra_context = {'title': 'Search Result'}

    def get_queryset(self, *args, **kwargs):
        request = self.request
        query = request.GET.get('q')
        if query is not None:
            manyquery = Q(category__icontains=query)
            return Tour.objects.filter(manyquery).distinct()
        else:
            return Tour.objects.none()

    def get_context_data(self, *args, **kwargs):
        context = super(SearchCategory, self).get_context_data(*args, **kwargs)
        context['query'] = self.request.GET.get('q')
        return context

