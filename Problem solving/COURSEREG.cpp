#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,m,k;
	while(t--){
        cin>>n>>m>>k;
        if(m-k>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
