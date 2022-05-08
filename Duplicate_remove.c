#include <stdio.h>

int main()
{	int arr[20],i,j,k,size;
	printf("Define the number of the array");
	scanf("%d",&size);

	printf("Enter the variable in an array");
	// Writing a loop to input array 
	for(i = 0; i<5;i++){
		scanf("%d",&arr);

	}

	for(i =0;i<size;i++){
		for(j = i+1;j<size;j++){
			if (arr[i] == arr[j]){
				for(k=j;k<size-1;k++){
					arr[k]=arr[k+1];
				}
				size--;
				j--;
			}
			{
			}
		}
	}
	printf (" \n Array elements after deletion of the duplicate elements: "); 
	for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
     
  

	return 0 ;
}
