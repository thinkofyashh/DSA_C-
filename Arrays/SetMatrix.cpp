## better approach 
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int row[n]={0};
	int column[m]={0};

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				column[m]=1;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i]==1 || column[j]==1){
				matrix[i][j]=0;
			}
		}
	}

	return matrix;

}
