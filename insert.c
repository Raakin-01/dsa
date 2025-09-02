#include<stdio.h>
#include<stdlib.h>
int main(){
  int arr[7]={1,2,3,4,5,6};
    int size = 6;
    int pos;
    int ele;
    printf("enter the value of pos:");
    scanf("%d",&pos);
    printf("enter the value of element:");
    scanf("%d",&ele);
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    size++;
    
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }   

}
