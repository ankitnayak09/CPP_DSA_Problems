#include<iostream>
using namespace std;

double power(int k)
{
	if(k==1)
    	return 2;
    
    return 2*power(k-1);
}

double geometricSum(int k) {
    if(k==0)
        return 1;
    
    double ans = 1 /(double)power(k) + geometricSum(k - 1);
    
	return ans;
}

int main(){
    int k;
    cin >> k;
    cout  << geometricSum(k);
    return 0;
}