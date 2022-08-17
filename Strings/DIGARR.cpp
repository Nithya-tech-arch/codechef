#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string k;
	    cin>>k;
	    bool flag=false;
	    for (int i = 0; i < n; i++) {
	        if((k[i]=='0')||(k[i]=='5')){
	            flag=true;
	        }
	        
	    }
	    if(flag)    cout<<"Yes"<<endl;
	    else    cout<<"No"<<endl;
	}
	return 0;
}
