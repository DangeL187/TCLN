//THIS IS AN OLD VERSION, IT MIGHT NOT WORK WITH CURRENT FILES AND HEADERS

#include "headers.h"

using namespace std;

int main(int argc, char* argv[]) {
    string mode = "";
    string input_cmd = "";

    if (argc > 1) {
        string arg = argv[1];
        if (arg == "-h" || arg == "--help") {
            cout << endl << "Usage:" << endl;
            cout << "tcln [options]" << endl << endl;
            cout << "Options:" << endl;
            cout << "-h, --help" << "\t" << "print help and exit" << endl;
            cout << "-A, --advanced" << "\t" << "advanced mode" << endl;
            cout << "-T, --tasks" << "\t" << "tasks monitoring mode" << endl;
            cout << "-H, --hardware" << "\t" << "hardware monitoring mode" << endl;
            cout << "-N, --traffic" << "\t" << "traffic monitoring mode" << endl;
            cout << "-R, --remote" << "\t" << "remote control mode" << endl;
            cout << "-S, --speed" << "\t" << "run internet speed test" << endl;
            cout << "-v, --version" << "\t" << "print version and exit" << endl;
            return 0;
        }
        else if (arg == "-v" || arg == "--version") {
            cout << "TCLN 0.4" << endl;
            return 0;
        }
        else if (arg == "-T" || arg == "--tasks") {
            system("top");
            system("clear");
            mode = "Advanced mode";
        }
        else if (arg == "-H" || arg == "--hardware") {
            cout << "--------------------------------------------------------------\n";
            system("sensors");
            cout << "--------------------------------------------------------------\n";
            mode = "Advanced mode";
        }
        else if (arg == "-N" || arg == "--traffic") {
            system("sudo nethogs");
            system("clear");
            mode = "Advanced mode";
        }
        else {
            cout << endl << "Usage" << endl;
            cout << "tcln [options]" << endl << endl;
            cout << "Options:" << endl;
            cout << "-h, --help" << "\t" << "print help and exit" << endl;
            cout << "-A, --advanced" << "\t" << "advanced mode" << endl;
            cout << "-H, --hardware" << "\t" << "hardware monitoring mode" << endl;
            cout << "-T, --tasks" << "\t" << "tasks monitoring mode" << endl;
            cout << "-N, --traffic" << "\t" << "traffic monitoring mode" << endl;
            cout << "-R, --remote" << "\t" << "remote control mode" << endl;
            cout << "-S, --speed" << "\t" << "run internet speed test" << endl;
            cout << "-v, --version" << "\t" << "print version and exit" << endl;
            return 0;
        }
    } else {
        mode = "Advanced mode";
    }

    system("clear");
    cout << "Total Control over the Local Network (TCLN) by DangeL [Version 0.4]" << endl;
	cout << "   _____    _____    _        __    _" << endl;
	cout << "  |_____|  |  ___|  | |      |  \\  | |" << endl;
	cout << "    | |    | |      | |      |   \\ | |" << endl;
	cout << "    | |    | |      | |      | |\\ \\| |" << endl;
	cout << "    | |    | |___   | |___   | | \\   |" << endl;
	cout << "    |_|    |_____|  |_____|  |_|  \\__|" << endl;
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
