#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    int r , ans=0;
	    int arr[10]={6,2,5,5,4,5,6,3,7,6};
	    while(sum!=0){
	        r=sum%10;
	        ans=ans+arr[r];
	        sum=sum/10;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
