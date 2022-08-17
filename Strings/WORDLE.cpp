#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string x,y;
	string z="";
	while(t--){
	    cin>>x;
	    cin>>y;
	    for(int i=0;x[i]!='\0';i++){
	        if(x[i]==y[i])  cout<<"G";
	        else    cout<<"B";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
