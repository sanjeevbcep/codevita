#include <bits/stdc++.h> 
using namespace std; 

 int ascendsort(int arr[], int n) 
{ 
	int i, j;
  int cnt1 = 0;
	for (i = 0; i < n - 1; i++) 
    {
      for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1])
            { 
				swap(arr[j], arr[j + 1]); 
              cnt1++;
            }
    }
   return cnt1;
} 

 int descendsort(int newarr[], int n) 
{ 
	int i, j;
  int cnt2 = 0;
	for (i = 0; i < n - 1; i++) 
    {
		for (j = 0; j < n - i - 1; j++) 
			if (newarr[j] < newarr[j + 1])
            { 
				swap(newarr[j], newarr[j + 1]); 
              cnt2++;
            }
    }
   return cnt2;
} 
 
int main() 
{ 
    int N;
    cin>>N;
  int arr[N];
  for(int i = 0 ; i<N ; i++)
  {
    cin>>arr[i];
  }
  
  int newarr[N];
 
  for(int i = 0 ; i<N ; i++)
  {
    newarr[i] = arr[i];
  }
	int n = sizeof(arr) / sizeof(arr[0]); 
	int a = ascendsort(arr, n); 
    int b = descendsort(newarr, n);
    if(a<b) cout<< a;
    else cout<< b;
	
	
	return 0; 
}