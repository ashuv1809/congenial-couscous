#include<iostream>
using namespace std;


int main(){
    int S,E,W,c;
    cin>>S>>E>>W;
    while(S<=E)
    {
        
        cout<<S<<" "<<(S-32)*5/9<<endl;
        S=S+W;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


