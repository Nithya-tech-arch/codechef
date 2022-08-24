#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	double a,b,c;
	while(t--){
	    cin>>a>>b>>c;
	    double avg=(a+b)/2;
	    if(avg>c)   cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
