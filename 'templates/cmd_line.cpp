#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    // Check if filename diya hai ya nahi
    if (argc != 2) {
        cout << "Usage: ./a.out filename\n";
        return 0;
    }
    ifstream file(argv[1]);  // File open kar rahe
    if (!file) {
        cout << "File not found!\n";
        return 0;
    }
    char ch;
    while (file.get(ch)) {  // Character by character read
        cout << ch;         // Display kar rahe
    }
    file.close();
    return 0;
}