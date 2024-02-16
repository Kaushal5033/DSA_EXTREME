#include <iostream>
#include <string>
using namespace std;
int dataTypes(string type) {
	
	if(type=="integer"){
        cout<<"4 Bytes";
    }
    else if(type=="long"){
        cout<<"8 Bytes";
    }
    else if(type=="float"){
        cout<<"4 Bytes";
    }
    else if(type=="double"){
        cout<<"8 Bytes";
    }
    else if(type=="character"){
        cout<<"8 Bytes";
    }
    return -1;

    
}
int main(){
    string b;
    cout<<"Enter your datatype (integer,float,double, character):";
    cin>>b;
    dataTypes(b);
    return 0;
}