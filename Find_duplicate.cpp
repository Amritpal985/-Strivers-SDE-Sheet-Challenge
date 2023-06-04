#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int ans = -1;
	for(int i=0;i<n;i++){
		int idx = abs(arr[i]);
		arr[idx] = arr[idx]*(-1);
		if(arr[idx]>0){
			ans = abs(arr[i]);
		}
	}
	return ans;
}
