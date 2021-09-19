#include <stdio.h>


int find(int decimal)
{
    if (decimal == 0)
        return 0;
    else
        return (decimal % 2 + 10 * find(decimal / 2));
}
 

int main()
{
    int decimal;
    printf("Enter the decimal: ");
    scanf("%d",&decimal);
    printf("%d", find(decimal));
    return 0;
}
