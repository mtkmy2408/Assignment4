#include <iostream>
#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;
public:
    Car(int yearModel, std::string make) {
        this->yearModel = yearModel;
        this->make = make;
        this->speed = 0;
    }

    int getYearModel() {
        return yearModel;
    }

    std::string getMake() {
        return make;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
    }
};

int main() {
    Car car(2022, "Toyota");
    for (int i = 0; i < 5; i++) {
        car.accelerate();
        std::cout << "Current speed: " << car.getSpeed() << std::endl;
    }
    for (int i = 0; i < 5; i++) {
        car.brake();
        std::cout << "Current speed: " << car.getSpeed() << std::endl;
    }
    return 0;
}