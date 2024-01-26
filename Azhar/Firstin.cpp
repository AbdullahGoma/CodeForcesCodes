#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    double pi = 2 * acos(0.0);
    for(int i = 0;i < n;i++){
        cout << cos(a[i] * pi) << endl;
    }
    return 0;
}