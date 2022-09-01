#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
	while(t--){
	    cin>>x>>y>>z;
	    int without_ticket=y-z;
	    cout<<(x*without_ticket)<<endl;
	}
	return 0;
}
