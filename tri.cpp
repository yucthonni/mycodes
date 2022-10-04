#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag=-1;
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();){
            if(flag==*(it)){
                nums.erase(it);
            }else{
                flag=*it;
                it++;
            }
        }
        return nums.size();
    }
};
int main(){
    Solution s;
    vector<int> nums={};
    int n=s.removeDuplicates(nums);
    for(int i=0;i<n;i++) cout<<nums[i]<<endl;
    return 0;
}