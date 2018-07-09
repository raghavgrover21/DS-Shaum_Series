/* Symmetric Matrix - A Symmetric Matrix is a square matrix that is equal to its transpose !!!
                      The entries of a symmetric matrix are symmertic with respect to the
                      main diagonal.
*/

#include<iostream>

using namespace std;

int main()
{
    int n,m,mat[5][5],i,j,x;
    cout<<"Enter size of the matrix (<5 only) :"<<endl;
    cin>>n>>m;
    
    if(n==m)
    {
    
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
    
        for(i=0;i<n;i++)
        {
            j=i;
            for(;j<m;j++)
                if(mat[i][j]==mat[j][i])
                    x=1;
                else
                    x=-1;
        }
        
        if(x==1)
            cout<<endl<<"Symmetric Matrix!!!"<<endl;
        else
            cout<<"Not a Symmetric Matrix!!!"<<endl;
    
    }
    else
        cout<<"Matrix will not be a square matrix. Therefore , will not be a Symmetric Matrix!!!"<<endl;
    
    return 0;
}