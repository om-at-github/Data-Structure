//bubble sort.....///

#include<stdio.h>

void bubblesort(int arr[],int n)
{
	int i,j,temp;
	
	for(i=0;i<n-1;i++){
		
		for(j=0;j<n-i-1;j++){
			
			if(arr[j]>arr[j+1]){
				
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void display(int arr[],int n)
{
	int i,j;
	
	for(i=0;i<n;i++){
	printf("%d-",arr[i]);
	}
}

int main()
{
	int arr[50],n;
	int i;
	
	printf("enter the how array element");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
		
	}
	
	bubblesort(arr,n);
	
	display(arr,n);
	
}

//bubble sort...///


