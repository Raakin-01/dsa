#include <stdio.h>
#define MAX 5
struct Queue { int arr[MAX]; int front, rear; } q = {.front=-1, .rear=-1};

void enqueue(int x) {
    if(q.rear==MAX-1) printf("Overflow\n");
    else {
        if(q.front==-1) q.front=0;
        q.arr[++q.rear]=x;
    }
}
void dequeue() {
    if(q.front==-1 || q.front>q.rear) printf("Underflow\n");
    else printf("Dequeued: %d\n", q.arr[q.front++]);
}
void display() {
    for(int i=q.front;i<=q.rear;i++) printf("%d ", q.arr[i]);
    printf("\n");
}
int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display(); dequeue(); display();
}
