/*
    Let LIST be a linked list in memory. Write a procedure which
    (a) Finds the number NUM of times a given ITEM occurs in LIST.
    (b) Finds the number NUM of nonzero elements in LIST.
    (c) Adds a given value K to each element in LIST.
*/

#include<iostream>

using namespace std;

struct LIST
{
    int info;
    LIST *next;    
}*start, *ptr, *newptr, *save;

LIST *create_new_node(int);
void insert(LIST*);
void display(LIST*);
int search(int, LIST*);
int nonzero(LIST *);
void add(int, LIST*);
 
int main()
{
    start=NULL;   //initially list is empty
    
    int n, data, num, x, k;
    
    cout<<"How many numbers you want to insert in the list ? : ";
    cin>>n;
    
    if(n!=0)
    {
        cout<<"\nEnter numbers :\n";
        
        for(int i=0; i<n; ++i)
        {
            cin>>data;
            
            newptr=create_new_node(data);
            
            if(newptr!=NULL)
                insert(newptr);
            else
            {
                cout<<"\nNo Further numbers can be added!!!\n";
                break;
               
            }
                
        }
        
        cout<<endl<<"LIST contains following numbers :\n";
        display(start);
    
        cout<<endl<<"Enter a number to search in the list : ";
        cin>>num;
        
        x=search(num,start);
        
        cout<<endl<<num<<" appears in LIST : "<<x<<" times.";
        
        x=nonzero(start);        
    
        cout<<endl<<"Number of times nonzero elements appeared in LIST are : "<<x;
   
        cout<<endl<<"Enter a number to add to each element of the LIST : ";
        cin>>k;
        
        add(k,start);
        
        cout<<endl<<"The LIST now becomes :\n";
        display(start);
    }
    else
        cout<<endl<<"Cannot be done!!!"<<endl;
    
    return 0;
}

LIST* create_new_node(int n)
{
    ptr=new LIST;
    
    ptr->info=n;
    ptr->next=NULL;
    
    return ptr;
}

void insert(LIST* np)   //inserting in the beginning
{
    if(start==NULL)
        start=np;
    else
    {
        save=start;
        start=np;
        np->next=save;
    }
}

void display(LIST* np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"  ";
        
        np=np->next;
    }
}

int search(int item, LIST *np)
{
    int x=0;
    
    while(np!=NULL)
    {
        if(np->info==item)
        {
            ++x;
            
            np=np->next;
        }
        else
            np=np->next;
    }
    
    return x;
}

int nonzero(LIST* np)
{
    int x=0;
    
    while(np!=NULL)
    {
        if((np->info)!=0)
        {
            ++x;
            np=np->next;
        }
        else
            np=np->next;
    }
    
    return x;
}

void add(int k, LIST *np)
{
    while(np!=NULL)
    {
        np->info=np->info+k;
        
        np=np->next;
    }
}