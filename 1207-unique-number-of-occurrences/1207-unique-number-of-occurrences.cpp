class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        set<int> s;
        for(auto x : map){
            if(s.find(x.second) != s.end()){
                return false;
            }
            s.insert(x.second);
        }
        return true;
    }
};