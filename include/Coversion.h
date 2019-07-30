/**
 * Copyright (C) 2019.7.30 Cai
 */

#ifndef COVERSION_H
#define COVERSION_H

#include <Eigen/Dense>

namespace Coversion
{
class Coversion
{
private:
    /* data */
public:
    Coversion(/* args */);
    Eigen::Quaterniond AngleAix2Qua();
    
    ~Coversion();
};

Coversion::Coversion(/* args */)
{
}

Coversion::~Coversion()
{
}


} //COVERSION

#endif