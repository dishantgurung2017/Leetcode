class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> perm = {{nums[0]}};
        for(int i = 1; i < nums.size(); i++){
            vector<vector<int>> temp;
            for(auto v : perm){
                for(int j = 0; j <= v.size(); j++){
                    vector<int> vec = v;
                    vec.insert(vec.begin()+j, nums[i]);
                    if(find(temp.begin(), temp.end(), vec) == temp.end())
                        temp.push_back(vec);
                }
            }
            perm = temp;
        }
        return perm;
    }
};
