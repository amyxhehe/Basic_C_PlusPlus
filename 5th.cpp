#include<iostream>
using namespace std;
int main(){
	//module1
	int num1,num2;
	cout<<"enter num1:"<<endl;
	cin>>num1;
	cout<<"enter num2:"<<endl;
	cin>>num2;
	
	float ans;
	ans=num1+num2;
	cout<<num1<<"+"<<num2<<"="<<ans<<endl;
	ans=num1-num2;
	cout<<num1<<"-"<<num2<<"="<<ans<<endl;
	ans=num1*num2;
	cout<<num1<<"*"<<num2<<"="<<ans<<endl;
	ans=float(num1)/float(num2);
	cout<<num1<<"/"<<num2<<"="<<ans<<endl;
	
	
	
	//module2
	//int num1,num2;
	cout<<"enter num1:"<<endl;
	cin>>num1;
	cout<<"enter num2:"<<endl;
	cin>>num2;
	
	if(num1>num2){
		cout<<"n1 is greater than n2"<<endl;
	}
	else if(num1<num2){
		cout<<"n1 is smaller than n2"<<endl;
	}
	else{
		cout<<"both are equal"<<endl;
	}
	
	
	return 0;
}

