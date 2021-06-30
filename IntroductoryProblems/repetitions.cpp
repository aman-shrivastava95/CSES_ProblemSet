#include<bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
    string str ;
    cin>>str ;
    int gMax = INT_MIN ;
    int cMax = 1 ;
    if(str.size()==1) {
        cout<<1 ;
        return 0 ;
    }
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]){
            cMax++ ;
        }else{
            cMax = 1 ;
        }
        gMax = max(gMax,cMax) ;
    }
    cout<<gMax ;
    return 0;
}
