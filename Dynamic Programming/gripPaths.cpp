#include<bits/stdc++.h>
using namespace std ;
typedef long long int lli ;
const lli  mod =  1e9+7 ; //this is 10^9 + 7 ;


int main(int argc, char const *argv[])
{  
    int n ;
    cin>>n ;
    char grid[n][n] ;
    int dp[n][n] ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j] ;
        }
    }
    
    //handle this case here.
    if(grid[0][0]=='*'){
        cout<<0 ;
        return 0;
    }
    dp[0][0] = 1 ;
    //fill the first column
    for(int i=1;i<n;i++){
        if(grid[i][0]!='*')
            dp[i][0] = dp[i-1][0]  ;
        else
            dp[i][0] = 0 ;
    }
     //fill the first row
    for(int i=1;i<n;i++){
        if(grid[0][i]!='*')
            dp[0][i] = dp[0][i-1] ;
        else
            dp[0][i] = 0 ;
    }
    //fill rest of the cells
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(grid[i][j]=='*')
                dp[i][j] = 0 ;
            else{
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod ;
            }
        }
    }
    cout<<dp[n-1][n-1] ;

    return 0;
}
