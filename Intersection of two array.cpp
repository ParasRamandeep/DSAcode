#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

// naive solution TIME COMPLEXITY O(m x (m+n))
int intersection(int a[],int b[],int m, int n)
{
    int result=0;
    for (int i=0;i<m;i++){
    bool flag=false;
    for(int j=0;j<i-1;j++){
           if(a[i]==a[j])
           {
        
            flag=true; break;
              } 
            if(flag==true)
            {
                continue;

            }
            for(int j=0;j<n;j++){
                if(a[i]==b[j]){
                    result++; break;
                }
            }
    }
    }
return result;
}

// Efficient Solution
int intersection(int a[],int b[],int m, int n)
{
// unordered set is used for the distinct element
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]); //this will insert element in the set
        
    }
    int result=0;
    for(int j=0;j<n;j++)
    {
        // It will find the element from the b[] in the set 
        if(s.find(b[j])!=s.end())

        {
            result++;
            // and we don't want ki element same repeat kre to erase that element from the set 
            s.erase(b[j]);
        }
    }
    return result;

}