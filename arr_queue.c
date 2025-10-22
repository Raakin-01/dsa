#include <stdio.h>
#define MAX 5
int q[MAX], front=-1, rear=-1;

void enqueue(int x) {
    if(rear==MAX-1) printf("Overflow\n");
    else {
        if(front==-1) front=0;
        q[++rear]=x;
    }
}
void dequeue() {
    if(front==-1 || front>rear) printf("Underflow\n");
    else printf("Dequeued: %d\n", q[front++]);
}
void display() {
    for(int i=front;i<=rear;i++) printf("%d ", q[i]);
    printf("\n");
}
int main() {
    enqueue(1); enqueue(2); enqueue(3);
    display(); dequeue(); display();
}
