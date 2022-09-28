/*
CH-230-A
a4_p7.c
Tayyab Butt
tbutt@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void mtx(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
}
void dgn(int n,int arr[n][n]){
  for(int i = 0; i < n; i++){
        for(int j =0; j <i; j++){
            printf("%d ", arr[i][j]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);}

    printf("The entered matrix is:\n");
    mtx(n,arr);
    printf("Under the main diagonal:\n");
    dgn(n,arr);
    printf("\n");
    return 0;
}
