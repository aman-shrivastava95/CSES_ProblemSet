#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

//take care of the data type to avoid overflow.
int main(int argc, char const *argv[])
{
    ll n,currsum = 0  ;
    cin>>n ;
    ll sum = n*(n+1)/2 ;
    n-- ;
    ll temp ;
    while(n--){
        cin>>temp ;
        currsum+=temp ;
    }
    cout<<sum-currsum ;
    return 0;
}
