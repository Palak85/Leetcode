class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> nums3;
        // for(int i=0; i<n1; i++){
        //     for(int j=0; j<n2; j++){
        //         if(nums1[i] == nums2[j]){
        //             nums3.push_back(nums1[i]);
        //             break;
        //         }
        //     }
        // }

        int i = 0;
        int j = 0;
        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return nums3;
    }
};