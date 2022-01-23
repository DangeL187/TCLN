using namespace std;

void usage() {
    cout << endl << "Usage:" << endl;
    cout << "tcln [options]" << endl << endl;
    cout << "Options:" << endl;
    cout << "-h, --help" << "\t" << "print help and exit" << endl;
    cout << "-A, --advanced" << "\t" << "advanced mode" << endl;
    cout << "-T, --tasks" << "\t" << "tasks monitoring mode" << endl;
    cout << "-H, --hardware" << "\t" << "hardware monitoring mode" << endl;
    cout << "-N, --traffic" << "\t" << "traffic monitoring mode" << endl;
    cout << "-I, --resources" << "\t" << "use of internet resources monitoring mode" << endl;
    cout << "-R, --remote" << "\t" << "remote control mode" << endl;
    cout << "-S, --speed" << "\t" << "run internet speed test" << endl;
    cout << "-v, --version" << "\t" << "print version and exit" << endl;
}

void help() {
    cout << "Available commands for advanced mode:" << endl;
    cout << "help" << "               " << "print help" << endl;
    cout << "clear, cls" << "         " << "clear terminal" << endl;
    cout << "task, tasks, top" << "   " << "tasks monitoring mode" << endl;
    cout << "hardware, sensors" << "  " << "hardware monitoring mode" << endl;
    cout << "resources, nethogs" << " " << "use of internet resources monitoring mode" << endl;
    //cout << "traffic, ?" << "   " << "traffic monitoring mode" << endl;
    cout << "version" << "            " << "print version" << endl;
    cout << "exit" << "               " << "exit" << endl;
}

void version() {
    cout << "TCLN 0.5" << endl;
}

void tasks() {
    system("clear");
    system("top");
    system("clear");
}

void hardware() {
    cout << "--------------------------------------------------------------\n";
    system("sensors");
    cout << "--------------------------------------------------------------\n";
}

void resources() {
    system("sudo nethogs");
    system("clear");
}
