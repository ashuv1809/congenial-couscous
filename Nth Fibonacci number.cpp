#include<iostream>
using namespace std;


int main(){
    int N,F[100];
    cin>>N;
    F[1]=1;
    F[2]=2;
    if(N==1||N==2)
    {
        cout<<"1"<<endl;
    }
    else
    {
    for(int i=3;i<=N;i++)
    {
        F[i]=F[i-1]+F[i-2];
        
    }
        cout<<F[N-1]<<endl;
    }
    //Write your code here.    
}
