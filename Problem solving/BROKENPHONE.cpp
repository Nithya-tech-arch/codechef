#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x==y)    cout<<"ANY"<<endl;
	    else if(y<x)    cout<<"NEW PHONE"<<endl;
	    else if(x<y)    cout<<"REPAIR"<<endl;
	}
	return 0;
}
