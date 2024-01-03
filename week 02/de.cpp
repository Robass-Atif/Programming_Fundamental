#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file1;
    file1.open("example.txt",ios::out);
    file1<<" ";
    file1.close();

    // Open file in read mode
    fstream file("example.txt");

    // Check if file is empty
    if (file.peek() ==fstream::traits_type::eof()) {
        cout << "File is empty" << endl;
    } else {
        // Load file contents
        cout << "File is not empty" << endl;
        // ... code to read file contents goes here ...
    }

    // Close file
    file.close();

    return 0;
}
