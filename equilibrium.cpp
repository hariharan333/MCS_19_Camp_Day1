#include <iostream>

using namespace std;

int main()
{
    int arr[100],n,i,r,s1=0,s2=0;
    cout<<"enter the n number";
    cin>>n;
  
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     r=n/2;
    for(i=0;i<r;i++)
    {
        s1+=arr[i];
      
    }
     for(i=r+1;i<n;i++)
    {
        s2+=arr[i];
    
    }
    if(s1==s2)
    {
        cout<<r<<"    equilibrium";
    }
    return 0;
}

