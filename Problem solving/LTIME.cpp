#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int LunchTime;
	while(t--){
	    cin>>LunchTime;
	    if((LunchTime<=4)&&(LunchTime>=1))  cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
