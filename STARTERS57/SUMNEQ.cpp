#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int count=0;
	for (int i = 0; i < N; i++) {
	    for (int j = 0; j < N; j++) {
	        if(i+j==N)  count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
