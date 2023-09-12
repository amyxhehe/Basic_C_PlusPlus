#include<iostream>
using namespace std;
int main(){
	//module1
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	num++;
	num++;
	num--;
	num=num-1;
	cout<<num;
	
	
	
	//module2
	//int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%2==0){
		cout<<"You entered an even number";
	    //cout<<num<<" is an even number";
	}
	else
	cout<<"You entered an odd number";
    //cout<<num<<" is an odd number";*/
    
    
    
    //module3(opposite phenomenon)
    //int num;
	cout<<"Enter a number: ";
	cin>>num;
    cout<<"You entered "<<num;
    //cout<<num;
    
    if(num%2){ 
    	cout<<"The number you entered is odd";
    	//cout<<"It is an odd number";
    	//cout<<num<<" is odd";
	}
    else{
	    cout<<"The number you entered is even";
        //cout<<"It is an even number";
        //cout<<num<<" is even";
	}
    
    
	return 0;
}
