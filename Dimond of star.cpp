 #include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int i=1;
    
    while(i<=(N+1)/2)
    {
        int j=1;
        while(j<=(N/2)+1-i)
        {
            cout<<" ";
             j++;
        }
        j=1;
        while(j<=(2*i)-1)
        {
            cout<<"*";
             j++;
        }
        cout<<endl;
       
        i++;
    }
i=1;
    while(i<=N/2)
    {
        int j=1;
        while(j<=i)
        {
            cout<<" ";
             j++;
        }
        j=1;
        while(j<=2*((N/2)-i+1)-1)
        {
            cout<<"*";
             j++;
        }
    cout<<endl;
        i++;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


