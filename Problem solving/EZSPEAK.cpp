#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int N;
	string S;
	cin>>t;
	while(t--){
	    cin>>N;
	    cin>>S;
	    int count=0;
	    int shift=0;
	    for (int i = 0; i < N; i++) {
	        char ch=S[i];
	        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
	            count=0;
	            continue;
	        }
	        else{
	            count++;
	            if(count>=4){
	                shift=1;
	                break;
	            }
	        }
	    }
	    if(!shift)  cout<<"YES"<<endl;
	    else    cout<<"NO"<<endl;
	}
	return 0;
}
