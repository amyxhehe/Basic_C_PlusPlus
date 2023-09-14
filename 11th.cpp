#include<iostream>
using namespace std;
int main(){
	//module1
	
	int arr[3]={1,2,3};
	
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	//cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2];
	
	for(int i=0;i<=2;i++){
		cout<<arr[i]<<endl;
	}
	
	
	
	
	//module2
	
	//int arr[3]={1,2,3};
	cout<<"enter first value into the array ";
	cin>>arr[0];
	cout<<"enter second value into the array ";
	cin>>arr[1];
	cout<<"enter third value into the array ";
	cin>>arr[2];
	
	
	
	/*
	int arr[3];
	for(int i=0;i<3;i++){
		cout<<"enter value number "<<i+1<<" into the array";
		cin>>arr[i];
	}
	*/
	
	for(int i=0;i<=2;i++){
		cout<<arr[i]<<endl;
	}
	
	
	
	
	//module3
	
	char grade[3]={'a','b','c'};
	for(int i=0;i<=2;i++){
		cout<<grade[i]<<endl;
	}
	
	
	
	
	//module4
	//string remarks[3]={"good","bad","mediocre"};
	
	string remarks[3];
	for(int i=0;i<3;i++){
		cout<<"enter string: "<<i+1;
		cin>>remarks[i];
	}
	for(int i=0;i<=2;i++){
		cout<<remarks[i]<<endl;
	}
	
	
	return 0;
}
