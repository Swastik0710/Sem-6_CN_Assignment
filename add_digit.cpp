#include<iostream>
using namespace std;
int main () {
    int n, ans = 0, rem;
    cout << "Enter the number whose digits are to be added: ";
    cin >> n;
    while (n) {
        rem = n % 10;
        n /= 10;
        ans += rem; 
    }
    cout << endl;
    cout << "Sum of digits: " << ans << endl;
    return 0;
}
