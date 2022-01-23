#include "headers.h"

using namespace std;

int main(int argc, char* argv[]) {
    string mode = "";
    string input_cmd = "";

    if (argc > 1) {
        string arg = argv[1];
        if (arg == "-h" || arg == "--help") {
            usage();
            return 0;
        }
        else if (arg == "-v" || arg == "--version") {
            version();
            return 0;
        }
        else if (arg == "-T" || arg == "--tasks") {
            tasks();
            return 0;
        }
        else if (arg == "-H" || arg == "--hardware") {
            hardware();
            return 0;
        }
        else if (arg == "-I" || arg == "--resources") {
            resources();
            return 0;
        }
        else {
            usage();
            return 0;
        }
    } else {
        mode = "Advanced mode";
    }

    system("clear");
    cout << "\033[1;36mTotal Control over the Local Network (TCLN) by DangeL [Version 0.5] \033[0m" << endl;
	cout << "\033[1;36m   _____    _____    _        __    _    \033[0m" << endl;
	cout << "\033[1;36m  |_____|  |  ___|  | |      |  \\  | |  \033[0m" << endl;
	cout << "\033[1;36m    | |    | |      | |      |   \\ | |  \033[0m" << endl;
	cout << "\033[1;36m    | |    | |      | |      | |\\ \\| | \033[0m" << endl;
	cout << "\033[1;36m    | |    | |___   | |___   | | \\   |  \033[0m" << endl;
	cout << "\033[1;36m    |_|    |_____|  |_____|  |_|  \\__|  \033[0m" << endl;
    cout << endl;
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
