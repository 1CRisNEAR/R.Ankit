/*
41. First Missing Positive

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

Exp. 1->

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

Exp. 2->

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.

Exp. 3->

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}

	int ans=0;

	for(int i=1;i<n+2;i++){
		if(m.find(i)==m.end()){
			ans=i;
			break;
		}
	}

	cout<<ans;

	return 0;
}
