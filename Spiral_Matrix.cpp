#include<bits/stdc++.h>

using namespace std;

vector<int> spiralMatrix(vector<vector<int>> mat, int m, int n){
    int sx = 0, sy = 0, ex = mat.size() - 1, ey = mat[0].size() - 1;
    vector<int> arr(m * n);
    int ctr = 0;

    while(sx <= ex && sy <= ey){
        for(int j = sy; j <= ey; j++)
            arr[ctr++] = mat[sx][j];
        sx++;

        for(int i = sx; i<= ex; i++)
            arr[ctr++] = mat[i][ey];
        ey--;

        if(sx <= ex){
            for(int j = ey; j >= sy; j--)
                arr[ctr++] = mat[ex][j];
            ex--;

            for(int i = ex; i >= sx; i--)
                arr[ctr++] = mat[i][sy];
            sy++;
        }
    }
    return arr;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m, vector<int> (n));
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
            
    cout<<"Spiral form array is :"<<endl;
    vector<int> arr(m*n);
    arr = spiralMatrix(mat, m, n);
    for(int i=0;i<m*n;i++)
        cout<<arr[i]<<" ";
    return 0;
}