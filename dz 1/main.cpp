#include <iostream>
using namespace std;
class Car
{
private:
    char* model;
    char* country;
    char* color;
    char* year;
    char* price;

public:
    Car() :model(0), country(0), color(0), year(0), price(0) {}
    Car(const char* a, const char* b, const char* c, const char* y, const char* pr)
    {
        model = new char[strlen(a) + 1];
        strcpy(model, a);
        country = new char[strlen(b) + 1];
        strcpy(country, b);
        color = new char[strlen(c) + 1];
        strcpy(color, c);
        year = new char[strlen(y) + 1];
        strcpy(year, y);
        price = new char[strlen(pr) + 1];
        strcpy(price, pr);
    }
    ~Car()
    {
        delete[] model;
        delete[] country;
        delete[] color;
        delete[] year;
        delete[] price;
    }
    void input()
    {
        char buff[50];
        cout << "Model: ";
        cin.getline(buff, 50);
        model = new char[strlen(buff) + 1];
        strcpy(model, buff);
        cout << "Country: ";
        cin.getline(buff, 50);
        country = new char[strlen(buff) + 1];
        strcpy(country, buff);
        cout << "Color: ";
        cin.getline(buff, 50);
        color = new char[strlen(buff) + 1];
        strcpy(color, buff);
        cout << "Year: ";
        cin.getline(buff, 50);
        year = new char[strlen(buff) + 1];
        strcpy(year, buff);
        cout << "Price: ";
        cin.getline(buff, 50);
        price = new char[strlen(buff) + 1];
        strcpy(price, buff);
    }
    void initialize(const char* a, const char* b, const char* c, const char* y, const char* pr)
    {
        delete[] model;
        delete[] country;
        delete[] color;
        delete[] year;
        delete[] price;

        model = new char[strlen(a) + 1];
        strcpy(model, a);
        country = new char[strlen(b) + 1];
        strcpy(country, b);
        color = new char[strlen(c) + 1];
        strcpy(color, c);
        year = new char[strlen(y) + 1];
        strcpy(year, y);
        price = new char[strlen(pr) + 1];
        strcpy(price, pr);
    }
    void print()
    {
        cout << "Model: ";
        if (model)
            cout << model << endl;
        cout << "Strana: ";
        if (country)
            cout << country << endl;
        cout << "Color: ";
        if (color)
            cout << color << endl;
        cout << "Year: ";
        if (year)
            cout << year << endl;
        cout << "Price: ";
        if (price)
            cout << price << endl;

    }

};

int main()
{
    Car car1;
    car1.input();
    car1.print();
    Car car2 = Car("991 carera", "germany", "blue", "2022", "250 000$");
    car2.print();

}