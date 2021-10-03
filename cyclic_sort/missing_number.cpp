/**
 * https://leetcode.com/problems/missing-number/
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==i || nums[i]==n){
                i++;
            } else{
                swap(nums[i], nums[nums[i]]);
            }
        }
        for(int i=0; i<n; i++)
            if(nums[i]==n)
                return i;

        return n;
    }
};