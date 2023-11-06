#include<bits/stdc++.h>
using namespace std;

int neg(int* ptr){
    return -(*ptr);
}
int neg(int &ref){
    return -(ref);
}
int main()
{
    int n;
    cout<<"Enter "<<endl;
    cin>>n;
    cout<<neg(&n)<<endl;
    cout<<neg(n)<<endl;
}

