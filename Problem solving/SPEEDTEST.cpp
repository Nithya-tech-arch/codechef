#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int k1,t1,k2,t2;
	while(t--){
	    cin>>k1>>t1>>k2>>t2;
	    double s1=(double)k1/t1;
	    double s2=(double)k2/t2;
	    if(s1>s2){
	        cout<<"Alice"<<endl;
	    }
	    else if(s1==s2){
	        cout<<"Equal"<<endl;
	    }
	    else if(s2>s1){
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
