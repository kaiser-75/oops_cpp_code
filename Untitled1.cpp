#include<bits/stdc++.h>
using namespace std;

class math{
public:
   float num[5];
    float s=0;
    int mul=1;
    void input();
    void sum();
    void average();
    void product();

};
void math::input(){
    float n;
    cout<<"Enter 5 numbers for operation: ";
    for(int i=0;i<5;i++){
        cin>>n;
        num[i]=n;
    }
}
void math::sum(){
    for(int i=0;i<5;i++){
        s=s+num[i];
    }
   cout<<"Sum is"<<" "<<s<<" "<<endl;
}
void math::average(){
    cout<<"The average is"<<" "<<s/5<<" "<<endl;
}
void math::product(){
    for(int i=0;i<5;i++){
        mul=mul+mul*num[i];
    }
    cout<<"The product is" << " "<< mul <<" "<<endl;
}

int main()
{
   math operation;
   operation.input();
   operation.sum();
   operation.average();
   operation.product();

}
