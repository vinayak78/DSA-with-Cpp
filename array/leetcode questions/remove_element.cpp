#include<iostream>
#include<vector>
using namespace std;

// int removeElement(vector<int> &num , int val){
//     for(int i = 0 ; i < num.size() ; i++){
//         if(num[i] == val){
//             num.erase(num.begin()+i);
//             i--;
//         }
//     }   
//     return num.size();
// }
// int main(){
//     vector<int> num = {0,1,2,2,3,0,4,2};
//     removeElement(num , 2);
//     for(int x : num){
//         cout << x << " ";
//     }
// }

// two pinter approch
// int removeElement(vector<int> &nums, int val){
//     int i = 0;
//     int j = 0;
//     int n = nums.size();
//     while(j < n){
//         if(nums[j] != val){
//             nums[i] = nums[j];
//             i++;
//         }
//         j++;
//     }
// }
// int main(){
//     vector<int> nums = {0,1,2,2,3,0,4,2};
//     removeElement(nums , 2);
//     for(int x : nums){ cout << x << " " ;}
// }

// another solution
int removeElement(vector<int> &nums, int val){
    int count = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] == val){continue;}
        nums[count] = nums[i];
        count++;
    }
}
int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    removeElement(nums , 2);
    for(int x : nums){ cout << x << " " ;}
}