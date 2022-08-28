#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int N,K;
	while(t--){
	    cin>>N>>K;
	    if(N+1<=K)  cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
