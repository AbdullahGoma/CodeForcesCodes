#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, c,d;
    char b,q;
    cin >> a >> b >> c >> q >> d;
    int k = a;
    if((a + c) == d && (b == '+')){
        cout << "Yes";
    }else if((a - c) == d && (b == '-')){
        cout << "Yes";
    }else if((a * c) == d && (b == '*')){
        cout << "Yes";
    }else{
        if(b == '+'){
            cout << a + c;
        }else if(b == '-'){
            cout << a - c;
        }else if(b == '*'){
            cout << a * c;
        }
    }
}
