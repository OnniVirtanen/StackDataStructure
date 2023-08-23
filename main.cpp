#include <iostream>
#include "stack.h"

class Car
{
public:
    std::string GetMake() const;
    void SetMake(std::string make);
    Car(std::string make);
    Car();
private:
    std::string make_;
};

Car::Car() {}

Car::Car(std::string make) { make_ = make; }

std::string Car::GetMake() const
{
    return make_;
}

void Car::SetMake(std::string make)
{
    make_ = make;
}

int main()
{
    Car car1("Toyota");
    Car car2("Audi");
    Car car3("Saab");

    Stack<Car, 3> stack;
    stack.Push(car1);
    stack.Push(car2);
    stack.Push(car3);

    stack.Pop();
    std::cout << stack.Peek().GetMake() << std::endl;

    return 0;
}
