#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int x = a,y = b,z = c;
    if (x <= y && y <= z){
    printf("%d\n%d\n%d",x,y,z);
    }
    else{
        if (x <= z && z <= y){
            printf("%d\n%d\n%d",x,z,y);
        }
        else{

            if (y <= x && x <= z){
            printf("%d\n%d\n%d",y,x,z);
            }
            else{

            if (y <= z && z <= x){
                printf("%d\n%d\n%d",y,z,x);
            }
            else{

                if (z <= x && x <= y){
                printf("%d\n%d\n%d",z,x,y);
                }
                else{
                if (x == y && y == z){
                    printf("%d\n%d\n%d",x,y,z);
                }
                else{
                    printf("%d\n%d\n%d",z,y,x);
                }
                }
            }
            }
        }
    }

    cout << "\n\n" << a << "\n" << b << "\n" << c;
}
