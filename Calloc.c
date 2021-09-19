#include<stdio.h>
#include<stdlib.h> /*Library for Calloc()*/

int main(){
	int i,n;
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	int *ptr = (int *)calloc(n,sizeof(int));/*n represents number of blocks req,size*/
	/*allocate size acc to size of integers */
	if(ptr == NULL){
		printf("Memory not available. ");
		exit(1);
	}
	/*printf("%d",ptr);__address of pointer*/
	for(i=0;i<n;i++){
		printf("Enter an integer: ");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
	return 0;
}
