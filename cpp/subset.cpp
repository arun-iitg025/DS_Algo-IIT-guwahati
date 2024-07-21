#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& nums, vector <int> output, int index, vector<vector<int> >& ans ){

        // base case 
        if(index >= nums.size()){

            ans.push_back(output);
            return ;

        }

        // element ko exclude karna hai

        solve(nums, output, index+1, ans);

        // element include karna hai
        int element = nums[index];
        output.push_back(element);

        solve(nums, output, index+1, ans);


}
int main(){
        
        vector<int> nums[3] = {1,2,3};
        vector < vector <int> > ans;
        vector <int> output;
        int index = 0;

        solve(nums, output, index, ans);


        for(int i=0;i<ans.size()-1;i++){
            cout << ans[i] << "\t";

        }
        return 0;
}
