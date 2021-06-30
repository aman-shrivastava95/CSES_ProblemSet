#include<iostream>
using namespace std ;
typedef long long ll ;

//point to notice was that normal int will lead to overflow ,hence we use long long.
int main(int argc, char const *argv[])
{
    ll n ;
    cin>>n ;
    
    while(n!=1){
        cout<<n<<" " ;
        if(n%2==0){
            n/=2 ;
        }else{
            n=n*3+1 ;
        }
    }
    cout<<n ;
    return 0;
}
