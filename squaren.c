#include <stdio.h>
void square(int i, int n)
{
    int num = 0;
    if (i <= n)
    {
        num = i * i;
        printf("%d ", num);
        square(i+1,n);
    }
}

int main()
{
    int n,i = 1;
    printf("Enter the Number upto where u want print square series : ");
    scanf("%d", &n);
    square(i,n);
    return 0;
}