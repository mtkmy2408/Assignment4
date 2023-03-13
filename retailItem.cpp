#include <iostream>
#include <string>

class RetailItem {
private:
    std::string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(std::string description, int unitsOnHand, double price) {
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }

    void setDescription(std::string description) {
        this->description = description;
    }

    void setUnitsOnHand(int unitsOnHand) {
        this->unitsOnHand = unitsOnHand;
    }

    void setPrice(double price) {
        this->price = price;
    }

    std::string getDescription() {
        return description;
    }

    int getUnitsOnHand() {
        return unitsOnHand;
    }

    double getPrice() {
        return price;
    }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    std::cout << "Item #1 Description: " << item1.getDescription() << std::endl;
    std::cout << "Item #1 Units On Hand: " << item1.getUnitsOnHand() << std::endl;
    std::cout << "Item #1 Price: $" << item1.getPrice() << std::endl;

    std::cout << "Item #2 Description: " << item2.getDescription() << std::endl;
    std::cout << "Item #2 Units On Hand: " << item2.getUnitsOnHand() << std::endl;
    std::cout << "Item #2 Price: $" << item2.getPrice() << std::endl;

    std::cout << "Item #3 Description: " << item3.getDescription() << std::endl;
    std::cout << "Item #3 Units On Hand: " << item3.getUnitsOnHand() << std::endl;
    std::cout << "Item #3 Price: $" << item3.getPrice() << std::endl;

    return 0;
}




