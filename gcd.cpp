#include <iostream>
using namespace std;

long gcd(long a, long b){
	long r;
	while(a > 0){
		r = b % a;
		b = a;
		a = r;
	}
	return b;
}

int main(){
	long a, b;
	cout<<"Enter two number:"<<endl;
	cin>>a>>b;
	cout<<"gcd is: "<<gcd(a,b)<<endl;
	return 0;
}