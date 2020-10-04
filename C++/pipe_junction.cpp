//PIPE JUNCTION

#include <iostream>

using namespace std;

int main()
{
    int n,m,r;
    
    int ratedinlet[1000], ratedoutlet[1000],actualin=0,actualout=0;
    
    cin>>n>>m>>r;
    
    for(int i=0;i<n;i++){
    cin>>ratedinlet[i];
    actualin = actualin+ratedinlet[i]-r;
    }
    
    for(int i=0;i<m;i++){
    cin>>ratedoutlet[i];
    actualout = actualout+ ratedoutlet[i]-r;
    }
    
    if(actualout<actualin){//outgoing pipe add
        cout<<actualout-actualin-r;
    }else if(actualin<actualout){
        cout<<actualout-actualin+r;
    }else
    cout<<"BALANCED";
    
    return 0;
}