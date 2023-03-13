#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    // Constructor #2
    Inventory(int num, double c, int qty) {
        itemNumber = num;
        cost = c;
        quantity = qty;
        setTotalCost();
    }

    // Mutator functions
    void setItemNumber(int num) {
        if (num >= 0) {
            itemNumber = num;
        }
    }

    void setQuantity(int qty) {
        if (qty >= 0) {
            quantity = qty;
            setTotalCost();
        }
    }

    void setCost(double c) {
        if (c >= 0.0) {
            cost = c;
            setTotalCost();
        }
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Accessor functions
    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    // Create Inventory objects
    Inventory item1(1, 59.95, 12);
    Inventory item2(2, 34.95, 40);
    Inventory item3(3, 24.95, 20);

    // Display inventory data
    cout << setw(10) << "Item #" << setw(20) << "Description" << setw(15) << "Units On Hand" << setw(10) << "Price" << endl;
    cout << setw(10) << item1.getItemNumber() << setw(20) << "Jacket" << setw(15) << item1.getQuantity() << setw(10) << item1.getCost() << endl;
    cout << setw(10) << item2.getItemNumber() << setw(20) << "Designer Jeans" << setw(15) << item2.getQuantity() << setw(10) << item2.getCost() << endl;
    cout << setw(10) << item3.getItemNumber() << setw(20) << "Shirt" << setw(15) << item3.getQuantity() << setw(10) << item3.getCost() << endl;
    cout << endl;

    // Calculate and display total inventory cost
    double totalInventoryCost = item1.getTotalCost() + item2.getTotalCost() + item3.getTotalCost();
    cout << "Total inventory cost: $" << totalInventoryCost << endl;

    return 0;
}




