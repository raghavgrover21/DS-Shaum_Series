/*
    Ques. An array contains 25 positive integers.
          WAP which
          (a) Finds all pairs of elements whose sum is 25.
          (b) Finds the number EVNUM of elements of A which are even and the number ODNUM
              of elements of A which are odd.
*/

#include<iostream>

using namespace std;

int main()
{
    int A[25], EVNUM(int []), ODNUM(int []),i;
    void sum(int []);
    
    cout<<"Enter 25 elements of the array :"<<endl;
    
    for(i=0;i<25;i++)
        cin>>A[i];
    
    cout<<endl<<"Sum of elements whose sum is 25 are :"<<endl;
    
    sum(A);         //displays pair of elements whose sum is 25
    
    i=EVNUM(A);     //gives number of even elements
    
    cout<<endl<<"Number of elements which are even are : "<<i<<endl;
    
    i=ODNUM(A);     //gives numbers of odd elements
    
    cout<<endl<<"Number of elements which are odd are : "<<i<<endl;
    
    return 0;
}

void sum(int A[])
{
    for(int i=0;i<24;i++)
        if(A[i]+A[i+1]==25)
        {
            cout<<A[i]<<" , "<<A[i+1];
            cout<<endl;
        }

}

int EVNUM(int A[])
{
    int x=0;
    
    for(int i=0;i<25;i++)
        if(A[i]%2==0)
            x++;
    
    return x;
}

int ODNUM(int A[])
{
    int x=0;
    
    for(int i=0;i<25;i++)
        if(A[i]%2!=0)
            x++;
    
    return x;
}