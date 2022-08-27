#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y;
	while(t--){
	    cin>>x>>y;
	    int r=x/y;
	    if(((x%y)==0)&&(r%2==0)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
