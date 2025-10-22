#include <stdio.h>
#include <ctype.h>
#define MAX 50
char stack[MAX]; int top=-1;

void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }
int prec(char c){ return (c=='+'||c=='-')?1:(c=='*'||c=='/')?2:0; }

void infixToPostfix(char exp[]) {
    char *e=exp, x;
    while(*e!='\0') {
        if(isalnum(*e)) printf("%c", *e);
        else if(*e=='(') push(*e);
        else if(*e==')') {
            while((x=pop())!='(') printf("%c", x);
        } else {
            while(top!=-1 && prec(stack[top])>=prec(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1) printf("%c", pop());
}
int main() {
    char exp[]="A+(B*C)";
    infixToPostfix(exp);
}
