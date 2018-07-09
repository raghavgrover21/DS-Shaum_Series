/*Tridiagonal Matrix - A Tridiagonal Matrix is a matrix (actually a square matrix) in which 
                       non-zero entries can only occur on the diagonal or on elements
                       immediately above or below the diagonal !!!                          */

#include<iostream>

using namespace std;

int main()
{
    int n,m,i,j,mat[5][5];
    
    cout<<"Enter size of the matrix (<5 only) :"<<endl;
    cin>>n>>m;
    
    cout<<endl<<"Enter elements :"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>mat[i][j];
        
    cout<<endl<<"The matrix is :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }
    
    cout<<endl<<"Tridiagonal Matrix is :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        
            if(i==j||j-i==1||i-j==1)
                cout<<mat[i][j]<<"\t";
            else
                cout<<"0"<<"\t";
        cout<<endl;
        }
}