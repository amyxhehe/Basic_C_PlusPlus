#include<iostream>
#include<string>
using namespace std;
int main(){
	
	//module1
	
	int myArray[5]={};
	for(int i=0;i<=4;i++){
		cout<<"enter a number into the array";
		cin>>myArray[i];
	}
	
	//size of array
	cout<<sizeof(myArray);
	
	//length of array
	cout<<sizeof(myArray);
	int arrayLength=sizeof(myArray)/sizeof[5];
	cout<<"length of array is: "<<arrayLength;
	
	
	//multi-dimensional array
	//int arr[3][3]={ {1,2,3},{4,5,6} };
	
	
	//module3
	
	string classInfo="1st Morning \"AI\" \;";
	cout<<classInfo;
	
	
	//module4
	//string concatenation
	
	string firstName="Aeman";
	string lastName="Ch";
	string fullName=firstName+" "+lastName;
	cout<<fullName;
	
	
	//module 5
	//string append
	
	string firstName="Aeman";
	string lastName="Ch";
	firstName=firstName.append(" ");
	string fullName=firstName.append(lastName);
	//string fullName=firstName.append(" ").append(lastName);
	cout<<"Full Name is: "<<fullName;
	
	
	//module6
	
	string n1="10";
	string n2="20";
	string n3=n1+n2;
	cout<<n3;
	
	
	//module7
	string name="Aeman Ch";
	cout<<name.length();	
	cout<<name.size();
	
	return 0;
}
