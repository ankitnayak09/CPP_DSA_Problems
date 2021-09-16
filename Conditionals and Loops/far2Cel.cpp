// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

#include<iostream>
using namespace std;


int main(){
    int S,W,E;
    cin >> S >> E >> W;
    
    while(S<=E)
    {
        int res = (S-32)/9.0*5;
        cout << S << "\t" << res <<endl;
        S = S + W;
    }
  
}


