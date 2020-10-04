//move all zeros to the right


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
       int l=0;
       int a=0;
       for(int i=0;i<nums.size();i++)
       {
          if(nums[i]!=0)
           {
               nums[l] = nums[i];
              l++;
              a++;
           }
       }
       
       for(int i=a;i<nums.size ();i++)
       {
          nums[i]=0;
       }
   }

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(5);
    moveZeroes(nums);
    for(auto i = nums.begin(),i!=nums.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}