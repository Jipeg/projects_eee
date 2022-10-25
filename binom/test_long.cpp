#include<iostream>
#include<limits.h>
#include<cstdlib>
using namespace std;

int main(){
	cout << INT_MAX << endl;
	cout << LONG_LONG_MAX << endl;
	cout << abs(-LONG_LONG_MAX) << endl;
	cout << abs(LONG_LONG_MAX+1) << endl;
	cout << LONG_LONG_MAX*20 << endl;

}
