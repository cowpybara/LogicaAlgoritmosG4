#include <iostream>

using namespace std;

int main() {
    int num, sum = 0, count;

    cout << "Enter the number of integers to sum: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter integer " << i+1 << ": ";
        cin >> num;
        sum += num;
    }

    cout << "The sum of the entered integers is: " << sum << endl;

    return 0;
}