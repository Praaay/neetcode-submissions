class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> res;
        while(left <= right){
            if(numbers[left] + numbers[right] == target){
                res.push_back(1 + left);
                res.push_back(1 + right);
                break;
            }
            else if(numbers[left] + numbers[right] > target){
                right--;
            }
            else if(numbers[left] + numbers[right] < target){
                left++;
            }
        }
        return res;
    }
};
