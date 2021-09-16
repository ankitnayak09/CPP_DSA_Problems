// Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;


int main(){
	int N, i = 2, sum = 0;
    cin >> N;
    
    while(i <= N)
    {
        sum = sum + i;
        i = i + 2;
     }
    cout << sum;
