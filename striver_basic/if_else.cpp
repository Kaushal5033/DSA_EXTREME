#include<iostream>
using namespace std;

string compareIfElse(int a, int b) {
	if (a<b){
		cout<<"Smaller";
	}
	else if (a>b){
		cout<<"Greater";
	}
	else{
		cout<<"Equal";
	}
}

int main(){
	int a,b;
	cout<<"Enter the required value of A and B";
	cin>>a>>b;
	compareIfElse(a,b);
	return 0;
}
