//
// Created by alireza on 8/19/20.
//
/*
 * quadratic function format:
 *                          0.5 * x' * H * x + c'x + d
 */

#ifndef GRADIENT_DISCENT_QUADRATIC_H
#define GRADIENT_DISCENT_QUADRATIC_H

#include "../lib/eigen-3.3.7/Eigen/Dense"

using namespace Eigen;

class QuadFunc{
public:
    QuadFunc(); // default constructor

    QuadFunc(Matrix<double, Dynamic, Dynamic> H, Matrix<double, Dynamic, 1>  c, Matrix<double, 1, 1> d); //main constructor

    Matrix<double,1,1> objective_value(Matrix<double, Dynamic, 1> x); //compute the objective value

    Matrix<double, Dynamic, 1> gradient(Matrix<double, Dynamic, 1> x); //compute the gradient vector

    Matrix<double, Dynamic, Dynamic> hessian(Matrix<double, Dynamic, 1> x); // compute the hessian matrix


    const Matrix<double, Dynamic, Dynamic> &getH() const; //geter for H

    void setH(const Matrix<double, Dynamic, Dynamic> &h); //setter for H

    const Matrix<double, Dynamic, 1> &getC() const; //getter for c

    void setC(const Matrix<double, Dynamic, 1> &c); //setter for d

    MatrixXd getD() const; //getter for d

    void setD(Matrix<double,1,1> d); //setter for d

private:
    Matrix<double, Dynamic, Dynamic> H;
    Matrix<double, Dynamic, 1>  c;
    MatrixXd d;
};


#endif //GRADIENT_DISCENT_QUADRATIC_H
