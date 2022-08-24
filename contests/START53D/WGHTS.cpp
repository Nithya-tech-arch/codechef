#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int w,x,y,z;
	while(t--){
	    cin>>w>>x>>y>>z;
	    int f=x+y;
	    int s=y+z;
	    int t=x+z;
	    int c=x+y+z;
	    if((w==x)||(w==y)||(w==z)){
	        cout<<"YES"<<endl;
	    }
	    else if((w==f)||(w==s)||(w==t)){
	        cout<<"YES"<<endl;
	    }
	    else if(w==c){
	        cout<<"YES"<<endl;
	    }
	    else    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
