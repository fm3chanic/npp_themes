#include <iostream>     // Für die Ein- und Ausgabe
#include <vector>       // Für dynamische Arrays
#include <string>       // Für Zeichenketten
#include <algorithm>    // Für nützliche Algorithmen
#include <cmath>        // Für mathematische Funktionen

// Definition einer Konstanten
const double PI = 3.14159;

// Definition eines Enums (Aufzählungstyp)
enum class Status {
    OK,
    WARNING,
    ERROR
};

// Definition einer Struktur (ähnlich einem einfachen Objekt/Datentyp)
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

// Definition einer Klasse (mit Daten und Funktionen/Methoden)
class Shape {
public:
    // Öffentliche Member-Variable
    std::string color;

    // Öffentliche virtuelle Methode (ermöglicht Polymorphie)
    virtual double area() const {
        return 0.0;
    }

    // Öffentlicher Konstruktor
    Shape(const std::string& _color = "unknown") : color(_color) {}

    // Öffentliche Methode
    void printColor() const {
        std::cout << "Farbe: " << color << std::endl;
    }

    // Öffentlicher Destruktor (wird aufgerufen, wenn das Objekt zerstört wird)
    virtual ~Shape() {}

protected:
    // Geschützte Member-Variable (nur für die Klasse selbst und abgeleitete Klassen zugänglich)
    int borderWidth = 1;

private:
    // Private Member-Variable (nur innerhalb der Klasse zugänglich)
    std::string name = "Form";

    // Private Methode
    void printName() const {
        std::cout << "Name: " << name << std::endl;
    }
};

// Definition einer abgeleiteten Klasse (Erbt von Shape)
class Circle : public Shape {
public:
    double radius;

    // Konstruktor der abgeleiteten Klasse
    Circle(double _radius, const std::string& _color = "blue")
        : Shape(_color), radius(_radius) {} // Aufruf des Basisklassenkonstruktors

    // Überschreiben der virtuellen Methode area()
    double area() const override {
        return PI * radius * radius;
    }

    // Spezifische Methode für die Kreis-Klasse
    double circumference() const {
        return 2 * PI * radius;
    }

    // Zugriff auf eine geschützte Member-Variable der Basisklasse
    void increaseBorderWidth() {
        borderWidth++;
        std::cout << "Rahmenstärke erhöht auf: " << borderWidth << std::endl;
    }
};

// Definition einer globalen Funktion
int add(int a, int b) {
    return a + b;
}

// Definition einer Template-Funktion (arbeitet mit verschiedenen Datentypen)
template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Deklaration und Initialisierung von Variablen
    int integerVar = 10;
    double doubleVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;
    std::string stringVar = "Hallo C++";

    // Ausgabe auf die Konsole
    std::cout << stringVar << std::endl;
    std::cout << "Integer: " << integerVar << ", Double: " << doubleVar << std::endl;

    // Kontrollstrukturen
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
    for (int number : numbers) { // Bereichsbasierte for-Schleife (C++11)
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

    // Verwendung von Strukturen
    Point p1(2.5, 3.7);
    std::cout << "Punkt P1: (" << p1.x << ", " << p1.y << "), Abstand zum Ursprung: " << p1.distanceToOrigin() << std::endl;

    // Verwendung von Klassen und Objekten
    Circle c1(5.0, "rot");
    c1.printColor();
    std::cout << "Fläche des Kreises: " << c1.area() << std::endl;
    std::cout << "Umfang des Kreises: " << c1.circumference() << std::endl;
    c1.increaseBorderWidth();

    Shape* s1 = new Circle(3.0, "grün"); // Polymorphie: Zeiger auf Basisklasse zeigt auf abgeleitetes Objekt
    s1->printColor();
    std::cout << "Fläche der Form (als Kreis): " << s1->area() << std::endl;
    delete s1; // Wichtig: Speicher freigeben!

    // Verwendung globaler Funktionen
    int sum = add(5, 7);
    std::cout << "Summe: " << sum << std::endl;

    // Verwendung von Template-Funktionen
    std::cout << "Maximum von 10 und 20: " << maxVal(10, 20) << std::endl;
    std::cout << "Maximum von 3.14 und 2.71: " << maxVal(3.14, 2.71) << std::endl;

    // Umgang mit Exceptions (Fehlerbehandlung)
    try {
        if (integerVar < 0) {
            throw std::runtime_error("Integer darf nicht negativ sein!");
        }
        std::cout << "Integer ist nicht negativ." << std::endl;
    } catch (const std::runtime_error& error) {
        std::cerr << "Fehler: " << error.what() << std::endl;
    }

    // Lambda-Ausdruck (anonyme Funktion) (C++11)
    auto multiply = [](int a, int b) { return a * b; };
    std::cout << "Produkt von 4 und 6: " << multiply(4, 6) << std::endl;

    return 0; // Erfolgreiche Ausführung
}