#include <iostream>

using namespace std;

int main()
{
    int arr[100],b[100],n,i,k=0;
    cout<<"enter the n number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
      if(arr[i]!=0)
      {
          b[i]=arr[i];
      }
      else if(arr[i]==0)
      {
          b[n-k]=a[i];
          k++;
      }
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
    return 0;
}

