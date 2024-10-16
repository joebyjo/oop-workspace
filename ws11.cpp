#include <iostream>
#include <fstream>
#include <stdexcept>

using namespace std;

class RecordManager {
public:
    int readRecords(const string& filename) {
        ifstream file(filename);
        if (!file) {
            throw runtime_error("Unable to open file");
        }

        int sum = 0;
        string record;
        while (getline(file, record)) {
            try {
                sum += stoi(record);
            } catch (const invalid_argument& e) {
                file.close();
                throw runtime_error("Invalid integer");
            }
        }
        if (file.bad()) {
            file.close();
            throw runtime_error("Error reading from file");
        }
        file.close();
        return sum;
    }
};

int main() {
    RecordManager rm;
    string filename = "test.txt";
    int sum;

    try {
        sum = rm.readRecords(filename);
        cout << "Sum of records in " << filename << ": " << sum << '\n';
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << '\n';
        if (filename != "" && filename[filename.size() - 1] != '/') {
            ifstream file(filename);
            if (file.is_open()) {
                file.close();
            } else {
                cerr << "Unable to close file\n";
            }
        }
        return 1;
    }

    return 0;
}