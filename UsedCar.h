#ifndef USEDCAR_H
#define USEDCAR_H

#include <string>
using namespace std;

class UsedCar {
private:
    string make;
    string model;
    int year;
    double price;
    int mileage;

public:
    // ������
    UsedCar(string _make, string _model, int _year, double _price, int _mileage);

    // �Ҹ���
    ~UsedCar();

    // ������ (getter)
    string getMake();
    string getModel();
    int getYear();
    double getPrice();
    int getMileage();

    // ������ (setter)
    void setYear(int _year);
    void setMileage(int _mileage);

    // ����Ÿ� �� ���Ŀ� ���� ���� ���
    double calculateDiscountedPrice();

    // ���� ���� ���
    void displayInfo();
};

#endif
