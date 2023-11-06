#include<bits/stdc++.h>
using namespace std;

class  area_cl{
public :
    int height,width;
    area_cl (int h=0, int w=0)
    {   cout<<"Enter HEIGHT and WIDTH : " ;
        cin>>h>>w;
        height = h;
        width = w;
    }
};



class rectangle:public area_cl{
public:
    void area(){
    cout<<"Area of rectangle = "<< height*width<<" "<<endl;
    }
};

class isosceles:public area_cl{
public:
    void area(){
   cout<<"Area of isosceles = "<< 0.5*height*width<<" "<<endl;
    }
};

int main()
{
    rectangle obj1;
    obj1.area();
    isosceles obj2;
    obj2.area();
}


