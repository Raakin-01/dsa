//biggest of 2 no's
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	return(*(int*)a-*(int*)b);
}

int getsecond(int arr[],int n){
	qsort(arr,n,sizeof(int),compare);
	for(int i=n-2;i>=0;i--){
		if(arr[i]!=arr[n-1]){
				return arr[i];
		}
	}
	return -1;
}

		
int main(){
int arr[]={10,20,30,40,50,60};
int n=sizeof(arr)/sizeof(arr[0]);
printf("%d\n",getsecond(arr,n));
return 0;
}


//this is a better method ngl:


#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	return(*(int*)a-*(int*)b);
}

int getsecond(int arr[],int n){
	qsort(arr,n,sizeof(int),compare);
	for(int i=n-2;i>=0;i--){
		if(arr[i]!=arr[n-1]){
				return arr[i];
		}
	}
	return -1;
}

		
int main(){
int arr[]={10,20,30,40,50,60};
int n=sizeof(arr)/sizeof(arr[0]);
printf("%d\n",getsecond(arr,n));
return 0;
}
