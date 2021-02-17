#include<stdio.h>
int main()
{
    int a[10],i,sum=0,sum1=0; 
    printf("Enter upto 5 Values: ");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
     printf("the even elements sum:%d\n",sum);
     for(i=0; i<5; i=i+2)
    {
            sum1=sum1+a[i];
    }
    printf("the even  positon elements sum:%d\n",sum1);

}