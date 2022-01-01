#include <vector>

std::vector<std::string> split(std::string line) {
    std::vector<std::string> output;
    std::string buffer;
    for (int ii = 0; ii <= line.length(); ii++) {
        if (line[ii] != ' ') {
            buffer += line[ii];
        }
        else {
            if (buffer != " " && !buffer.empty()) {
                output.push_back(buffer);
                buffer = "";
            }
        }
        if (ii == line.length()) {
            buffer += line[ii];
            output.push_back(buffer);
            buffer = "";
        }
    }
    return output;
}