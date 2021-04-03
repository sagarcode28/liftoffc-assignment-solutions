#include<stdio.h>
void square(long a)
{
    long sq;
    sq=a*a;
    printf("%li",sq);

}
int main()
{
    long x;
    scanf("%li",&x);
    square(x);
    return 0;
}