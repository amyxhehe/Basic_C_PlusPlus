#include<iostream>
using namespace std;
int main(){
	int n1=6;
	int n2=2;
	//method1

	cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
	cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
	cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
	cout<<n1<<"/"<<n2<<"="<<n1/n2;
	
	
	//method2
	
	float add=n1+n2;
	float sub=n1-n2;
	float mul=n1*n2;
	float div=n1/n2;
	cout<<n1<<"+"<<n2<<"="<<add<<endl;
	cout<<n1<<"-"<<n2<<"="<<sub<<endl;
	cout<<n1<<"*"<<n2<<"="<<mul<<endl;
	cout<<n1<<"/"<<n2<<"="<<div;
	
	
	//method3
	
	float ans;
	ans=n1+n2;
	cout<<n1<<"+"<<n2<<"="<<ans<<endl;
	ans=n1-n2;
	cout<<n1<<"-"<<n2<<"="<<ans<<endl;
	ans=n1*n2;
	cout<<n1<<"*"<<n2<<"="<<ans<<endl;
	ans=n1/n2;
	cout<<n1<<"/"<<n2<<"="<<ans;
	
	
	//cout<<"2+2="<<2+2<<"\n"<<4+4;
	
	return 0;
}
