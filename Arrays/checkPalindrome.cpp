#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int size=0,i=0;
    while(str[i++] !='\0')
    {
        size++;
    }
    for(int i=0; i < size ; i++)
    {
		if(str[i] != str[size-i-1])
        {
			return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}