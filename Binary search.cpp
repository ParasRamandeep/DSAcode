// RECURSIVE BINARY SEARCH
#include<iostream>
using namespace std;

int Bsearch(int arr[],int n,int x,int high,int low)
{
    
    if(low > high) return -1;
    {


    int mid=(low+high)/2;

    if(arr[mid==x])
    {
    return mid;
    }
    else if (arr[mid]>x)
    {
    return Bsearch(arr,low,mid-1,n);
    }
    else
    {
    return Bsearch(arr,mid+1,high,n);
    }
    }
}

// NOTE:Iterative is better than recursive binary search because it does not call extra fnc overhead & required O(1)extra space.
//But for recursive it is opposite and required extra O(logn) space. 


// ITERATIVE BINARY SEARCH
#include<iostream>
using namespace std;
// kuch x given hoga ok
int binarysearch(int arr[],int n, int x)

{
    // high and low introduce krenge
    int low=0;
    int high= n-1;
    while(low<=high);
    {
        // phele mid point nikalenge
        int mid=(low+high)/2;
        // phir condition use  krenge
        if(arr[mid]==x)
        return mid;

        else if(arr[mid]>x)
        high=mid-1;   //Left side jaenge

        else
        low=mid+1;  //verna Right side jaenge
    
    }
    return -1;
}
