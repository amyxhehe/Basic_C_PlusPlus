#include<iostream>
using namespace std;
int main(){
	
	//multi dimensional array
	//module1
	
	
	int arr[2][3]={  {1,2,3} , {4,5,6}  };
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	
	
	
	//module2
	
	int arr[3];
	int i=0;
	while(i<3){
		cout<<"Enter value "<<i+1<<" into the array: ";
		cin>>arr[i];
		i++;
	}
	i=0;
	while(i<3){
		cout<<"Value number "<<i+1<<" in the array is: "<<arr[i]<<endl;
		i++;
	}
	
	
	
	
	//module3
	
	int n=0;
	cout<<"how many values do you want in your array? ";
	cin>>n;
	int marks[n]={};
	int i=0;
	while(i<n){
		cout<<"enter a number: ";
		cin>>marks[i];
		i++;
	}
	i=0;
	while(i<n){
		cout<<"value number "<<i+1<<" is: "<<marks[i]<<endl;
		i++;
	}
	
	
	
	
	//module4
	
	int myArray[4]={1,2,3,4};
	myArray[4]=5;
	cout<<myArray[4];
	cout<<endl;
	char ch='y';
	if(ch=='y'){
	cout<<"enter 'y' to continue: ";
	cin>>ch;
	}
	
	
	
	//module5
	
	int myaArray[4]={};
	char ch='y';
	int i=0;
	while(ch=='y'){
	cout<<"enter a number: ";
	cin>>myArray[i];
	i=i+1;
	cout<<"enter character 'y' to continue: ";
	cin>>ch;
	}
	
	
	
	//module6
	
	int myArray[5]={};
	for(int i=0;i<=4;i++){
		cout<<"enter a number into the array";
		cin>>myArray[i];
	}
	
	
	return 0;
}
