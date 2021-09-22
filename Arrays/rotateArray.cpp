#include<iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int arr[d];
    for(int i=0; i < d ; i++)
    {
        arr[i]=input[i];
    }
    for(int i=0 ; i < n ; i++)
    {
        input[i]=input[i+d];
    }
    for(int i=n-d,j=0 ; i < n ; i++ ,j++)
    {
        input[i]=arr[j];
    }
}

int main(){
    	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

    return 0;
}