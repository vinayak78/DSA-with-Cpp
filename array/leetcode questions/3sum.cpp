#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int twoSum(vector<int> &num){
        sort(num.begin() , num.end());
        for(int i = 0 ; i < num.size()-2 ; i++){
            for(int j = i + 1 ; j < num.size()-1 ; j++){
                for(int k = j + 1 ; k < num.size() ; k++){
                    if(num[i] + num[j] + num[k] == 0){
                        cout << num[i] << num[j] << num[k];
                    }
                }
            
            }
        }
        cout << "ntg";
    }
int main(){
    vector<int> num = {-1,0,1,2,-1,-4};
    twoSum(num);
}