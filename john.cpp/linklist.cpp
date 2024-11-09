
#include <iostream>
using namespace std;

// Declare linked list node
struct Node{
 int data;
 struct Node* link;
};

struct Node* top;

// function to push the elements into stack
void push(int data){
 // Create a new node temp
 struct Node* temp;

 //allocate memory
 temp = new Node();

 // Check if the stack is full.
 if (!temp){
 cout << "\nStack Overflow";
 exit(1);
 }
 // Set data of temp equal to data
 temp->data = data;
 // Make temp point to the top
 temp->link = top;
 // Make temp as top of Stack
 top = temp;
}
// function to check if stack is empty or not
int isEmpty(){
 return top == NULL;
}
// function to return top element in a stack
int peek(){
 // Check for empty stack
 if (!isEmpty())
 return top->data;
 else
 exit(1);
}
// function to delete top element
void pop(){
 struct Node* temp;
 // Check for stack underflow
 if (top == NULL){
 cout << "\nStack Underflow" << endl;
 exit(1);
 }
 else{
 // Top assign into temp
 temp = top;
 // Assign second node to top
 top = top->link;
 // Destroy connection between
 // first and second
 temp->link = NULL;
 // Release memory of top node
 free(temp);
 }
}
// main function
int main(){
 // Push the elements of stack
 push(5);
 push(10);
 push(15);
 push(20);
 push(25);
 push(30);

 // Print top element of stack
 cout << "\nThe Top element is " << peek() << endl;

 // Delete top elements of stack
 pop();
 pop();
 pop();
 pop();
 pop();
 // Print top element of stack
 cout << "\nThe Top element is " << peek() << endl;

 return 0;
}
