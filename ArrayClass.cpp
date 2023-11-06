#include<iostream>
using namespace std;

class Array{
    int nrow,ncol;
public :
    int row,col;
    int arr[20][20],res[20][20];
    void input();
    void print();
    void sum(Array A);
    void product(Array A);
};

void Array::input(){
    cout<<"Enter your row and col of matrix: "<<endl;
    cin>>row>>col;
    nrow=row; ncol=col;
    cout<<"Enter your data row-wise :"<<endl;
    for(int i=0;i<nrow;i++){
        for(int j=0;j<ncol;j++){
            cin>>arr[i][j];
        }
    }
}
void Array::print(){
    cout<<"Your output array is "<<endl;
    for(int i=0;i<nrow;i++){
        for(int j=0;j<ncol;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Array::sum(Array A){

    for(int i=0;i<A.nrow;i++){
        for(int j=0;j<A.ncol;j++){
               res[i][j]=arr[i][j]+A.arr[i][j];
            }
    }
}
void Array::product(Array A){

    for(int i=0;i<nrow;i++){
       for(int j=0;j<A.ncol;j++){
              res[i][j]=0;
         for(int k=0;k<ncol;k++){

            res[i][j]+=arr[i][k]*A.arr[k][i];
        }
    }
  }
}
int main(){
    Array X,Y;
    X.input();
    Y.input();
    X.sum(Y);
    X.print();
    X.product(Y);
    X.print();




}
