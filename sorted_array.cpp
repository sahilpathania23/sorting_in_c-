//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n,k,m;

	cin>>n;
    int arr[100];
    for (int i = 0; i < n; ++i)
    {
        cin>>k;
        arr[i]=k;
    }
    int q=0;
    for (int l = 0; l <n ; ++l)
    {
        if(arr[l]==0){
            q=q+1;
        }
    }
    for (int p = 0; p < q; ++p)
    {
        arr[p]=0;
    }
    for (int p1 = q; p1 < n; ++p1)
    {
        arr[p1]=1;
    }
    
     for (int w = 0; w < n; ++w)
    {
        cout<<arr[w];
        }
	return 0;

  }
