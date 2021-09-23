#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
    if(input[size-1] == x)
        return true;
    else if(size==0)
        return false;
    
    return checkNumber(input, size-1, x);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}