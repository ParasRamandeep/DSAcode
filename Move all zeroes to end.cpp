#include<iostream>
using namespace std;
//phlele arr and size pass kraunga 
  void movezeroes(int arr[],int n )
  {
    //count ko 0 rakhunga for index zero 
    int count=0;
//loop lagaya 
    for(int i=0;i<n;i++)
    {
        //condition statement lagai ki array not equal to 0 hae
        if(arr[i]!=0)
        {
//swap function use kiya to swap to current value
            swap(arr[i],arr[count]);
            count++;
        }

        
    }
  }