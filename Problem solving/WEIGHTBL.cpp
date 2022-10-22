#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	string s;
	while(t--){
	    cin>>x;
	    if((x>=1)&&(x<100)){
	       s="Easy";
	    }
	    else if((x>=100)&&(x<200)){
	        s="Medium";
	    }
	    else if((x>=200)&&(x<=300)){
	        s="Hard";
	    }
	    cout<<s<<endl;
	}
	return 0;
}
