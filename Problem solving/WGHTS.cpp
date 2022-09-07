#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,w,t;
	cin>>t;
	while(t--){
	    cin>>w>>x>>y>>z;
	    int a=x+y;
	    int b=y+z;
	    int c=x+z;
	    int d=x+y+z;
	    if((w==x)||(w==y)||(w==z)){
	        cout<<"YES"<<endl;
	    }
	    
	    else if((w==a)||(w==b)||(w==c)){
	        cout<<"YES"<<endl;
	    }
	    else if(w==d){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
