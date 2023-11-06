#include<bits/stdc++.h>
using namespace std;

class userArray{
    double x;
    public:
    double set_x(double xx){
        x=xx;
    }

    double get_x ()
        {
            return x;
        }
};
int main(){
    int n,sum=0;
    double height;
    cout<<"Enter total number of students :"<<endl;
    cin>>n;
    userArray a[n];
    cout<<"Enter height of students :"<<endl;
    for(int i=0;i<n;i++){
        cin>>height;
        a[i].set_x(height);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i].get_x();
    }
    cout<<"Average height is "<<sum/n<<endl;


}
