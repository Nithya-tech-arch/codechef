#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,k;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    int count=0;
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	        if(a[i]>k)  count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
