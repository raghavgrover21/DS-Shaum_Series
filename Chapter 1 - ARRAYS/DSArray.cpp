/*
    Ques. Suppose A and B are n-element vector arrays in memory and X and Y are scalers.
    WAP to find :
                 1) XA+YB
                 2) A.B
*/

#include<iostream>

using namespace std;

int main()
{
    int n, x, y, i, j, A[20], B[20], sum=0, prod=0;
    
    cout<<"Enter size of vector : ";
    cin>>n;
    
    cout<<endl<<"Enter elements of vector A :"<<endl;
    for(i=0;i<n;i++)
        cin>>A[i];
    
    cout<<endl<<"Enter elements of vector B :"<<endl;
    for(i=0;i<n;i++)
        cin>>B[i];
    
    cout<<endl<<"Enter scalers X and Y: "<<endl;
    cin>>x>>y;
    
    for(i=0;i<n;i++)            //Sum of entire two arrays after multiplication with
        sum+=x*A[i]+y*B[i];     // resp. scalers    
    
    cout<<endl<<"Sum XA+YB : "<<sum;
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)        //A[0] will be multiplied to every element of array B
            prod+=A[i]*B[j];    //and so on.
        
    cout<<endl<<"Product AB : "<<prod<<endl;
    
    return 0;
}