#include<iostream>
#include<cstring>
using namespace std;

class Book {
    static int ref_count, txt_count;
    char id[20], name[20], author[20], type[20];
    int digit;   

public:
    // Constructor (sirf type set karega)
    Book(const char t[20]) {
        strcpy(type, t);
        id[0] = '\0';   // safe initialization
    }

    void setdata() {
        cout << "Enter name of book:\n";
        cin >> name;

        cout << "Enter author name:\n";
        cin >> author;

        cout << "Enter digits for id:\n";
        cin >> digit;

        generateID(); 
    }

    void generateID() {
        char numstr[20];

        if (strcmp(type, "REF") == 0) {
            ref_count++;
            strcpy(id, "REF");
            sprintf(numstr, "%d", ref_count);
        }
        else if (strcmp(type, "TXT") == 0) {
            txt_count++;
            strcpy(id, "TXT");
            sprintf(numstr, "%d", txt_count);
        }
        else {
            strcpy(id, "INVALID");
            return;
        }

        while ((int)strlen(numstr) < digit) {
            strcat(id, "0");
            digit--;
        }
        strcat(id, numstr);
    }

    void getdata() {
        cout << "\nName of book  : " << name;
        cout << "\nAuthor        : " << author;
        cout << "\nType of book  : " << type;
        cout << "\nID of book    : " << id << endl;
    }
};

int Book::ref_count = 0;
int Book::txt_count = 0;

int main() {
    Book b1("REF");
    Book b2("TXT");
    Book b3("REF");

    cout << "Enter book 1 info:\n";
    b1.setdata();

    cout << "Enter book 2 info:\n";
    b2.setdata();

    cout << "Enter book 3 info:\n";
    b3.setdata();

    cout << "\n--- Book Details ---";
    b1.getdata();
    b2.getdata();
    b3.getdata();

    return 0;
}
