//Write a C program to accept and sort n elements in ascending order by using 
//insertion sort.

#include<stdio.h>
int main()
{
	int i,j,temp;
	int arr[10];
	
	printf("Enter number of element \n");
	scanf("%d",&n);
	
	printf("Enter %d integers",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++){
		j=i;
		while(j>0 && arr[j-1]>arr[j]){
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	
	printf("sorted list in ascending order");
	for(i=0;i=n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
