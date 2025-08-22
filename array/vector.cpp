#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    // declaration of vector 
    vector<int> vec1;
    vector<int> vec2(5);
    vector<int> vec3(5,0);

    // vector initalization
    cout << "Enter values : " << endl;
    for(int i = 0 ; i < vec2.size() ; i++){cin >> vec2[i]; }
    cout << "Vector value : ";
    for(int i = 0 ; i < vec2.size() ; i++){cout << vec2[i] << " "; }

    // push_back and pop_back funtion
    for(int i = 0 ; i < 5 ; i++){vec1.push_back(i+1);}
    cout << "Vector value : ";
    for(int i = 0 ; i < vec2.size() ; i++){cout << vec1[i] << " "; }

    // vector funtion 
    cout << vec1.size() << endl;
    cout << vec1.capacity() << endl;
    cout << vec1.front() << endl;
    cout << vec1.back() << endl;

    // sort (assending)
    sort(vec1.begin() , vec1.end());
    for(int i = 0 ; i < vec2.size() ; i++){cout << vec1[i] << " "; }

    // sort (decending)
    sort(vec1.rbegin() , vec1.rend());
    for(int i = 0 ; i < vec2.size() ; i++){cout << vec1[i] << " "; }

    // find funtion
    auto it = find(vec1.begin() , vec1.end(),2);
    if(it != vec1.end()) cout << distance(vec1.begin() , it);
    else cout << "Element didn find";

    // revserse funtion
    reverse(vec1.begin() , vec1.end());
    for(int i = 0 ; i < vec2.size() ; i++){cout << vec1[i] << " "; }



     // double / 2d vector 
    vector<vector<int>> vec4(3,vector<int>(3));
    

    return 0;
}