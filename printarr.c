#include<stdio.h>

void display(int *x,int n){
	for(int i=0;i<n;i++){
		printf("%d ",*(x+i));
	}
	printf("\n");
}

int main(){
	int arr[10],i,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	display(arr,n);
}
