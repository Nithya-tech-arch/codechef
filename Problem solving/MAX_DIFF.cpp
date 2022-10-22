#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int l,r;
	while(t--){
	    cin>>l>>r;
	    if(l>=r)    cout<<r<<endl;
	    else{
	        cout<<l-(r-l)<<endl;
	    }
	}
	return 0;
}
