/*
    Let LIST be a linked list in memory. Write a procedure which
    
    (a) Finds the number of times a given item occurs in the LIST.
    (b) Finds the number of non zero elements in the LIST.
    (c) Adds a given value to each element in the LIST.
    
*/

#include<iostream>

using namespace std;

class LIST
{
    private:
    
    int info;
    LIST * next;
    
    public:
    
    LIST* creat_new_node(int);     //takes one int argument and creates a new node dynamically and returns the pointer to the new node. ( return type : LIST* )
    void insert(LIST*);     //takes LIST* type pointer as argument and inserts this node in the end of the list.
    void display(LIST*);     //takes LIST* type pointer as argument and displays the list from this pointer till the end of the list.
    int search(int, LIST*);     //takes one int type argument to search in the list and a LIST* type pointer as argument to start searching from that pointer till the end of the list.
    int non_zero(LIST*);     //takse LIST* type pointer as argument and counts number of non zero elements from that pointer till the end of the list and returns that count.    
    void addk(int, LIST*);     //takes one int type argument and one LIST* type pointer as argument and add the int value to each element from that pointer till the end the list.
} *start, *newptr, *save, *ptr, *rear;


LIST* LIST :: creat_new_node(int n)
{
    ptr = new LIST;
    
    ptr->info=n;
    ptr->next=NULL;
    
    return ptr;
}

void LIST :: insert(LIST* np)
{
    if(start==NULL)
        start=rear=np;
    else
    {
        rear->next = np;
        rear = np;
    }
}

void LIST :: display(LIST* np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"  ";
        np = np->next;
    }
}

int LIST :: search(int item, LIST* np)
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

int LIST :: non_zero(LIST* np)
{
    int x=0;
    
    while(np!=NULL)
    {
        if(np->info!=0)
        {
            ++x;
            
            np=np->next;
        }
        else 
            np=np->next;
    }
    
    return x;
}

void LIST :: addk(int k, LIST* np)
{
    while(np!=NULL)
    {
        np->info+=k;
        np=np->next;
    }
}


int main()
{
    LIST object;
    
    start = NULL;
    rear = NULL;
    
    int n, num, item, x, k;
    
    cout<<"How many numbers you want to insert in the list : ";
    cin>>n;
    
    if(n!=0)
    {
        cout<<endl<<"Enter Numbers :\n";
        
        for(int i=0; i<n; ++i)
        {
            cin>>num;
            
            newptr = object.creat_new_node(num);
            
            if(newptr!=NULL)
                object.insert(newptr);
            else
                break;
        }
    
    }
    else
    {
        cout<<"\nWrong input\n";
        
        return 0;
    }
    
    cout<<endl<<"The List contain(s) :\n";
    object.display(start);
    
    cout<<endl<<"Enter a number to search : ";
    cin>>item;
    
    x = object.search(item,start);
    
    if(x!=0)
        cout<<endl<<item<<" appeared in the given list "<<x<<" time(s).\n";
    else
        cout<<endl<<item<<" not found in the list!!!!\n";
    
    x = object.non_zero(start);
    
    cout<<endl<<"Number of non zero elements are : "<<x;
    
    cout<<endl<<"Enter a value to add to each element of the list : ";
    cin>>k;
    
    object.addk(k,start);
    
    cout<<endl<<"Now list becomes :\n";
    
    object.display(start);
    
    return 0;
}