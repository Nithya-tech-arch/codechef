#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	double x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    double fiftypert=x/2;
	    if(y>=fiftypert) cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
