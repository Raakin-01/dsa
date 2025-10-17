#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node* next;
};
struct node* createNode(int data){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
void print(struct node* head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		if(temp->next){
			printf("->");
		}
		temp=temp->next;
	}
	printf("-> NULL\n");
}
int main(){
	struct node* head= NULL;
	head=createNode(10);
	head ->next=createNode(20);
	head-> next->next=createNode(30);
	print(head);
}


	





