#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b,c,d;
	while(t--){
	    cin>>a>>b;
	    cin>>c>>d;
	    if((a<=c)&&(b<=d))  cout<<"POSSIBLE"<<endl;
	    else    cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
