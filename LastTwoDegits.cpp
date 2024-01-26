#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long e = a % 100,f = b % 100,g = c % 100,h = d % 100;
    long long num = (e*f*g*h);
    string number = to_string(num);
    int n = number.length();
    if(num == 0){
        cout << "00";
    }else{
        cout << number[n-2] << number[n-1] ;
    }
}