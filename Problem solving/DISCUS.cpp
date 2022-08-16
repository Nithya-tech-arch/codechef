#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
	while(t--){
	    cin>>x>>y>>z;
	    if((x>=y)&&(x>=z))  cout<<x<<endl;
	    else if((y>=x)&&(y>=z)) cout<<y<<endl;
	    else    cout<<z<<endl;
	}
	return 0;
}
