#include <iostream>
using namespace std;

bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	//first iteration: i=2, 2*2 <=15, i++=3 will execute
	//second iteration: i=3, 3*3 <=15, i++=4 will execute
	//third iteration: i=4, 4*4 <=15 false; will not execute
	for(int i=2; i * i <=n; i++){
	if(n % i==0){
		return false; //not prime number
	}	
	}
	return true; //prime number
}

int main(){
	int number;
	cout<<"Enter a positive number: ";
	cin>>number;
	
	if(isPrime(number)){
cout<<number<<" is a prime number"<<endl;
	}
	else{
		cout<<number<<" is not a prime number"<<endl;
	}
}
