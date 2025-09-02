inserting into middle of the array:
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


========================================================

inserting in the end of the array:
#include<stdio.h>
#include<stdlib.h>
void insertLast(int arr[],int *size,int val){
    arr[*size]=val;
    (*size)++;
}
int main(){
    int arr[8]={1,2,3,4,5,6};
    int val;
    int size=6;
    printf("enter the value:");
    scanf("%d",&val);
    insertLast(arr,&size,val);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
