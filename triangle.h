#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

class Triangle {
private:
    double x1, y1, x2, y2, x3, y3;
    double side(double ax, double ay, double bx, double by) const;

public:
    Triangle();
    Triangle(double ax, double ay, double bx, double by, double cx, double cy);
    ~Triangle();

    double getPerimeter() const;
    double getArea() const;
    void move(double dx, double dy);

    Triangle operator-() const;
    Triangle operator*(double scale) const;
    Triangle operator+(const Triangle& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Triangle& t);
    friend std::istream& operator>>(std::istream& is, Triangle& t);
};

#endif