/*
write a function in C to print following pattern
Note: Number of rows and columns shall be the input parameters to the function
Parallelogram 

    *****
   *****
  *****
 *****
*****

*/

#include<iostream>
using namespace std;

class song
{
public:
   
    void show4()
    {

        for(int i=0; i<5; i++)
        {

            for(int j=i; j<5; j++)
            {
                cout<<" ";
            }
            for(int k=0; k<5; k++)
            {
                cout<<"*";
            }

            cout<<"\n";



        }

        
    }
    
   
    
   
};
int main()
{
    song s;    
    s.show4(); 
}
