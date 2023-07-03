#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{	
	long long s = 0, s2 = 0;
	for(int i = 0; i < n; i++){
		s += arr[i];
		s2 += arr[i] * arr[i];
	}

	long long sn, s2n;
	sn = (n * (n + 1)) / 2;
	s2n = (n * (n + 1) * (2*n +1)) / 6;

	long long sdiff = sn - s;
	long long s2diff = s2n - s2;

	long long ssum = s2diff / sdiff;

	pair<int,int> ans;
	ans.first = (ssum + sdiff) /2;
	ans.second = (ssum - sdiff) /2;
	
	return ans; 
	
}
