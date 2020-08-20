#include <iostream>

#include "include/quadratic.h"
#include "include/problem.h"
int main() {

    const int n = 10;
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
