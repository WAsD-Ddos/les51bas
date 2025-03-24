#include <iostream>
#include <string>
using namespace std;

int factorial(int n) {
    if (n < 0) { return 1; }
    //n! = (n — 1)! × n   (fun)
    int ans;
    if (n == 1) return 1;
    ans = factorial(n - 1) * n;
    return (ans);

}

int main() {
	int num;
	cout << "input num(fuct)" << endl;
	cin >> num;

    cout << factorial(num) << endl;

	return 0;
}