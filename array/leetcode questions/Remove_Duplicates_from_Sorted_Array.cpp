#include<iostream>
#include<vector>
using namespace std;
void funtion(vector<int> &nums){
    int i = 0 ; 
    int j = 1;
    int n = nums.size();
    while(j < n){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    cout << i + 1;
}
int main(){
    vector<int> nums = {0,0,1,2,2,3,3,3,3,4,5,6,7,7};
    funtion(nums);
    
}