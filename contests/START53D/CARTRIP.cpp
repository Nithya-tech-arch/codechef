#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int km;
	int initial_rs=10;
	int final_rs=0;
	while(t--){
	    cin>>km;
	    if(km<300)  cout<<3000<<endl;
	    else    cout<<initial_rs*km<<endl;
	    
	}
	return 0;
}
