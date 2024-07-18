#include<bits/stdc++.h>

using namespace std;

int rainwaterTrapping(vector<int> &height, int n){
    int i = 0, left_max = height[0], sum = 0;
    int j = height.size() - 1, right_max = height[j];
    while(i < j){
        if(left_max <= right_max){
            sum += (left_max - height[i]);
            i++;
            left_max = max(left_max, height[i]);
        }
        else{
            sum += (right_max - height[j]);
            j--;
            right_max = max(right_max, height[j]);
        }
    }
    return sum;

}

int main(){
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,2};
    int n = arr.size();
    cout<<rainwaterTrapping(arr,n);
    return 0;
}