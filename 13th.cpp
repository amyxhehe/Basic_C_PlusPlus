#include<iostream>
using namespace std;
int main(){
	//module1
	
	int n1=10,n2=15;
	cout<<"before swapping n1: "<<n1<<endl;
	cout<<"before swapping n2: "<<n2<<endl;
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	cout<<"after swapping n1: "<<n1<<endl;
	cout<<"after swapping n2: "<<n2<<endl;
	
	
	
	//module2
	
	int factorial=1,num=0;
	cout<<"enter a number: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		factorial=factorial*i;
	}
	cout<<"factorial of "<<num<<" is: "<<factorial;
	
	
	
	//module3
	
	int factorial=1,num=0;
	for(num=0;num<10;num++){
		factorial=1;
		for(int i=1;i<=num;i++){
			factorial=factorial*i;
		}
		cout<<"factorial of "<<num<<" is: "<<factorial<<endl;
	}
	
	
	//module4
	
	int year;
	cout<<"enter a year: ";
	cin>>year;
	if((year%4 == 0 && year%100 != 0) || year%400 == 0){
		cout<<year<<" is a leap year.";
	}
	else{
		cout<<year<<" is not a leap year.";
	}
	
	return 0;
}
