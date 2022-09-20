#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i;
    cin>>i;
    int arr[i];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int n=0;n<i;n++){
        cin>>arr[n];
        
    }
    for(int m=size-1;m>=0;m--){
        cout<<arr[m]<<" ";
    }
        return 0;
}
