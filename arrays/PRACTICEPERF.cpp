#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n=4;
	int limit=10;
	int target=0;
	int a[n];
	for (int i = 0; i < n; i++) {
	    /* code */
	    cin>>a[i];
	    if(a[i]>=limit) target++;
	}
	cout<<target<<endl;
	return 0;
}
