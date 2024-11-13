// Insertion Sort...
#include<stdio.h>

void insertionSort(int a[],int n)
{
	int step,key,j;
	
	for(step=1;step<n;step++){
		key=a[step];
		j=step-1;
		while(key<a[j] && j>=0){
			a[j+1]=a[j];
			--j;
		} 
		a[j+1]=key;
	}
}

void printarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
} 



int main()
{
	int data[10],n,i;
	printf("How much data ? - ");
	scanf("%d",&n);
	
	printf("\nEnter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
	
	insertionSort(data,n);
	printarr(data,n);
	
}



