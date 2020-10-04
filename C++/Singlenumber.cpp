#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int singleNumber(vector<int>& nums) {
int Xor = 0; 
for(auto i=nums.begin();i!=nums.end();i++){
    Xor = Xor^*i; 
    }   
return Xor;
}

int main(){
    int s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(5);
    s = singleNumber(nums);
    cout<<"single Number :"<<s;
    return 0;
}