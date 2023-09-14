#include<iostream>
using namespace std;

void hola(){
	cout<<"hola"<<endl;
}

int newFunction(){
	int x=0,y=0;
	cout<<"enter number 1: ";
	cin>>x;
	cout<<"enter number 2: ";
	cin>>y;
	int sum=x+y;
	return sum;
	//return x+y;
	//return 5;
}



int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

int div(int a,int b){
	return a/b;
}

int main(){
	//hola();
	//int x=newFunction();
	//cout<<x;
	int x=0,y=0;
	char choice;
	int solution;
	int z=1;
	
	//condition that would never be false
	while(z!=0){
	cout<<"Enter number 1: ";
	cin>>x;
	cout<<"Enter number 2: ";
	cin>>y;
	cout<<"Enter + to add, - to subtract, * to multiply, / to divide.  ";
	cin>>choice;

	if(choice=='+'){
	solution=add(x,y);
	//(10,5) are arguments
	cout<<"Addition Function returns: "<<solution<<endl;
	}
	else if(choice=='-'){
	solution=sub(x,y);
	cout<<"Subtraction Function returns: "<<solution<<endl;
	}
	else if(choice=='*'){
	solution=mul(x,y);
	cout<<"Multiplication Function returns: "<<solution<<endl;
	}
	else if(choice=='/'){
	solution=div(x,y);
	cout<<"Division Function returns: "<<solution<<endl;
	}
	else{
		cout<<"Invalid input";
	}
	z=z+1;
	}	
	*/
	return 0;
}
