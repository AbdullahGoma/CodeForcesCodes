#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if((a >= c && a <= d) && (b >= c && b <= d)){
        cout << a << " " << b; //a,b between c,d
    }else if((c >= a && c <= b) && (d >= a && d <= b)){
        cout << c << " " << d; //c,d between a,b
    }else if((a >= c && a <= d)&& (b >= c && b >= d)){
        cout << a << " " << d; // 1 10 0 5
    }else if(a <= c && (b >= c && b <= d)){
        cout << c << " " << b; // 0 5 1 10
    }else if(a == d){
        cout << a << " " << a; // 5 7 1 5
    }else if(b == c){
        cout << b << " " << b; // 1 5 5 7
    }else{
        cout << -1;
    }
}
.................................


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

bool isPrime(ll n) {
    for(int i = 2;i < n/2;i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int minimum(int x, int y) {
    if(x < y) return x;
    return y;
}


int main(){
    init();

    ll l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int maximum = max(l1,l2);
    int minimum = min(r1,r2);
    
    if(l2 > r1 || l1 > r2){
        cout << -1 << endl;
    } else{
        cout << maximum << " " << minimum << endl;
    }
}  


// vector<ll> a(n);
// average = sum / n;

// sort(a.begin(), a.end());
// reverse(a.begin(), a.end());
// sum = 0;


// vector<int> x;


// for(int i = 0;i < n;i++) {
//     cin >> num;
//     x.insert(x.end(),1,num);
// }

// sort(x.begin(), x.end());

// for(int i = 0;i < x.size();i++) {
    
// }

