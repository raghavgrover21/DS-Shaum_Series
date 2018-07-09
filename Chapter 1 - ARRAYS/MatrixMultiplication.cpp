/*
    Matrix Multiplication
    
    C[i][j] = A[a][b] * B[c][d] ; 
    only possible when b equals c. And new matrix C will be of order i=a and j=d
*/

#include<iostream>

using namespace std;

int main()
{
    int m, n, x, y, a, i, j, k,A[5][5], B[5][5], C[5][5];
    int isValid(int,int);
    
    cout<<"Enter size m*n of first matrix :"<<endl;
    cin>>m>>n;
    
    cout<<endl<<"Enter size x*y of second matrix :"<<endl;
    cin>>x>>y;
    
    a=isValid(n,x);
    
    if(a!=-1)
    {
        cout<<endl<<"Enter elements of first array :"<<endl;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>A[i][j];
            
        cout<<endl<<"Enter elements of second array :"<<endl;
        for(i=0;i<x;i++)
            for(j=0;j<y;j++)
                cin>>B[i][j];
            
        cout<<endl<<"New matrix will be of order "<<m<<"*"<<y<<" ."<<endl;
        
        for(i=0;i<m;i++)
            for(j=0;j<y;j++)
            {
                C[i][j]=0;
                
                for(k=0;k<n;k++)
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
            
        cout<<endl<<"New Matrix :"<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
                cout<<C[i][j]<<"\t";
            cout<<endl;
        }
    }
    else
        cout<<endl <<"Matrix Multiplication is only possible when second dimension of first matrix is equal to first dimension of second matrix!!!  \ni.e. when n==x , only then Matrix Multiplication is possible with new dimension of m*y !!!"<<endl;
                     
    return 0;
}

int isValid(int n, int x)
{
    if(n!=x)
        return -1;
    
    return 0;
}