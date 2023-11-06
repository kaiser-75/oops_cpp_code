#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    ifstream in("marks_CT1_exp.txt");
    ofstream out("bestCount.txt");
    while(getline(in,line)){
        int i=1; float sum=0;
        float a,b,c;
       stringstream ss(line);
        while(getline(ss,line,',')){
              if(i==1){
                    cout<<line<<"\t";
                    out<<line;}
              if(i==2)a=stof(line);
              if(i==3)b=stof(line);
              if(i==4)c=stof(line);
              i++;
        }

        if(a<b && a<c)sum+=b+c;
        else if(b<a && b<c)sum+=a+c;
        else sum+=a+b;
        cout<<"\t Best count of CT marks :"<<sum<<endl;
        //out<<"\t Best count of CT marks :"<<sum<<"\n";
    }
}

