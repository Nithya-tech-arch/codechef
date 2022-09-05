/* Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
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
        std::sort(a,a+N);
        int asum=0;
        for(int i=0;i<M;i++){
            asum+=a[i];
        }
        int bsum=0;
        for(int j=M;j<N;j++){
            bsum+=a[j];
        }
        cout<<bsum-asum<<endl;
    }
}
