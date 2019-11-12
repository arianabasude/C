#include<stdio.h>
#include<string.h>



int main()

{
    int a;
    char ans[10];
   

    // Write Your Code Here
    scanf("%d",&a);
    
    if(a==1){
        strcpy(a,"one");
    }
    else if(a==2)
        strcpy(ans,"two");
    else if(a==3)
        strcpy(ans,"three");
    else if(a==4)
        strcpy(ans,"four");
    else if(a==5)
        strcpy(ans,"five");
    else if(a==6)
        strcpy(ans,"six");
    else if(a==7)
        strcpy(ans,"seven");
    else if(a==8)
        strcpy(ans,"eight");
    else if(a==9)
        strcpy(ans,"nie");
    else if(a==0)
        strcpy(ans,"zero");
    else
        strcpy(ans,"Greater than 9");
    
    printf("%s",ans);

    

    return 0;
}



