
#include <stdio.h>
int rev(int n, int temp)
{
    if (n == 0)
        return temp;

    temp = (temp * 10) + (n % 10);
 
    return rev(n / 10, temp);
}

int main()
{
 
    int n;
    scanf("%d",&n);
     
    int temp = rev(n, 0);
   
    if (temp == n)
        printf("yes");
    else
        printf("no");
    return 0;
}