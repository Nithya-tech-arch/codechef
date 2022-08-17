#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int no;
	while(t--){
	    cin>>no;
	    int rev=0;
	    int n=no;
	    while(n!=0){
	        int temp=n%10;
	        rev=(rev*10) + temp;
	        n=n/10;
	    }
	    if(rev==no) cout<<"wins"<<endl;
	    else cout<<"loses"<<endl;
	}
