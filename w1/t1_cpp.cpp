#include <iostream>
#include <cmath>
void say(int);

using namespace std;

const int test {14};

int main() {
    cout << "Hello, World!";
    cout << endl;
    cout << "test: " << test << endl;
    double l;
    cin >> l;
    cout << "L is: " << sqrt(l) << endl;
    say(4);
    return 0;
}

void say(int n)
{
    std::cout << "Say: " << n << "!\n";
    std::cout << "Test from say: " << test << "!\n";
}
