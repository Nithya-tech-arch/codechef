/* Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <ostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <unordered_set>
using namespace std;
int main(int argc, char *a[])
{
    int t;
    cin>>t;
    int N,M;
    while(t--){
        cin>>N>>M;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        unordered_set<int> s(a, a+N);
        int x=s.size();
        if(x<M) cout<<"RAMYA"<<endl;
        else if(x>M)    cout<<"JANI"<<endl;
    }
}

