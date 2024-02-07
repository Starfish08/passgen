#include <iostream>
#include "Password.hpp"

using namespace std;
void setup() {
    cout << "██████╗  █████╗ ███████╗███████╗ ██████╗ ███████╗███╗   ██╗" << endl;
    cout << "██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝ ██╔════╝████╗  ██║" << endl;
    cout << "██████╔╝███████║███████╗███████╗██║  ███╗█████╗  ██╔██╗ ██║" << endl;
    cout << "██╔═══╝ ██╔══██║╚════██║╚════██║██║   ██║██╔══╝  ██║╚██╗██║" << endl;
    cout << "██║     ██║  ██║███████║███████║╚██████╔╝███████╗██║ ╚████║" << endl;
    cout << "╚═╝     ╚═╝  ╚═╝╚══════╝╚══════╝ ╚═════╝ ╚══════╝╚═╝  ╚═══╝ "<< endl;
}
int main() {
    setup();
    Password password;
    cout << password.create(16, true, true, true) << endl;
    return 0;
}
