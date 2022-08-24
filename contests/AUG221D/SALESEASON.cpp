#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x;
	int disc_p=0;
	while(t--){
	    cin>>x;
	    if(x<=100)  disc_p=x;
	    else if((x>100)&&(x<=1000)) disc_p=x-25;
	    else if((x>1000)&&(x<=5000))    disc_p=x-100;
	    else if(x>500)  disc_p=x-500;
	    cout<<disc_p<<endl;
	}
	return 0;
}
