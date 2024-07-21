#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


const int N = 102, MOD = 1e9+7; // globaly define kiye and very large number liye

int a[N];
int dp[N][N];

int mcm(int i, int j){
	if(i == j){
		return 0;
	}

	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	dp[i][j] = MOD;
	for(int k=i; k<j; k++){
		dp[i][j] = min(dp[i][j], mcm(i, k) + mcm(k+1, j) + a[i-1]*a[k]*a[j]);
	}
	return dp[i][j];
}

signed main(int argc, char *argv[]){

	ifstream fin;
	ifstream fin1;

	fin.open("inputMCM.txt");
	fin1.open("outputMCM.txt");
	int n;
	//cout << "\nEnter the no of matrices : " <<endl;
	fin>>n;

	memset(dp, -1, sizeof dp);

	//vector<vector<int>> dp(n, vector<int>(n, -1));
	for(int i=0; i<n; i++){
		fin >> a[i];
	}

	int ans = mcm(1, n-1);

	//cout <<"ans : "<< ans << endl;
	int key;
	fin1>>key;
	cout << "\nTestcases : "<<endl << endl;
	cout << ans << " = " << key << endl << endl;
	if(ans != key){
		cout << "\nError !!!" <<endl << endl;
	}
	else{
		cout << "\nSuccessful " << endl << endl;
	}
	fin.close();
	fin1.close();

	return 0;
}