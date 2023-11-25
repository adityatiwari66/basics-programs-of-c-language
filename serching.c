#include<stdio.h>
   int lenear_search (int arr[] , int size , int element ){
    for (int i = 0; i < size; i++)

    {
        if (arr[i] == element)
        {
            return i;
        }
        
    }
    return -1 ; 
    
   }

   int binarysearch(int arr[],int size , int element ){
    int  low , high ,mid ;
    low = 0 ;
    high = size-1 ; 
    
    while (low <= high )
    {
         mid = (low + high) /2 ;
        if (arr[mid] == element ) {
            return mid ; 
        }
        if (arr [mid] <= element ){
            low = mid +1 ; 
        }
        else {
            high = mid -1 ; 
        }
    }
    
    return -1 ; 

   }
int main(){
   // int arr[100] = {1,2, 5, 56, 4, 3, 23, 5,4, 5436, 56, 34}; 
   int arr[] = {1,2,3,4,56,76,85,88,94, 96,98};
    int size = sizeof(arr) /sizeof(int ) ; 
//int index = lenear_search ( arr , size , 5436 ); 
int index = binarysearch(arr, size , 96 );
printf("the index is : %d" , index );
return 0;
}



