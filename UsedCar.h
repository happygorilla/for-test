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
    // 생성자
    UsedCar(string _make, string _model, int _year, double _price, int _mileage);

    // 소멸자
    ~UsedCar();

    // 접근자 (getter)
    string getMake();
    string getModel();
    int getYear();
    double getPrice();
    int getMileage();

    // 설정자 (setter)
    void setYear(int _year);
    void setMileage(int _mileage);

    // 주행거리 및 연식에 따른 할인 계산
    double calculateDiscountedPrice();

    // 차량 정보 출력
    void displayInfo();
};

//코드에 추가하기
#endif
