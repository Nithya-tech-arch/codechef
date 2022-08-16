#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y;
	int vol=0;
	while(t--){
	    cin>>x>>y;
	    if(x>y) 
	    {
	        vol=x-y;
	        cout<<vol<<"\n";
	    }
	    else if(y>x)   
	    {
	        vol=y-x;
	        cout<<vol<<"\n";
	    }
	    else    {
	        vol=x-y;
	        cout<<vol<<"\n";
	    }
	}
	return 0;
}
