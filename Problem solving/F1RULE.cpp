#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y;
	while(t--){
	    cin>>x>>y;
	    int lim=x*1.07;
	    if(y<=lim)  cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
