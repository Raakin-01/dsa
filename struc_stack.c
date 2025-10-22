#include <stdio.h>
#define MAX 5
struct Stack { int arr[MAX]; int top; } s = {.top=-1};

void push(int x) {
    if(s.top==MAX-1) printf("Overflow\n");
    else s.arr[++s.top]=x;
}
void pop() {
    if(s.top==-1) printf("Underflow\n");
    else printf("Popped: %d\n", s.arr[s.top--]);
}
void display() {
    for(int i=s.top;i>=0;i--) printf("%d ", s.arr[i]);
    printf("\n");
}
int main() {
    push(5); push(15); push(25);
    display(); pop(); display();
}
