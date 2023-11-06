#include<bits/stdc++.h>
using namespace std;

class userArray{
    int x;
    public:
    int set_x(int xx){
        x=xx;
    }

   int get_x ()
        {
            return x;
        }
};
//swap function
void swap(userArray* a, userArray* b)
{
    userArray temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int m,n,data;
    double height;
    cout<<"Enter row and col:"<<endl;
    cin>>m>>n;
    userArray a[m][n];

//input
   cout<<"Enter element row wise :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>data;
            a[i][j].set_x(data);
        }
    }

//swapping operation
  for (int i=0;i<m;i++) {

        int start=0;
        int end=n-1;

        while(start<end) {
           swap( a[i][start],a[i][end]);


            start++;
            end--;
        }
  }

//display

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j].get_x()<<" ";
        }
        cout<<endl;
    }


  }



