#include <stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter the number:");
    scanf("%d", &n);

    for(i=n;i>=1;i--)
    {
       fact=fact*i;
    }

    printf("\n Enter the factorial : %d",fact);

}