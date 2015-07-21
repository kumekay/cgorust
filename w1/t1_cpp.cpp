#include <iostream>
#include <cmath>
void say(int);


using namespace std;

int main() {
    using namespace std;
    cout << "Hello, World!";
    cout << endl;
    cout << "test";
    double l;
    cin >> l;
    cout << "L is: " << sqrt(l) << endl;
    say(4);
    return 0;
}

void say(int n)
{
    std::cout << "Test: " << n << "!";
}
