#include <iostream>
using namespace std;

int binarySearch(int input[], int n, int val)
{
    int start=0, end=n,mid;
    for(int i=0; i < n; i++ )
    {
		mid=start + (end - start) / 2;
        if(start<=end ){
        	if(val == input[mid])
        	{
				return mid;
        	}
        	else if(val > input[mid])
        	{
				start = mid + 1;
        	}
        	else
        	{
            	end = mid - 1;
       		}         
    	}
    }
        
    return -1;
        
}

int main()
{
	int size;
	cin >> size;
	int input[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	return 0;
}
