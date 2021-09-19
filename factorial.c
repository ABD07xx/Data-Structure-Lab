#include<stdio.h>
#include<conio.h>

int factorial(int x){
if(x == 0)
 {
return 1;}
return x* factorial(x-1);
}
int main()
{
	int fact,n,i;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("%d",factorial(n));
	
}
