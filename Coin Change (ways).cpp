#include<bits/stdc++.h>
using namespace std;
int cunt(int c[],int n,int sum)
{
    //array[row][column]
    int t[n+1][sum+1];

    //row
    for(int i=0;i<=n;i++)
    {
        //column
        for(int j=0;j<=sum;j++)
        {
            if(i==0&&j==0)
            {
                t[i][j]=1;
            }
            else if(i==0&&j!=0){
                t[i][j]=0;
            }
            else if(c[i-1]>j){
                t[i][j]=t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j]+t[i][j-c[i-1]];
            }
        }
    }
    return t[n][sum];
}
int main(){
    int c[]={2,3,5,10};
    int n=sizeof(c)/sizeof(c[0]);
    int sum=15;
    cout<<cunt(c,n,sum)<<endl;
  return 0;
}*/




#include <iostream>

using namespace std;

int coinChange(int amount, int coins[], int n) {
    int dp[n+1][amount+1];

    // initialize dp table
    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    for(int j = 1; j <= amount; j++) {
        dp[0][j] = 0;
    }

    // fill dp table
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= amount; j++) {
            dp[i][j] = dp[i-1][j]; // exclude current coin
            if(j >= coins[i-1]) {
                dp[i][j] += dp[i][j-coins[i-1]]; // include current coin
            }
        }
    }

    return dp[n][amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int amount = 9;
    int n = sizeof(coins)/sizeof(coins[0]);

    int ways = coinChange(amount, coins, n);

    cout << "Number of ways to make " << amount << " cents: " << ways << endl;

    return 0;
}

