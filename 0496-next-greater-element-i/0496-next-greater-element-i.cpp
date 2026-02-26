class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n = nums2.size();
        int m = nums1.size();

        for(int i=0; i<m; i++){
            int a = nums1[i];
            int index;
            for(int k=0; k<n; k++){
                if(nums2[k] == a){
                    index = k;
                    break;
                }
            }
            int larg = INT_MIN;
            for(int j=index + 1; j<n; j++){
                if(nums2[j] > larg && nums2[j] > nums1[i]){
                    larg = nums2[j];
                    break;
                }
            }
    
            if(larg != INT_MIN){
                result.push_back(larg);
            }
            else{
                result.push_back(-1);
            }
        }
        return result;
    }
};