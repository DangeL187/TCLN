bool command_list(string input_cmd) {
    if (input_cmd == "help") {
        cout << "Available commands for advanced mode:" << endl;
        cout << "help" << "               " << "print help" << endl;
        cout << "task, tasks, top" << "   " << "tasks monitoring mode" << endl;
        cout << "hardware, sensors" << "  " << "hardware monitoring mode" << endl;
        cout << "traffic, nethogs" << "   " << "traffic monitoring mode" << endl;
        cout << "version" << "            " << "print version" << endl;
        cout << "exit" << "               " << "exit" << endl;
    }
    else if (input_cmd == "version") {
        cout << "TCLN 0.4" << endl;
    }
    else if (input_cmd == "tasks" || input_cmd == "task" || input_cmd == "top") {
        system("top");
    }
    else if (input_cmd == "hardware" || input_cmd == "sensors") {
        cout << "--------------------------------------------------------------\n";
        system("sensors");
        cout << "--------------------------------------------------------------\n";
    }
    else if (input_cmd == "traffic" || input_cmd == "nethogs") {
        system("sudo nethogs");
    }
    else if (input_cmd == "exit") {
        return false;
    }
    return true;
}
