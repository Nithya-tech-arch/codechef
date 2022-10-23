#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
	double a;
	while(t--){
	    cin>>a>>x>>y>>z;
	    
	    a+=(a*z)/100;
	    if((a>=x)&&(a<=y)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
