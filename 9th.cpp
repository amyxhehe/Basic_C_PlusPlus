#include<iostream>
using namespace std;
int main(){
	//module1
	
	int i=0;
	int n;
	cout<<"enter a number";
	cin>>n;
	while(i<n){
		cout<<"hello"<<endl;
		i=i+1;
	}
	
	
	//module2
	
	char choice='y';
	while(choice=='y'){
		cout<<"hi";
		cout<<"enter 'y' to continue\t";
		cin>>choice;
	}	
	
	
	
	//we can make sensor lights using while loop
	
	
	//module3
	
	int n1=0,n2=0;
	//char choice='y';
	while(choice=='y'){
		cout<<"enter 1st number";
		cin>>n1;
		cout<<"enter 2nd number";
		cin>>n2;
		cout<<"sum is: "<<n1+n2<<endl;
		
		cout<<"enter 'y' to continue\t";
		cin>>choice;
	}
	
	
	//module4
	
	//int n1=0,n2=0;
	//char choice;
	do{
		cout<<"enter 1st number";
		cin>>n1;
		cout<<"enter 2nd number";
		cin>>n2;
		cout<<"sum is: "<<n1+n2<<endl;
		
		cout<<"enter 'y' to continue\t";
		cin>>choice;
	}while(choice=='y');
	
	
	
	//module5
	
	for(int i=0;i<5;i++){
		
		for(int j=0;j<5;j++){
			cout<<"value of j: "<<j<<endl;
		}
		cout<<endl;
		
	}
	
	
	
	return 0;
}
