#include<iostream>
#include<vector>

using namespace std;
vector<int> reverse(vector<int> v) {		// reverse array  in vector

	int start = 0;
	int end = v.size()-1;

	while(start <= end){

		swap(v[start], v[end]);

		start++;
		end--;
	}
	return v;
}
void printArray(vector<int> ans) {

	for(int i=0; i<ans.size() ; i++){

		cout<<ans[i]<<"\t";
	}
}
int main() {


	vector<int> v;

	v.push_back(11);
	v.push_back(7);
	v.push_back(3);
	v.push_back(12);
	v.push_back(4);
	 vector<int> ans = reverse(v);


	 cout<<endl;
	 cout<<"\nThe reverse array is: ";
	 printArray(ans);
}