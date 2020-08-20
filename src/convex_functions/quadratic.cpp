//
// Created by alireza on 8/19/20.
//
/*
 * quadratic function format:
 *                          0.5 * x' * H * x + c'x + d
 */

#include "../../include/quadratic.h"


const Matrix<double, Dynamic, Dynamic> &QuadFunc::getH() const {
    return H;
}

void QuadFunc::setH(const Matrix<double, Dynamic, Dynamic> &h) {
    H = h;
}

const Matrix<double, Dynamic, 1> &QuadFunc::getC() const {
    return c;
}

void QuadFunc::setC(const Matrix<double, Dynamic, 1> &c) {
    QuadFunc::c = c;
}

MatrixXd QuadFunc::getD() const {
    return d;
}

void QuadFunc::setD(Matrix<double, 1,1> d) {
    QuadFunc::d = d;
}

QuadFunc::QuadFunc() {
    int n = 1;
    H.setRandom(n,n);
    c.setRandom(n,1);
    d.setRandom(1,1);

}

QuadFunc::QuadFunc(Matrix<double, Dynamic, Dynamic> H, Matrix<double, Dynamic, 1> c, Matrix<double, 1, 1> d): H(H), c(c), d(d) {}

Matrix<double, 1,1> QuadFunc::objective_value(Matrix<double, Dynamic, 1> x) {
    return 0.5 * x.transpose() * H * x + c.transpose() * x + d;
}

Matrix<double, Dynamic, 1> QuadFunc::gradient(Matrix<double, Dynamic, 1> x) {
    return H * x + c;
}

Matrix<double, Dynamic, Dynamic> QuadFunc::hessian(Matrix<double, Dynamic, 1> x) {
    return H;
}

MatrixXd QuadFunc::eigen_values() {
    return H.eigenvalues().real();
}





