#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x=n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    for (int i = 0; i < n; i++) {
	        int j=i+1;
	        if(a[i]==a[j])  x=x-1;
	        else    x=x;
	        /* code */
	    }
	    cout<<x<<endl;
	}
	return 0;
}
