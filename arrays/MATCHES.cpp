#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b=0;
	while(t--){
	    cin>>a>>b;
	    int sum=0;
	    sum=a+b;
	    int n=0;
	    int count=0;
	    while(sum){
	        n=sum%10;
	        if(n==1)    count+=2;
	        else if(n==7)   count+=3;
	        else if(n==4)   count+=4;
	        else if((n==2)||(n==3)||(n==5))   count+=5;
	        else if((n==0)||(n==6)||(n==9))   count+=6;
	        else if(n==8)   count+=7;
	        sum=sum/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
