#include<stdio.h>
#include<math.h>

int power(int x, int y){
	int z = pow(x,y);
	return z;
}
int main(){
	int a,b;
	printf("Enter value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Value of a to the power b =  %d", power(a,b));
}
