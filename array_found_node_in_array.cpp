//Write a 'C' program to accept n elements from user store it in an array.Accept a
//value from the user and use linear/sequential search method to check whether the 
//value is persent in array or not .Display brober message.

#include<stdio.h>
int main()
{
	int a[5],i,x,n,flag=0;
	printf("How many array elements::");
	scanf("%d",&n);
	
		
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	
	printf("enter about to search",i+1);
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
	
		if(a[i]==x)
		{
		printf("The element is present");
		flag=1;
		
		}
		
		if(flag==0){
			printf("element is not found");
		}
	
}
}
