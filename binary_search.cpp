//Binary Search...***

#include<stdio.h>
//FUNNCTION..
int bsearch(int arr[],int x,int low,int high)
{
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		
		if(arr[mid]==x){
			return mid;
		}
		if(arr[mid<x]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}

//MAIN...***
int main()
{
	int arr[100];
	int n, x, i, r;
	printf("enter of array elements to enter:- \n");
	scanf("%d",&n);
	//accept array..
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search:-");
	scanf("%d",&x);
	
	r=bsearch(arr,x,0,n-1);
	if(r==-1){
		printf("element not found");
	}
	else{
		printf("element found at pos-%d",r+1);
	}
}
