#include <iostream>
#include <algorithm>
/**
  * note::    minV=max(ll,minV);
  */
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len,cnt;
        cin>>len>>cnt;
        int minV,maxV,ll,lh;
        maxV=0;
        minV=0;
        for(int i=0;i<cnt;i++){
            int curLen;
            cin>>curLen;
            ll=min(curLen,len-curLen);
            lh=max(curLen,len-curLen);
            minV=max(ll,minV);
            maxV=max(lh,maxV);
        }
        cout<<minV<<" "<<maxV<<endl;
    }
}
