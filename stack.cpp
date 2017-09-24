// stack data structure implementation in C++

#include <iostream>
using namespace std;

int top = -1;  //top == -1 means stack has no element


/**
 *In case of stack data_structure insertion of element known as PUSH 
 *operation.
 *This funcntion take one element as parameter and push into the stack.
 */ 
bool push(int stack[], int ele, int stack_size){
	
	if(top == stack_size-1){
	
		cout<<"stack is Full(Overflow)!!!"<<endl;
		return false;
	}
	else{
	
		top++;
		stack[top] = ele;
	
	}
	return true;
}


/**
 *In case of stack data_structure deletion of element known as POP 
 *operation.
 *This funcntion delete one element at a time from the stack.
 */ 
bool pop(){
	
	if(top == -1){
	
		cout<<"stack is Empty(Underflow)"<<endl;
		return false;
	
	}
	else{
	
		top = top -1;
	
	}
}

//This funtion display the all element of the stack.
void display(int stack[]){
	
	cout<<"stack elements is:"<<endl;
	if(top == -1){
		cout<<"empty";
	}
	for(int i = 0 ; i <= top ; i++)
		cout<<stack[i]<<" ";

	cout<<endl;
}

//main function
int main(){
	// stack work in LIFO( Last In First Out ) fashion
	int stack_size = 5;
	int stack[stack_size];

	for(int ele = 1 ; ele <= 5 ; ele++)
		push(stack, ele,  stack_size);

	display(stack);

	//should be overflow beacause stack is Full now
	push(stack, 6, stack_size);

	for(int ele = 1 ; ele <= 5 ; ele++)
		pop();

	//display(stack);
	
	//should be Underflow beacause stack is Empty now
	pop();

	return 0;
}