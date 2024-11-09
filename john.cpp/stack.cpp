
#include<iostream>
using namespace std;
int top = -1;

 void push (int stack[ ] , int a , int n){
 if ( top == n-1)
 cout << "Stack Overflow" << endl ;
 else
 
 top = top +1 ;
 stack[ top ] = a ;
 }
 bool isEmpty ( ){
 if ( top == -1 )
 return true ;
 else
 return false;
 }

 void pop ( ){
 if( isEmpty ( ) )
 cout << "Stack Underflow " << endl ;
 else
 top = top - 1 ;
 }


 int size ( ){
 return top + 1;
 }

 int topElement (int stack[]){
 return stack[ top ];
 }

 int main( ){
 int stack[ 6 ];

 push(stack , 5 , 6 ) ;
 cout << "Current size of stack is " << size ( ) << endl ;

 push(stack , 10 , 6);
 push (stack , 15 , 6) ;
 push (stack , 20 , 6) ;
 push (stack , 25 , 6) ;
 push (stack , 30 , 6) ;
 cout << "Current size of stack is " << size( ) << endl ;

 //As the stack is full, further pushing will show an overflow condition.
 push(stack , 35 , 6) ;

 cout << "At present, the top element in stack is " << topElement(stack) << endl;

 for(int i = 0 ; i < 6;i++ )
 pop( );
 cout << "Current size of stack is " << size( ) << endl ;

 //As the stack is empty , further popping will show an underflow condition.
 pop ( );
 return 0;
 }
