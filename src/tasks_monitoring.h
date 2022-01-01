using namespace std;

void tasks_monitor() {
    system("clear");
    while (true) {
        system("top -b -n 1 > ../src/temp/top.txt"); //TODO: check TCLN's path
        ifstream f1("../src/temp/top.txt");
        string line;
        int counter = 0;
        cout << "USER\t%CPU\t%MEM\tCOMMAND" << endl;
        while (getline (f1, line)) {
            counter++;
            if (counter > 7) {
                vector<string> commands = split(line);
                string user = commands[1];
                string cpu = commands[8];
                string mem = commands[9];
                string app = "";
                for (int i = 11; i <= commands.size()-1; i++) {
                    app += commands[i] + "\t";
                }
                if (atof(cpu.c_str()) > 1.0 || atof(mem.c_str()) > 1.0) {
                    cout << user + "\t" + cpu + "\t" + mem + "\t" + app << endl;
                }
            }
        }
        f1.close();
        ///
        auto a = cin.get(); if(a!=10){break;}
        system("clear");
        ///
    }
}
