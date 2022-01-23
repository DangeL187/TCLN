bool command_list(string input_cmd) {
    if (input_cmd == "help") {
        help();
    }
    else if (input_cmd == "clear" || input_cmd == "cls") {
        system("clear");
    }
    else if (input_cmd == "version") {
        version();
    }
    else if (input_cmd == "tasks" || input_cmd == "task" || input_cmd == "top") {
        tasks();
    }
    else if (input_cmd == "hardware" || input_cmd == "sensors") {
        hardware();
    }
    else if (input_cmd == "resources" || input_cmd == "nethogs") {
        resources();
    }
    else if (input_cmd == "exit") {
        return false;
    }
    return true;
}
