class Solution {
public:
    void combinationSearch(int index,vector<int> &arr, int target, vector<int> &ds, vector<vector<int>> &answer){
        //base case -- from index to n-1
        if(index == arr.size()){
            if(target == 0){
                answer.push_back(ds);  //pushes whole datastructure;
            }
            return;
        }
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            combinationSearch(index, arr, target - arr[index], ds, answer);
            ds.pop_back();
        }
        combinationSearch(index+1, arr, target, ds, answer);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> ds;
        combinationSearch(0, candidates, target, ds, answer);
        return answer;
    }
};