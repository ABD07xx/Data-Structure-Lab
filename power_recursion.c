#include<stdio.h>
#include<conio.h>
int main(){
	int base,a,result;
	printf("Enter base: ");
	scanf("%d",&base);
	printf("Enter power: ");
	scanf("%d",&a);
	result=power(base,a);
	printf("Result=%d ",result);
}
int power(int base, int a){
	if(a==0){
		return 1;
	}
	else{
		return(base*power(base,a-1));
	}
}
