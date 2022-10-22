#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int d,l,r;
	string s;
	cin>>t;
	while(t--){
	    cin>>d>>l>>r;
	    if((d>=l)&&(d<=r)){
	        s="Take second dose now";
	    }
	    else if(d>r){
	        s="Too Late";
	    }
	    else if(d<l){
	        s="Too Early";
	    }
	    cout<<s<<endl;
	}
	return 0;
}
