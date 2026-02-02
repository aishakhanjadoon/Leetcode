class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> i1;
        for(int i=0 ; i < nums.size(); ++i)
           {
            if(i1.size()>1) break;
            for (int j=i+1; j < nums.size();++j){
                if(nums[i]+nums[j] == target)
                {i1.push_back(i); i1.push_back(j);
                return i1;}
                
            }
           }
        return {};
    }
};
