#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
	int a1,a2,a3=0;
	while(t--){
	    cin>>x>>y>>z;
	    a1=(x+y)/2;
	    a2=(y+z)/2;
	    a3=(x+z)/2;
	    if((a1>=35)&&(a2>=35)&&(a3>=35)){
	        cout<<"Pass"<<endl;
	    }
	    else{
	        cout<<"Fail"<<endl;
	    }
	}
	return 0;
}
