#include<iostream>
using namespace std;
int main(){
	//using loop
	
	int x;
	bool isPrime;
	
	for(x=0;x<=100;x++){
		isPrime = true;
		
		
		if(x==0||x==1){
			isPrime = false;
		}
		
		
		for(int i=2;i<=x/2;i++){
			
			if(x%i==0){
				isPrime = false;
			}
		}
		
		if(isPrime == true){
			cout<<x<<" is Prime\n";
		}
		else{
			cout<<x<<" is not Prime\n";
		}
	}
	
	
	
	//using user input
	//int x;
	//bool isPrime = true;
	
	cout<<"enter a number: ";
	cin>>x;
	
	if(x==0||x==1){
		isPrime = false;
	}
	
	for(int i=2;i<=x/2;i++){
	
		if(x%i==0){
			isPrime = false;
		}
	}
	
	if(isPrime==true){
		cout<<x<<" is Prime\n";
	}
	else{
		cout<<x<<" is not Prime";
	}
	
	return 0;
}
