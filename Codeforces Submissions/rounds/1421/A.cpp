#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int T; cin >> T;
   while (T--) {
   int a, b; cin >> a >> b;
   int x = a&b;
   int h = a^x, h1 = b^x;
   cout << h+h1<< endl;
   }
}