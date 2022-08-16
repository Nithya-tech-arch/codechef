#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b;
	while(t--){
	    cin>>a>>b;
	    if(a==b)    cout<<"ANY"<<endl;
	    else if(a<b)    cout<<"FIRST"<<endl;
	    else    cout<<"SECOND"<<endl;
	}
	return 0;
}
