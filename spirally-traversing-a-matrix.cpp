#include<bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
    int rowStart=0;
    int rowEnd=r-1;
    int colStart=0;
    int colEnd=c-1;
    vector<int> ans;
    while(rowStart<=rowEnd && colStart<=colEnd){
        
        //row start
        for(int col=colStart;col<=colEnd;col++){
            // cout<<matrix[rowStart][col]<<" ";
            ans.push_back(matrix[rowStart][col]);
        }
        rowStart++;
        
        //column end
        for(int row=rowStart;row<=rowEnd;row++){
            // cout<<matrix[row][colEnd]<<" ";
            ans.push_back(matrix[row][colEnd]);
        }
        colEnd--;
        
        //row end
        if(rowStart<=rowEnd){
        for(int col=colEnd;col>=colStart;col--){
            // cout<<matrix[rowEnd][col]<<" ";
            ans.push_back(matrix[rowEnd][col]);
        }
        rowEnd--;
        }
        
        //column start
        if(colStart<=colEnd){
        for(int row=rowEnd;row>=rowStart;row--){
            // cout<<matrix[row][colStart];
            ans.push_back(matrix[row][colStart]);
        }
        colStart++;
        }
    }
    return ans;
}