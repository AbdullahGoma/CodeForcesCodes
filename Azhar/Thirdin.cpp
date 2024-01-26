#include <bits/stdc++.h>
using namespace std;

int main() {
    float x,y,z;
    cin >> z >> y;
    x = (y / (1-(z/100.0)));
    cout << fixed << setprecision(2) << x;
}
