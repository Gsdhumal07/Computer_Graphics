#include<iostream>
using namespace std;
  
int SubArraySum(int a[], int size)
{
    int max , max_ending = 0;
  
    for (int i = 0; i < size; i++)
    {
        max_ending = max_ending + a[i];
        if (max < max_ending){
		
            max = max_ending;
  		}
        if (max_ending < 0){
		
            max_ending = 0;
        }
    }
    return max;
}
  
int main()
{
    int a[] = {34,-50,42,14,-5,86};
    int n = 6;
    int max_sum = SubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
