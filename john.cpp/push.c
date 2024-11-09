#include<stdio.h>
int  N =5;
int stack[5];
int top=-1;

void push()
{
    int x;
    printf("Enter the element");
    scanf("%d",&x);
if(top==N-1){
printf("stack over flow");
}
else{
top++;
stack[top]=x;
}
int main()
{
int push[6];

    return 0;
}}