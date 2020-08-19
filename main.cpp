#include <iostream>

#include "include/quadratic.h"

int main() {

    const int n = 2;
    MatrixXd H, c, x, d;
    H.setRandom(n,n);
    H = 0.5 * (H + H.transpose());
    H = H.transpose() * H;

    c.setRandom(n, 1);
    d.setRandom(1,1);

    x.setRandom(n,1);
    QuadFunc eli{H, c, d};
    std :: cout << eli.hessian(x) << std :: endl;
    return 0;
}
