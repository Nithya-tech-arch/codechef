#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int sum=k*(k+1)/2;
	    if(sum<=n)  cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
