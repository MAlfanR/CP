#include <bits/stdc++.h>

using namespace std;



int main () {

	int n, k, b, cba=0, cbb=0;

	cin >> n >> k;

	int arr[100001]= {0}, brr[100001] = {0};



	for(int i=0; i<n; i++) {

		cin >> b;

		arr[b]++;

		if(arr[b] > arr[cba]) cba=b;

	}

	for(int i=0; i<n; i++) {

		cin >> b;

		brr[b]++;

		if(brr[b] > brr[cbb]) cbb=b;

	}



	if(cbb == cba) {

		if(brr[cbb]+arr[cba] > n ) {

			int cvr = brr[cbb]+arr[cba] - n;

			if(cvr > k) {

				cout << "Tidak" << endl;

			} else {

				cout << "Ya" << endl;

			}

		} else {

				cout << "Ya" << endl;

			}

	} else {

				cout << "Ya" << endl;

			}



}

