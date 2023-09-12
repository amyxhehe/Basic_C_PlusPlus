#include<iostream>
using namespace std;
int main(){
	//module1
	
	int sum=0;
	int avg=0;
	int n=0;
	int count=0;
	for(int i=0;i<10;i++){
		cout<<"enter a number";
		cin>>n;
		sum=sum+n;
		count=count+1;
	}
	avg=sum/count;
	cout<<"sum is:"<<sum<<endl;
	cout<<"average is:"<<avg;
	
	
	
	//module2
	/*
	int sum=0;
	int avg=0;
	int n=0;
	int count=0;
	*/
	for(int i=0;i<10;i++){
		cout<<"enter a number";
		cin>>n;
		sum=sum+n;
		count=count+1;
		if(i==5){
			break;
		}
	}
	avg=sum/count;
	cout<<"sum is:"<<sum<<endl;
	cout<<"average is:"<<avg;
	
	
	return 0;
}
