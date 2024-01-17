//
// Created by Stepan on 17.01.2024.
//

#ifndef CPP_LAB9_ABSTRACTFILTER_H
#define CPP_LAB9_ABSTRACTFILTER_H

template <typename T>
class AbstractFilter {
public:
    virtual bool operator()(T obj) const = 0;
};

#endif //CPP_LAB9_ABSTRACTFILTER_H
