#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//Create/open a file
	ofstream fileVar("firstFile.txt");
	
	//Write in the file
	fileVar<<"Hello Files~~~";
	
	//Close file
	fileVar.close();
	
	cout<<"Done Saving Data";
}
