/*

why "installing/Hello.h"?

because in 01-basic/E-installing, the install() copy directory
the source dir is "include/installing", so this is copied into 
/usr/local/include entirely

*/

#include <iostream>
#include "installing/Hello.h"

int main() {
    Hello h;
    std::cout << "calling Hello::print()\n";
    h.print();
    return 0;
}