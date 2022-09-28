/*
CH-230-A
a4_p9.c
Tayyab Butt
tbutt@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

int prodminmax(int arr[], int n){
  int i=0;
  int j=0;
  float max = arr[0];
  float min = arr[0];
  int prod=0;

    while (i<n){
      if(arr[i]>max){
        max=arr[i];
      }
      i++;
    }
    while (j<n){
      if(arr[j]<min){
        min=arr[j];
      }
      j++;
    }
    
    prod = max*min;

    return prod;
}

int main(){
  int n;
    printf("number of integers:");//to determine the number of integers
    scanf("%d",&n);
    int *arr= malloc(4*n);//we allocate some memory for our array and *4 because its int
    for(int i=0;i<n;i++){
            printf("Enter element [%d] : ",i+1);
            scanf("%d",&arr[i]);
            }
    printf("the product is: %d\n",prodminmax(arr,n));//her we call the function
    free(arr);//we use free to deallocate the memory
    return 0;
}
