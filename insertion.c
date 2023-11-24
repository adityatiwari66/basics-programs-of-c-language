#include<stdio.h>


// traversal 
   void display(int arr[], int size ) {
    for(int i =0 ; i < size ; i++){
    printf(" %d ", arr[i]);
   }
    printf("\n");
   }

// array for insertion 
int sortedinsrtion(int arr[] , int size ,int element ,int  capacity  , int index){
if (size >= capacity ){
    return -1; 
}
for (int i = size -1  ; i >= index  ; i-- )
{
    arr[i+1] = arr[i] ;
}
arr[index] = element ; 
return 1;
}


int main(){
int arr[100] = {7,8 , 12 ,27 ,88 };
int size =5;
display (arr ,size);
int element =45 , index =3 ;
 sortedinsrtion(arr , size , element ,100 ,index);
size += 1 ;

display (arr ,size);
return 0;
}
