#include "user.h"
#include <iostream>

using namespace std;

User::User() : userName("Руслан") {}

User::User(const string& name) : userName(name) {}

User::~User() {}

void User::analyzeAndMove(Triangle& t, double dx, double dy) const {
    cout << "Пользователь: " << userName << "\n";
    cout << "Вершины: " << t << "\n";
    cout << "Периметр: " << t.getPerimeter() << ", Площадь: " << t.getArea() << "\n";
    t.move(dx, dy);
    cout << "После сдвига: " << t << "\n";
}