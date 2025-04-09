///leetcode 3375 ,week08-1.cpp
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int N=nums.size();
        int a[101]={};
        for(int i=0;i<N;i++){
            int now=nums[i];
            if(now<k)
                return -1;
            a[now]++;
        }
        int ans=0;
        for(int now=k+1;now<=100;now++){
            if(a[now]>0)
                ans++;
        }
        return ans;
    }
};
