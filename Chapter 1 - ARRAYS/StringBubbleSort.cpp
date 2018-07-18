/*
    Using the bubble sort algorithm , find the number of comparisons
    and the number of interchanges which aphabetize letters in a string.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[30], t;
    int ptr, comp=0, intrch=0;
    
    cout<<"Enter a string :\n";
    gets(str);
    
    int size=strlen(str);
    
    for(int i=0; i<size-1; ++i)
	{
	ptr=0;
	while(ptr<size-i-1)
		{
		if(str[ptr]>str[ptr+1])
			{
			t=str[ptr];
			str[ptr]=str[ptr+1];
			str[ptr+1]=t;
            
            intrch+=1;
			}
		ptr+=1;
        comp+=1;
		}
	}
    
    cout<<"\nAfter bubble sort is applied :\n";
    puts(str);
    
    cout<<"\nNumber of comparisons : "<<comp;
    cout<<"\nNumber of interchanges : "<<intrch;
    cout<<endl;
    
    return 0;
}