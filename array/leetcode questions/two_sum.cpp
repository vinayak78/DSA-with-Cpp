#include<iostream>
#include<vector>
using namespace std;
    int twoSum(vector<int> &num , int target){
        int n = num.size();
        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(num[i] + num[j] == target){
                    cout << i << " " << j;
                }
            }
        }
    }
int main(){
    vector<int> num = {3,3};
    twoSum(num , 6);
}