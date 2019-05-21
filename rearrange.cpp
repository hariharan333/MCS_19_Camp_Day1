
#include <iostream>

using namespace std;

int main()
{
   int arr[]={1,2,3,4,5,6,7};
    int n=0,m=6;
         cout<<"{";
        for(int i=0;i<=3;i++)
        {
            if(arr[m-i]!=arr[n+i])
            {
            if(arr[m-i]+arr[n+i]==8)
            {
               cout<<arr[m-i]<<","<<arr[n+i]<<",";
            }
            }
            else
                    {
                         cout<<arr[m-i];
                    }
        }
      cout<<"}";
 return 0;
}

