import numpy as np
import pandas as pd
import matplotlib as mp
import matplotlib.pyplot as plt
import seaborn as sb
from scipy import stats


#manually create kde
data_set_1=np.random.rand(100)
sb.rugplot(data_set_1) #small tick of data
plt.ylim(0,1) #y limit
plt.show() #shows 100 ticks



data_set_1=np.random.rand(100)
sb.rugplot(data_set_1) #small tick of data
#plt.ylim(0,1) #y limit
plt.hist(data_set_1,alpha=0.5)
plt.show() #shows amazing graph


x_axes=np.linspace(data_set_1.min(),data_set_1.max()+1,50)
#bandwidth creation
bandwidth=((4*data_set_1.std()**5)/(3*len(data_set_1)))**0.2
kernals=[]
for i in data_set_1:
    kernal=stats.norm(i,bandwidth).pdf(x_axes)
    kernals.append(kernal)

    kernal=kernal/kernal.max()
    kernal=kernal*0.6
    plt.plot(x_axes,kernal,alpha=0.5,color='red')

#plt.ylim(0,1)
plt.savefig('kde1.png')


kde=np.sum(kernals,axis=0)
kde_fig=plt.plot(x_axes,kde,color='green')
sb.rugplot(data_set_1)
plt.suptitle('kde plot')
plt.savefig('kde2.png')


#so much mess
#see easy method
kde_2=sb.kdeplot(data_set_1)
kde_fig_2=kde_2.get_figure()
kde_fig_2.savefig('kde3.png')