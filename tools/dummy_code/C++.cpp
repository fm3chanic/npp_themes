#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

// comment
// comment 2

const double PI = 3.14159;

enum class Status {
    OK,
    WARNING,
    ERROR
};

struct Point {
    double x;
    double y;

    // Konstruktor
    Point(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}

    // Methode (Funktion innerhalb der Struktur)
    double distanceToOrigin() const {
        return std::sqrt(x * x + y * y);
    }
};

class Shape {
public:
    std::string color;

    virtual double area() const {
        return 0.0;
    }

    Shape(const std::string& _color = "unknown") : color(_color) {}

    void printColor() const {
        std::cout << "Farbe: " << color << std::endl;
    }

    virtual ~Shape() {}

protected:
    int borderWidth = 1;

private:
    std::string name = "Form";

    void printName() const {
        std::cout << "Name: " << name << std::endl;
    }
};

class Circle : public Shape {
public:
    double radius;

    Circle(double _radius, const std::string& _color = "blue")
        : Shape(_color), radius(_radius) {} 

    double area() const override {
        return PI * radius * radius;
    }

    double circumference() const {
        return 2 * PI * radius;
    }

    void increaseBorderWidth() {
        borderWidth++;
        std::cout << "Rahmenstärke erhöht auf: " << borderWidth << std::endl;
    }
};

int add(int a, int b) {
    return a + b;
}

template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int integerVar = 10;
    double doubleVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;
    std::string stringVar = "Hallo C++";

    std::cout << stringVar << std::endl;
    std::cout << "Integer: " << integerVar << ", Double: " << doubleVar << std::endl;

    if (integerVar > 5) {
        std::cout << "Integer ist größer als 5." << std::endl;
    } else if (integerVar == 5) {
        std::cout << "Integer ist gleich 5." << std::endl;
    } else {
        std::cout << "Integer ist kleiner als 5." << std::endl;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Schleifeniteration: " << i << std::endl;
    }

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (int number : numbers) {
        std::cout << "Zahl: " << number << std::endl;
    }

    int counter = 0;
    while (counter < 3) {
        std::cout << "While-Schleife: " << counter << std::endl;
        counter++;
    }

    Status currentStatus = Status::OK;
    switch (currentStatus) {
        case Status::OK:
            std::cout << "Status ist OK." << std::endl;
            break;
        case Status::WARNING:
            std::cout << "Status ist WARNUNG." << std::endl;
            break;
        case Status::ERROR:
            std::cout << "Status ist FEHLER." << std::endl;
            break;
        default:
            std::cout << "Unbekannter Status." << std::endl;
            break;
    }

    Point p1(2.5, 3.7);
    std::cout << "Punkt P1: (" << p1.x << ", " << p1.y << "), Abstand zum Ursprung: " << p1.distanceToOrigin() << std::endl;

    Circle c1(5.0, "rot");
    c1.printColor();
    std::cout << "Fläche des Kreises: " << c1.area() << std::endl;
    std::cout << "Umfang des Kreises: " << c1.circumference() << std::endl;
    c1.increaseBorderWidth();

    Shape* s1 = new Circle(3.0, "grün");
    s1->printColor();
    std::cout << "Fläche der Form (als Kreis): " << s1->area() << std::endl;
    delete s1; // Wichtig: Speicher freigeben!

    int sum = add(5, 7);
    std::cout << "Summe: " << sum << std::endl;

    std::cout << "Maximum von 10 und 20: " << maxVal(10, 20) << std::endl;
    std::cout << "Maximum von 3.14 und 2.71: " << maxVal(3.14, 2.71) << std::endl;

    try {
        if (integerVar < 0) {
            throw std::runtime_error("Integer darf nicht negativ sein!");
        }
        std::cout << "Integer ist nicht negativ." << std::endl;
    } catch (const std::runtime_error& error) {
        std::cerr << "Fehler: " << error.what() << std::endl;
    }

    auto multiply = [](int a, int b) { return a * b; };
    std::cout << "Produkt von 4 und 6: " << multiply(4, 6) << std::endl;

    return 0; 
}