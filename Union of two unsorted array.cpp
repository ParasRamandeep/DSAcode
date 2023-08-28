#include<iostream>
#include<unordered_set>
using namespace std;

// NAIVE SOLUTION: TIME COMPKEXITY= O(m+n)x(m+n)

// UINION OF TWO UNSORTED ARRAY
//  a[]={15,20,5,15}
//  b[]={15,15,15,20,10}
int Union(int a[],int b[],int m, int n)
{
// EK array create kri dono ke liye and copy kr diye a[ ]and b[ ] ke element usme

int c[m+n];     //AUX SPACE O(m+n)
for(int i=0;i<m;i++)
{
   c[i]=a[i];
}
for(int i=0;i<n;i++)
{
    c[m+i]=b[i];
}
int result=0;
for(int i=0;i<m+n;i++)
{
    bool flag=false;

    for(int j=0;j<i;j++)
    {
        if(c[i]==c[j]){
            flag=true; break;
        }
    }
    if(flag=false)
    {
        result++;
    }

}

return result;
}



// EFFICIENT SOLUTION

int UnionOftwoUnsortedArrays(int a[],int b[], int m ,int n)
{
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]);

    }
    for(int i=0;i<n;i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
