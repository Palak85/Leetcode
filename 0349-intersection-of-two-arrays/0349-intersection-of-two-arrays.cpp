class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    bool exists = false;
                    for(int k = 0; k < ans.size(); k++){
                        if(ans[k] == nums1[i]){
                            exists = true;
                            break;
                        }
                    }

                    if(!exists){
                        ans.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};