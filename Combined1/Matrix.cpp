/*
//set-matrix-zero
#include<bits/stdc++.h>
using namespace std;
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> ne=matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<m;k++){
                        ne[k][j]=0;
                    }
                    for(int k=0;k<n;k++){
                        ne[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ne[i][j];
            }
        }
    };
int main(){
    return 0;
}*/

//search sorted 2-d matrix
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target){
    int row = matrix.size()-1;
    if(row<0){
        return false;
    }
    int c = matrix[0].size()-1;
    int r=0;
    while(c>=0 && r<=row){
        if(target==matrix[r][c]){
            return true;
        }
        else if(target<matrix[r][c]){
            c--;
        }
        else if(target>matrix[r][c]){
            r++;
        }
    }
    return false;
};

int main(){
    return 0;
}