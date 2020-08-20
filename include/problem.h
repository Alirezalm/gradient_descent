//
// Created by Alireza on 8/19/20.
//

#ifndef GRADIENT_DISCENT_PROBLEM_H
#define GRADIENT_DISCENT_PROBLEM_H
#include <iostream>
#include <cmath>
#include "../lib/eigen-3.3.7/Eigen/Dense"
#include "../lib/eigen-3.3.7/Eigen/Cholesky"
#include "quadratic.h"

class Problem{
public:
    Problem(QuadFunc obj);
    void solve();
private:
    QuadFunc objective;
};

#endif //GRADIENT_DISCENT_PROBLEM_H
