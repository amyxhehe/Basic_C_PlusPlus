#include<iostream>
using namespace std;
int main(){
	//module1
	
	int marks_mids=10;
	int marks_finals=10;
	
	cout<<"Marks obtained in mids: "<<marks_mids<<endl;
	cout<<"Their adress is: "<<&marks_mids<<endl;
	
	cout<<"Marks obtained in finals: "<<marks_finals<<endl;
	cout<<"Their adress is: "<<&marks_finals<<endl;
	
	
	
	//module2
	
	int marks=10;
	int* ptr=&marks;
	cout<<"marks of mids: "<<marks<<endl;
	cout<<"address of pointer variable: "<<*ptr<<endl;
	*ptr=15;
	cout<<"new adress of pointer variable is: "<<*ptr;
	
	return 0;
}
