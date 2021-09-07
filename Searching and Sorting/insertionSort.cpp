#include <iostream>
using namespace std;

void insertionSort(int input[], int size)
{
    int j,temp;
    for(int i=1 ; i < size ; i++)
    {
        j= i-1;
        temp = input[i];
		while(j >= 0 && input[j] >= temp)
        {
        	input[j+1] = input[j];    
            j--;
        }
        input[j+1] = temp;
    }
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
	}

	return 0;
}