#include "triangle.h"
#include <cmath>

using namespace std;

double Triangle::side(double ax, double ay, double bx, double by) const {
    return hypot(bx - ax, by - ay);
}

Triangle::Triangle() : x1(0), y1(0), x2(3), y2(0), x3(0), y3(4) {}

Triangle::Triangle(double ax, double ay, double bx, double by, double cx, double cy)
    : x1(ax), y1(ay), x2(bx), y2(by), x3(cx), y3(cy) {}


Triangle::~Triangle() {}

double Triangle::getPerimeter() const {
    return side(x1, y1, x2, y2) + side(x2, y2, x3, y3) + side(x3, y3, x1, y1);
}

double Triangle::getArea() const {
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

void Triangle::move(double dx, double dy) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
}

Triangle Triangle::operator-() const {
    return Triangle(-x1, -y1, -x2, -y2, -x3, -y3);
}

Triangle Triangle::operator*(double scale) const {
    return Triangle(x1 * scale, y1 * scale, x2 * scale, y2 * scale, x3 * scale, y3 * scale);
}

Triangle Triangle::operator+(const Triangle& other) const {
        return Triangle(x1 + other.x1, y1 + other.y1,
                        x2 + other.x2, y2 + other.y2,
                        x3 + other.x3, y3 + other.y3);
}

ostream& operator<<(ostream& os, const Triangle& t) {
    os << "A(" << t.x1 << ", " << t.y1 << "), "
       << "B(" << t.x2 << ", " << t.y2 << "), "
       << "C(" << t.x3 << ", " << t.y3 << ")";
    return os;
}

istream& operator>>(istream& is, Triangle& t) {
    is >> t.x1 >> t.y1 >> t.x2 >> t.y2 >> t.x3 >> t.y3;
    return is;
}