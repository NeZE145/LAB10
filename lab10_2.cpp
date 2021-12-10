#include<iostream>
#include<string>
using namespace std;

string printO(int x,int y){
	int i=0,j=0;string A,B;
	if(x<=0||y<=0){
		cout<<"Invalid input";
	}else{
	while(j<x){
		while(i<y){
			A=A+"O";
			i++;
		}
	B=A;
	cout << B<<endl;
	j++;}
	}
	return B;
}





int main(){
	
	printO(3,5);
	cout << "\n";
	
	
	return 0;
}
