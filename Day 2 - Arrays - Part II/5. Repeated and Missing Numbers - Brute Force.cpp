#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int> cnt(n+1,0);
	for(int i = 0; i < n; i++){
		cnt[arr[i]]++;
	}
	pair<int,int> ans;
	for(int i = 1; i <= n; i++){
		if(cnt[i] == 0)	ans.first = i;
		if(cnt[i] == 2)	ans.second = i;
	}
	return ans; 
	
}
