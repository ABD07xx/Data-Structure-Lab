#include<stdio.h>
#include<conio.h>
int EvenOdd(int x){
	if(x % 2==0){
		printf("Even");
	}
	else{
	printf("odd");
}
}
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	EvenOdd(a);
}
