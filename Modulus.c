#include<stdio.h>
#include<conio.h>
int modulus(int x){
	if(x<0){
		x = -x;
		printf("%d",x);
	}
	else{
		printf("%d",x);
	}
}
int main(){
	int a;
	printf("Enter number: ");
	scanf("%d",&a);
	modulus(a);
	
}
