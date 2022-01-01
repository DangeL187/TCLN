//THIS IS AN OLD VERSION, IT MIGHT NOT WORK WITH CURRENT FILES AND HEADERS

#include "headers.h"

using namespace std;

int main(int argc, char* argv[]) {
    string mode = "";
    string input_cmd = "";

    if (argc > 1) {
        string arg = argv[1];
        if (arg == "--help" || arg == "-h") {
            cout << "-h, --help" << "\t" << "print help and exit" << endl;
            cout << "-H, --hardware" << "\t" << "hardware monitoring mode" << endl;
            cout << "-T, --tasks" << "\t" << "tasks monitoring mode" << endl;
            cout << "-N, --traffic" << "\t" << "traffic monitoring mode" << endl;
            cout << "-R, --remote" << "\t" << "remote control mode" << endl;
            cout << "-S, --speed" << "\t" << "run internet speed test" << endl;
            return 0;
        }
    } else {
        mode = "Advanced mode";
    }

    cout << "Welcome to TCLN!" << endl;
    cout << "#" << mode << endl;
    if (mode == "Advanced mode") {
        while (true) {
            cout << "--> ";
            cin >> input_cmd; //TODO: replace with another input function
            if (!command_list(input_cmd)) { break; }
        }
    }
    return 0;
}
