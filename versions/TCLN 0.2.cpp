//THIS IS AN OLD VERSION, IT MIGHT NOT WORK WITH CURRENT FILES AND HEADERS

#include "headers.h"

using namespace std;

int main() {
    string input_cmd = "";

    cout << "Welcome to TCLN!" << endl;
    cout << "type help for help" << endl;
    while (true) {
        cout << "--> ";
        cin >> input_cmd; //TODO: replace with another input function
        if (!command_list(input_cmd)) { break; }
    }
    return 0;
}
