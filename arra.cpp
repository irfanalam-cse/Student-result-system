#include<iostream>
using namespace  std; 
int main ()
{
  int arr[][]={{4,4,5},{5,5,4},{4,8,4}};
  for(int i =0;i<=3;i++)
  {
    for(int j=0;j<=3;j++)
    {
      cin>>arr[j];
    } cin>>arr[i];
  }
  cout<<arr[0][2];
  return 0;
}