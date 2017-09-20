#include <iostream>
using namespace std;
int main(){

	//***declaration and initialization***
	// row size is: 2 
	// col size is: 2

	int a[2][2] = { {10, 20}, {30, 40} };


	
	//***only declaration***
	//row size 2
	//col size 3
	int b[2][3];

	//display of a[][] multi-dimentional array using for loop
	
	//row loop
	for(int i = 0; i < 2; i++){
		//col loop
		for(int j = 0; j < 2; j++){
			cout<< a[i][j] <<" ";
		}
		//end of one row-----> goto new line
		cout<<endl;
	}
	/**
	output:
			10 20
			30 40
	**/
	return 0;
}