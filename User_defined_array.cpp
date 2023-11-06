#include <iostream>
using namespace std;
class point
{
	double x;
	double y;
	public:
		point (double xx, double yy)
		{
			x = xx;
			y = yy;
		}


        double get_x ()
        {
            return x;
        }

        double get_y ()
        {
            return y;
        }

};



void swap(point to_swap[], int i, int j){

    point temp[]={{0,0}};


    temp[0]= to_swap[i];
    to_swap[i]=to_swap[j];
    to_swap[j]= temp[0];


}


int main()
{
    point a[]={{0,0},{-1,5},{9,12},{-3,-5},{5,-8}};
    int element=5;
    //print
    cout<<"Co-ordinate of points :"<<endl;
   for(int i=0;i<element;i++){
    cout<<"X="<<a[i].get_x()<<" "<<"Y="<<a[i].get_y()<<endl;;
   }
   cout<<endl;
   //Quadrant
   int count=0;
   for(int i=0;i<element;i++){
    if(a[i].get_x()>0 && a[i].get_y()<0)count++;
   }
   cout<<"Number of points fall on 4th Quadrant: "<<count<<endl;
   cout<<endl;
   //Swap
   swap(a,2,1);

   cout<<"After swapping : "<<endl;
   for(int i=0;i<element;i++){
    cout<<"X="<<a[i].get_x()<<" "<<"Y="<<a[i].get_y()<<endl;;
   }
   cout<<endl;
   swap(a,1,2); //back to original

   //sorting based on X co-ordinate

   for(int j=element;j>1;j--){
     for(int i=0;i<j-1;i++){
        if(a[i].get_x()<a[i+1].get_x()) swap(a,i,i+1);
    }
   }
   cout<<"Sorting based on X co-ordinate:" <<endl;
   for(int i=0;i<element;i++){
    cout<<"X="<<a[i].get_x()<<" "<<"Y="<<a[i].get_y()<<endl;;
   }
   cout<<endl;

   //sorting based on Y co-ordinate

   for(int j=element;j>1;j--){
    for(int i=0;i<j-1;i++){
        if(a[i].get_y()<a[i+1].get_y()) swap(a,i,i+1);
    }
   }
   cout<<"Sorting based on Y co-ordinate "<<endl;
   for(int i=0;i<element;i++){
    cout<<"X="<<a[i].get_x()<<" "<<"Y="<<a[i].get_y()<<endl;;
   }
   cout<<endl;


   //sorting based on distance from origin
   int p,q,r,s;
   for(int j=element;j>1;j--){
       for(int i=0;i<j-1;i++){
          p=a[i].get_x()*a[i].get_x();
          q=a[i].get_y()*a[i].get_y();
          r=a[i+1].get_x()*a[i+1].get_x();
          s=a[i+1].get_y()*a[i+1].get_y();
          if(p+q<r+s) swap(a,i,i+1);


      }
   }
   cout<<"After sorting (Based on distance from origin) : "<<endl;
   for(int i=0;i<element;i++){
    cout<<"X="<<a[i].get_x()<<" "<<"Y="<<a[i].get_y()<<endl;;
   }



}

