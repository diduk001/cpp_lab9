//
// Created by Stepan on 17.01.2024.
//

#ifndef CPP_LAB9_FILTERS_H
#define CPP_LAB9_FILTERS_H

#include "AbstractFilter.h"

class EvenIntFilter : public AbstractFilter<int> {
public:
    EvenIntFilter() {}

    bool operator()(int object) const { return object % 2 == 0; }
};

class TrueFilter : public AbstractFilter<bool> {
public:
    TrueFilter() {}

    bool operator()(bool object) const { return object; }
};

class NonEmptyStringFilter : public AbstractFilter<std::string> {
public:
    NonEmptyStringFilter() {}

    bool operator()(std::string object) const { return !object.empty(); }
};

class PositiveDoubleFilter : public AbstractFilter<double> {
public:
    PositiveDoubleFilter() {}

    bool operator()(double object) const { return object > 0; }
};


#endif //CPP_LAB9_FILTERS_H
