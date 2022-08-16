#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	int difficult=1000;
	while(t--){
	    cin>>n;
	    int a[n];
	    int remove=0;
	    for (int i = 0; i < n; i++) {
	        /* code */
	        cin>>a[i];
	        if(a[i]>=difficult) remove++;
	    }
	    cout<<remove<<endl;
	}
	return 0;
}
