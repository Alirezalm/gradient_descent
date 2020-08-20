#include <iostream>

#include "include/quadratic.h"
#include "include/problem.h"
int main() {

    int n;
    std :: cout << "Welcome to my QP solver" << std :: endl;
    std :: cout << "Gradient Based Unconstrained QP solver" << std :: endl;
    std :: cout << "Written by Alireza Olama <alireza.lm69@gmail.com>" << std :: endl;
    std :: cout << "Please enter your desired QP problem size bellow" << std :: endl;
    std :: cout << "QP size: ";
    std :: cin >> n;
    MatrixXd H, c, x, d, I;
    H.setRandom(n,n);
    I = MatrixXd :: Identity(n,n);
    H = 0.5 * (H + H.transpose());
    H = H.transpose()  *  H ;
    H = H + I;
    c.setRandom(n, 1);
    d.setRandom(1,1);

    x.setRandom(n,1);
    QuadFunc f{H, c, d};
//    std :: cout << f.eigen_values().real()<< std :: endl;
    Problem p{f};
    p.solve();




    return 0;
}
