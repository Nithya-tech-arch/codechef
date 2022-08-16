#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a{"START38"}, b{"LTIME108"};
	    int count1=0;
	    int count2=0;
	    int n;
	    cin>>n;
	    for (int i = 0; i < n; i++) {
	        string x;
	        cin>>x;
	        if(x==a)    count1++;
	        else    count2++;
	    }
	    cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}


