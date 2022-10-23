// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count=0;
	    int rem=0;
	    while(n){
	        rem=n%10;
	        if(rem==4){
	            count++;
	        }
	        n=n/10;
	    }
	    
	    cout << count<< endl;
	}
	return 0;
}




