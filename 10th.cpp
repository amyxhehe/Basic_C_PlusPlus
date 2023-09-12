#include<iostream>
using namespace std;
int main(){
	//module1
	
	cout<<"first loop:\n";
	for (int i=0;i<=5;i++){
		cout<<"this is a forward for loop\n";
		//helpful for repitition or counting
		cout<<i<<"\n";
	}
	cout<<"\n";
	
	
	
	//module2
	
	cout<<"second loop:\n";
	for (int i=5;i>=0;i--){
		cout<<"this is a reverse for loop\n";
		//helpful for repitition or countdown
		cout<<i<<"\n";
	}
	cout<<"\n";
	
	
	
	//module3
	//reverse loop
	cout<<"solution:\n";
	for(int i=10;i>0;i--){
		cout<<i<<"\n";
	}
	cout<<"\n";
	
	
	
	//module4
	
	int n=1;
	for(int i=0;i<5;i++){
		n++;
		
		for(int j=0;j<5;j++){
			n++;
		}
		
		cout<<endl;
	}
	cout<<"number is:"<<n<<endl;
	
	
	return 0;
}
