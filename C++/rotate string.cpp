#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
int n;
  cin>>n;
  int digits=0,num=n;
  while(num>0)
  {
    digits++;
    num/=10;
  }
  int newnum=0;
  num=n;
  while(num>0)
  {
    int last=num%10;
    newnum+=pow(last,digits);
    num/=10;
  }
  if(newnum==n)
  {
    cout<<"true";
  }
  else
  {
    cout<<"false";
  }
}
