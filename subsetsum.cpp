#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int sum;
	cin >> sum;
	int val[n];
	bool dp[n+1][sum+1];
	
	for(int i = 0;i<n;i++){
	    cin >> val[i];
	}
	
	for(int i = 0;i<=n;i++){
	    dp[i][0] = true;
	}
	
	for(int j = 0;j<=sum;j++){
	    dp[0][j] = false;
	}
	
	for(int i = 1;i<=n;i++){
	    for(int j = 1;j<=sum;j++){
	        if(val[i-1] <= j)
	            dp[i][j] = dp[i-1][j-val[i-1]] || dp[i-1][j];
	        else
	            dp[i][j] = dp[i-1][j];
	            
	    }
	}
	
	cout << dp[n][sum];
	
	return 0;
}
