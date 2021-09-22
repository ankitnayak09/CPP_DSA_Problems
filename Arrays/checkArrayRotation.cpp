#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int k=input[0], min_index=0;
    for(int i=0; i < size  ; i++)
    {
        if(k>input[i])
        {
            k = input[i];
            min_index = i;
        }
    }
    
    return min_index;
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}