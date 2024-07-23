#include<bits/stdc++.h>

using namespace std;

void sort012(vector<int> &nums){
    int p0 = 0, p1 = 0, p2 = nums.size() - 1;
    while(p1 <= p2){
        switch(nums[p1]){
            case 0:
                swap(nums[p0], nums[p1]);
                p0++;
                p1++;
                break;
            case 1:
                p1++;
                break;
            case 2:
                swap(nums[p2],nums[p1]);
                p2--;
                break;
        }
    }
}

int main(){
    vector<int> nums ={1,1,2,2,2,0,2,2,0,0};
    sort012(nums);
    for(int i : nums)  cout<<i<<" ";
    return 0;
}