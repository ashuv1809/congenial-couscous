
#include<iostream>
using namespace std;


int main(){ int N,sum=0;
           cin>>N;
           while(N>0)
           {
               if(N%2==0)
                   sum=sum+N;
               else
                   sum=sum+0;
               N--;
           }
           cout<<sum;
           

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
  
}
