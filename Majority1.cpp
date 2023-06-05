#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	
	//Moore's Voote Algorithm
	int maj = -1;
	int votes = 0;
	for(int i=0;i<n;i++){
		if(votes==0){
			maj = arr[i];
			votes=1;
		}
		else{
			if(arr[i]==maj) votes++;
			else votes--;
		}
	}
	votes = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==maj){
			votes++;
		}
	}
	if(votes>n/2) return maj;
	return -1;

}
