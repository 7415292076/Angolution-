/*9.Write a program to count total number of
 duplicate numbers in an array.
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,count=0,j;
    for(i=0; i<n; i++)
    {
     for(j=i+1; j<n; j++)
     {
     if(arr[i]==arr[j])
     {
     count++;
     }
     }
    }
    cout<<count;
    
}