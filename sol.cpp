#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {                                                                          
  	int n;
  	string p;
  	cin >> n >> p;
  	vector<int> a(n);
  	for (int i = 0; i < n; i++) {
  		cin >> a[i];
  	}
  	// dee will only win if:
  	// there is only 1 number and this number is even
  	if (n == 1 && p == "Dee") {
  		cout << (a[0] % 2 == 0 ? "Dee" : "Dum") << '\n';
  		continue;
  	}
		// otherwise, Dum will ways win no matter what the situation is
  	cout << "Dum" << '\n';
  }
  return 0;
}      