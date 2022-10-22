#include <iostream>
#include "dll1/dllheader.h"
#include "cmndef.h"
#include "test.h"

using namespace std;

int main(int, char**) {

    int c = mymathadd(3,5);
    cout << "3 5 " << c << endl;
    std::cout << "Hello, world!\n" << endl;
}
