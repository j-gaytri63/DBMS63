//The time complexity of the below program is O(logn) as Binary search Algorithm is used
#include<iostream>
using namespace std;
int countzeros( int arr[],int n) //function for count the number of zeros
{
int low=0;
int high=n-1;
int mid;
while(low<=high)
{
mid=(low+high)/2;          //formula for counting mid value
if(arr[mid]==1)
{
low=mid+1;             //It will find the first occurance of 1 in array
}
else
{
high=mid-1;
}
}
return n-low;     //returning the count of zeros
}
int main()
{
int n ,arr[10],i,ch;
do
{
cout<<"\nEnter the number of array elements:";
cin>>n;
cout<<"\nEnter the array elements having zeros followed by '1':";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\nThe total number of zeros in array:"<<countzeros(arr,n);     //countzeros function called
cout<<"\nDo you want to Continue:(1=yes/0=no)";
cin>>ch;
}while(ch!=0);
return 0;
}
