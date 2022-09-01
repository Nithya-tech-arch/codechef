#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
	int cred1=4;
	int cred2=2;
	while(t--){
	    cin>>x>>y>>z;
	    cout<<(x*cred1)+(y*cred2)<<endl;
	}
	return 0;
}
