#include <iostream>
using namespace std;
double power(double x, int n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            return 1 / power(x, -n);
        }
 
        return x * power(x, n-1);
    }
int main(){
    double x = 2.00000;
    int n = 32;
double ans = power(x, n);

cout << ans;
}