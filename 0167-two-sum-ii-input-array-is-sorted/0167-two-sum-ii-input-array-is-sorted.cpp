class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ptr1=0,ptr2=numbers.size()-1;
        vector<int> v;
        while(ptr1<(int)numbers.size() || ptr2<(int)numbers.size()){
            int sum = numbers[ptr1]+numbers[ptr2];
            if(sum==target){
                v.push_back(ptr1+1);
                v.push_back(ptr2+1);
                return v;
            }else if(sum<target){
                ptr1++;
            }else{
                ptr2--;
            }
        }
        return v;
    }
};