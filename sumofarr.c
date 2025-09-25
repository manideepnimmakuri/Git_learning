#include<stdio.h>

int sum(int *x,int n){
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=*(x+i);
	return sum;
}

int main(){
	int arr[10],i,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("%d is the sum of array elements\n",sum(arr,n));

}
