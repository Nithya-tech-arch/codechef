#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    if(n>100)   cout<<n-10<<endl;
	    else    cout<<n<<endl;
	}
	return 0;
}
