#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) arr[i]=i+1;
    cout << n << endl;
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) cout << arr[j] << " ";
      cout << endl;
      swap(arr[i], arr[i+1]);
    }
  }
}
