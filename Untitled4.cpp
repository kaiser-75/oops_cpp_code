#include<bits/stdc++.h>
using namespace std;

class userarray{
     int x;
public:
    int set(int xx){
        x=xx;
    }
    int get(){
    return x;
    }

};
int main()
{

    int n,data;
    cout<<"Number of element"<<endl;
    cin>>n;
    userarray a[n];
    cout<<"Enter element"<<endl;
    for(int i=0;i<n;i++){
        cin>>data;
        a[i].set(data);

    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i].get()) max=a[i].get();
    }
    cout<<"Maximum value="<<" "<<max<<endl;
}
