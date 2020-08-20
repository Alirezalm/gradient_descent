//
// Created by alireza on 8/19/20.
//

#include "../include/problem.h"

Problem::Problem(QuadFunc obj): objective(obj) {
}
void Problem::solve() {

    using scalar = typename MatrixXd :: Scalar;

    MatrixXd obj = MatrixXd :: Ones(1,1);
    scalar error = 1.0;
    scalar eps = 1e-3;
    const int n = objective.H.rows();
    int iter = 0, max_iter = 5000;
    MatrixXd x = MatrixXd :: Random(n,1);
    MatrixXd grad = MatrixXd :: Zero(n,1);
    scalar t = 0.005;
    while ((error >= eps)){
        ++iter;
        grad = objective.gradient(x);
        x -= t * grad;
        obj = objective.objective_value(x);
        error = grad.norm();
        std :: cout << "iter " << iter << " obj: " << obj << " error: " << error << std :: endl;

    }
}






