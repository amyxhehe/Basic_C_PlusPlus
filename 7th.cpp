#include<iostream>
using namespace std;
int main(){
	//module1
	
	for(int i=0;i<=9;i++){
		cout<<i+1<<endl;
	}
	
	
	
	//module2
	
	int n;
	cout<<"enter a number";
	cin>>n;
	for(int i=0;i<=n;i++){
		cout<<i+1<<endl;
	}
	
	
	
	//module3
	
	int start,end;
	cout<<"enter starting number";
	cin>>start;
	cout<<"enter ending number";
	cin>>end;
	for(start;start<=end;start++){
		cout<<start<<endl;
	}
	
	
	//module4
	
	//int start,end;
	cout<<"enter starting number";
	cin>>start;
	cout<<"enter ending number";
	cin>>end;
	for(start;start<=end;start=start+2){
		cout<<start<<endl;
	}
	
	
	//module5
	
	//int start,end;
	cout<<"enter starting number";
	cin>>start;
	cout<<"enter ending number";
	cin>>end;
	for(end;end>=start;end--){
		cout<<end<<endl;
	}
	
	
	return 0;
}
