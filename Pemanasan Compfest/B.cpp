#include <bits/stdc++.h>

using namespace std;



int main () {

	unsigned long long int jum = 0, arr[26];

	for(int i=0; i<26; i++) {

		arr[i] = 0;

	}



	int n, b; char x;

	cin >> n >> b;

	for(int i=0; i<n; i++) {

		cin >> x;

		arr[((int) x ) - 65]++;

	}



	string inp;

	for(int i=0; i<b; i++) {

		cin >> x >> inp;

		unsigned long long int sv = arr[((int) x ) - 65];

		if(sv) {

			arr[((int) x ) - 65] = 0;

			for(int j=0; j<inp.length(); j++) {

				arr[((int) inp[j]) - 65] += sv;

			}

		}

	}



	for(int i=0; i<26; i++) {

		jum += arr[i];

	}



	cout << jum << endl;

}

