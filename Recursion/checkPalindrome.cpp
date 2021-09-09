#include <iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[],int s, int e)
{
	if (s == e)
	return true;

	if (str[s] != str[e])
	return false;

	if (s < e + 1)
	return isPalindrome(str, s + 1, e - 1);

	return true;
}

bool checkPalindrome(char str[])
{
	int n = strlen(str);
	
	if (n == 0)
		return true;
	
	return isPalindrome(str, 0, n - 1);
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
