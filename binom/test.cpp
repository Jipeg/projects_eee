#include<iostream>
#include<limits.h>
using namespace std;
long long gcd(long long a, long long b) {
while ((a != 0) && (b != 0))
	if (a >= b)
		a %= b;
	else
		b %= a;
return a+b;
}

long long binom2(double n, double k){
	long long res = 1;
	long long ost = 1;

	for (double j = n; j > 0; j--){
		//cout << res << " ";
		res *= j;
		if (j <= n-k){
			int g = gcd(res, j);
			res /= g;
			ost *= (j / g);
		}
		if (j <= k){
			int g = gcd(res, j);
			res /= g;
			ost *= (j / g);
		}
		int g2 = gcd(res, ost);
		res /= g2;
		ost /= g2;
	}
	return res;
}
long long binom(double n, double k){
	 //if (k == 0) return 1;
	// n! / (n-k)! / k!
	double res = 1;
	for (double j = n; j > 0; j--){
		//cout << res << " ";
		res *= j;
		if (j <= n-k)
			res /= j;
		if (j <= k)
			res /= j;
	}
	return res;
}

int main(){
	/*
	int N = 30;
	cin >> N;
	long long max = 1;
	int k = 0;
	for (int j = 1; j <= N; j++){
		for (int i = 0; i <= j; i++){
			long long cur = binom2(j,i);
			if (cur > max) {
				max = cur;
				k = i;								
			}
			cout << cur << " ";
		}
		cout << endl;
	}
	cout << "Max=" << max << " for k=" << k << endl;
	*/
	int M;
	cin >> M;
	for (int i = 25; i <= M; i++)
		cout << binom2(i, i/2) << endl; 
	
	cout << INT_MAX << endl;
	cout << LONG_LONG_MAX << endl;

}
