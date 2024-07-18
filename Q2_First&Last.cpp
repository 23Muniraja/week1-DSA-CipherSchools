#include<bits/stdc++.h>

using namespace std;

int firstOccurence(vector<int> &nums, int start, int end, int target){
    if(start < end) return -1;
    
}

int lastOccurence(vector<int> &nums, int start, int end, int target){

}

vector<int> firstandlastOccurence(vector<int> &nums, int target){
    int first = firstOccurence(nums, 0, nums.size()-1, target);
    int last = lastOccurence(nums, 0, nums.size()-1, target);
    return {first, last};
}



int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl<<"Enter array elements :"<<endl;
    vector<int> nums(n);
    for(int i=0;i<n;i++)    
        cin>>nums[i];
    
    int target;
    cout<<endl<<"Enter target value :"<<endl;
    cin>>target;
    firstandlastOccurence(nums, target);
    return 0;
}