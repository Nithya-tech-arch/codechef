#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b,c;
	int d,e,f=0;
	int maxi=0;
	while(t--){
	    cin>>a>>b>>c;
	    d=a+b;
	    e=b+c;
	    f=a+c;
	    cout<<max(d,max(e,f))<<endl;
	}
	return 0;
}
