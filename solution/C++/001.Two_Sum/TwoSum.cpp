#include<iostream>

using namespace std;

class Solution {
public:
    //方法一：O(n^2)
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        for(int i=0;i<nums.size()-1;++i){
            for (int j=i+1;j<nums.size();++j){
                if(nums[i]+nums[j]==target){
                    results.push_back(i);
                    results.push_back(j);
                }
            }
        }
    }
    //方法二：O(n)
    vector<int> twoSum_1(vector<int> &numbers, int target){
        //Key is the number and value is its index in the vector.
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++) {
            int numberToFind = target - numbers[i];
    
                //if numberToFind is found in map, return them
            if (hash.find(numberToFind) != hash.end()) {
                        //+1 because indices are NOT zero based
                result.push_back(hash[numberToFind] + 1);
                result.push_back(i + 1);            
                return result;
            }
    
                //number was not found. Put it in the map.
            hash[numbers[i]] = i;
        }
        return result;
    }
};