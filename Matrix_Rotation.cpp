#include<bits/stdc++.h>

using namespace std;

void transposeMatrix(vector<vector<int>> &matrix, int n){
    for(int i=0; i<n; i++){
        int t = 1;
        for(int j=0; j<n; j++){
            if(i == j){
                t = 0; 
                continue;
            }
            if(t == 0){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
}

void swapTranspose(vector<vector<int>>& matrix, int n){
    for(int i=0; i<n; i++){
        int last = n;
        for(int j=0; j<n/2; j++){
            swap(matrix[i][j],matrix[i][last-1]);
            last--;
        }
    }
}

void display(vector<vector<int>> matrix, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix(n, vector<int> (n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    cout<<"Matrix Before Rotation :"<<endl;
    display(matrix,n);
    cout<<"Matrix After Transpose :"<<endl;
    transposeMatrix(matrix,n);
    swapTranspose(matrix,n);
    display(matrix,n);
    return 0;
}