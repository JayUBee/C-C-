/*
CH-230-A
a3 p6.c
Tayyab Butt
tbutt@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

void maxval(int arr[],int n);
int main()
{
    int n;
    printf("number of  integers:");
    scanf("%d",&n);//her we declare the number of integers
    int *arr=malloc(n*sizeof(int));//we allocate the memory
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);}//we read the elements of the array
    maxval(arr,n);//we call the memory
    free(arr);//we free the memory
    return 0;
}

void maxval(int arr[],int n){
    int max1=0,max2=0;
    for(int i=0;i<n;i++){
            if(arr[i]>max1){
                max1=arr[i];
            }
        }
        for(int j=0;j<n;j++){
            if(arr[j]<max1){
                    if(arr[j]>max2){
                    max2=arr[j];
                    }
            }
        }
    printf("the two highest values are: %d " "and %d",max1,max2);
}
