#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if((a>b)&&(a>c))    cout<<"Setter"<<endl;
	    else if((b>a)&&(b>c))   cout<<"Tester"<<endl;
	    else    cout<<"Editorialist"<<endl;
	}
	return 0;
}
