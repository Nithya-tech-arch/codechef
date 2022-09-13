#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int W,x,y,z;
	while(t--){
	    cin>>W>>x>>y>>z;
	    cout<<W+((x-y)*z)<<endl;
	}
	return 0;
}
