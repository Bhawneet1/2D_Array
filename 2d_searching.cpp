#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//function with 2d
bool search(int arr[][4],int rowcount,int colcount,int target)
{
  for(int i=0;i<rowcount;i++)
  {
    for(int j=0;j<colcount;j++)
    {
      if(arr[i][j]==target)
      {
         return true;
      }
    }
  }
  return false;
}
int main()
{
  int arr[3][4]={10,20,30,40,50,55,57,59,69,72,79,89};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
  int target=60;
  if(search(arr,3,4,target)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }
}