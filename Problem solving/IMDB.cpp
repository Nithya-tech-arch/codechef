#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    int space,rating=0;
	    int possible_movie=0;
	    for(int i=0;i<n;i++){
	        cin>>space>>rating;
	        if(space<=x){
	            possible_movie=max(possible_movie,rating);
	        }
	        
	    }
	    cout<<possible_movie<<endl;
	}
	return 0;
}
