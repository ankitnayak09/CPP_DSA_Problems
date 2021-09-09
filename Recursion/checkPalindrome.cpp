#include <iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[],int s, int e)
{
	if (s == e)
	return true;

	// If first and last
	// characters do not match
	if (str[s] != str[e])
	return false;

	// If there are more than
	// two characters, check if
	// middle substring is also
	// palindrome or not.
	if (s < e + 1)
	return isPalindrome(str, s + 1, e - 1);

	return true;
}

bool checkPalindrome(char str[])
{
	int n = strlen(str);
	
	// An empty string is
	// considered as palindrome
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
