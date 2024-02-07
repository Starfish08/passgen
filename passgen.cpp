#include <iostream>
#include "Password.hpp"
#include <string>

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
    int command_lenght;
    int command;
    bool command_num = false;
    bool command_letters = false;
    bool command_special = false;
    cout << "What lenght ?" << endl;
    cin >> command_lenght;
    cout << "Level ?" << endl << "1 : just letters" << endl << "2 : just numbers" << endl << "3 : just special" << endl;
    cin >> command;
    switch (command)  {
    case 1:
        command_letters = true;
        break;

    case 2:
        command_num = true;
        break;
    
    case 3:
        command_special = true;
        break;

    default:
        cout << "Commande incorrecte" << endl;
}
    cout << password.create(command_lenght, command_num, command_letters, command_special) << endl;
    return 0;
}
