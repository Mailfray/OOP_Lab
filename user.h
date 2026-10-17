#ifndef USER_H
#define USER_H

#include <string>
#include "triangle.h"

class User {
private:
    std::string userName;

public:
    User();
    User(const std::string& name);
    ~User();

    void analyzeAndMove(Triangle& t, double dx, double dy) const;
};

#endif