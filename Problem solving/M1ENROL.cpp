#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int seats,interested;
	while(t--){
	    cin>>seats>>interested;
	    if(interested<=seats)   cout<<"0"<<endl;
	    else    cout<<interested-seats<<endl;
	}
	return 0;
}
