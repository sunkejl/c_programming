#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> r;
        for(int i = 0;i<nums.size();i++){
           if(m.find(nums[i])==m.end()){
                m[target-nums[i]]=i;
           }else{
                 r.push_back(i);
                 r.push_back(m[nums[i]]);
                 break;
           }
        }
        return r;
    }
};
int main(){
Solution s;
vector<int> nums={3,2,4};
int target=6;
vector<int> r=s.twoSum(nums,target);
for(int i =0;i<r.size();i++){
    cout << r[i] << endl;
}
return 0 ;
}
