#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int remainder; 
    int rev=0; 
    int sum=0; 
    printf("enter an integer\n");
    scanf("%d",&a);
    while(a!=0)
    {    remainder=a%10;
    rev=rev*10+remainder;
    sum=sum+remainder;
    a=a/10;
    }
    printf("%d\n",rev);
    printf("%d\n",sum);
    return 0;
}
