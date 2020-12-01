#include <iostream>
#include "genome.h"

using namespace std;
int main() {
    Genome genome;
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    cout << "Thanks, your result is: " << genome.test(a, b) << endl;
    return 0;
}
