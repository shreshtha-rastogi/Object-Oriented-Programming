#include <iostream>
#include <fstream>
using namespace std;
class Order {
public:
    string product_name;
    int quantity;
    double price;
    string customer_name;
    void input() {
        cout << "Enter customer name (single word): ";
        cin >> customer_name;

        cout << "Enter product name (single word): ";
        cin >> product_name;

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter price per product: ";
        cin >> price;
    }
    void display() {
        cout << "Customer: " << customer_name 
             << ", Product: " << product_name 
             << ", Quantity: " << quantity 
             << ", Price: " << price 
             << ", Total: " << totalAmount() << endl;
    }
    double totalAmount() {
        return quantity * price;
    }
};
int main() {
    Order orders[10];

    // Input 10 orders
    for(int i = 0; i < 10; i++) {
        cout << "\nOrder " << i+1 << ":\n";
        orders[i].input();
    }
    // Write all orders to orderdetails.txt
    ofstream fout("orderdetails.txt");
    for(int i = 0; i < 10; i++) {
        fout << orders[i].customer_name << " "
             << orders[i].product_name << " "
             << orders[i].quantity << " "
             << orders[i].price << " "
             << orders[i].totalAmount() << endl;
    }
    fout.close();

    // Read orders and write unpaid customers to unpaidorder.txt
    ifstream fin("orderdetails.txt");
    ofstream foutUnpaid("unpaidorder.txt");
    string cname, pname;
    int qty;
    double price, total;

    while(fin >> cname >> pname >> qty >> price >> total) {
        if(total > 250) {
            foutUnpaid << cname << endl;
        }
    }

    fin.close();
    foutUnpaid.close();

    cout << "\nOrders saved in orderdetails.txt\n";
    cout << "Unpaid customers with total > 250 saved in unpaidorder.txt\n";

    return 0;
}