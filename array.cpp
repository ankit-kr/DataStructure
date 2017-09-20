#include <iostream>
using namespace std;

int main(){

	//***array declaration and initialization***
	//array size is 5;
	//index    0,  1,  2,   3,  4
	int a[] = {10, 20, 30, 40, 50};



	//***array declaration***
	//size 10
	// index will be 0 to 9
	int b[10];



	//***initialization of array using for loop with user input***
	/*
	for(int i = 0; i < 10; i++){
		cin>>b[i];
	}
	*/


	//***display all element of array a[]***
	for(int i = 0; i < 5; i++){
		cout<< a[i] << " ";
	}
	//output: 10 20 30 40 50 

	return 0;
}