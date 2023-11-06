#include<bits/stdc++.h>
using namespace std;

class truck;

class car{
    int speed;
    public:
    car(int x){
        speed=x;
    }
    friend int cl(car,truck);
};


class truck{
    int speed;
     public:
    truck(int x){
        speed=x;
    }
    friend int cl(car,truck);
};

int cl( car ob1,truck ob2){
    if(ob1.speed>ob2.speed) cout<<"Car speed greater";
    if(ob2.speed>ob1.speed) cout<<"Truck speed greater";
    else cout<<"Speed equal"<<endl;

}



int main(){
    car ob1(200);
    truck ob2(300);
    cl(ob1,ob2);
}
