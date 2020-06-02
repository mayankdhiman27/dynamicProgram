#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int n;
    cin >> n;
    
    int wt[n];
    int val[n];
    for(int i = 0;i<n;i++){
        cin >> wt[i];
    }
    
    for(int i = 0;i<n;i++){
        cin >> val[i];
    }
    
    int W;
    cin >> W;
    
    int dp[n+1][W+1];
    
    for(int i = 0;i<=n;i++){
        dp[i][j] = 0;
    }
    for(int j = 0;j<=W;j++){
        dp[i][j] = 0;
    }
	
	for(int i = 0;i<=n;i++){
	    for(int j = 0;j<=W;j++){
	        if(wt[i-1] <= W){
	            dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
	        }
	        else {
	            dp[i][j] = dp[i-1][j];
	        }
	    }
	}
	
	cout << dp[n][W];
	
	return 0;
}
