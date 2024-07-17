#include<bits/stdc++.h>

using namespace std;

void mergeSortedArray(vector<int> &a, int n, vector<int> b, int m){
    int i = n-1, j = m-1, k = n+m-1;
    while(i >= 0 && j >= 0){
        if(a[i] > b[i]){
            a[k] = a[i];
            i--;
        }
        else{
            a[k] = b[j];
            j--;
        }
        k--;
    }

    while(j >= 0){
        a[k] = b[j];
        j--;
        k--;
    }
}

int main(){
    int m,n;
    n = 5;
    m = 4;
    vector<int> a = {1,3,4,5,6};
    vector<int> b = {2,3,6,8};
    a.resize(m+n);
    mergeSortedArray(a, n, b, m);
    for(auto x : a) cout << x <<" ";
    return 0;
}