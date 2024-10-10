#include <iostream>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "Ââĺäłňü ďĺđřĺ ÷čńëî\n";   cin >> a;

    cout << "Ââĺäłňü îďĺđŕňîđ\n1\t+\n2\t-\n3\t*\n4\t/\n\n";  cin >> op;

    cout << "Ââĺäłňü äđóăĺ ÷čńëî\n";     cin >> b;

    switch (op) {

    case 1:     result = a + b;

        break;

    case 2:     result = a - b;
        
        break;

    case 3:     result = a * b;

        break;

    case 4:     result = a / b;

        break;
    case 5:     result = a ^ b;

        break;
        
    }

    cout << "Đĺçóëüňŕň = " << result;

}
