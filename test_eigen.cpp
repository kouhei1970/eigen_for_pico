/**
 Copyright (c) 2021 Kouhei Ito 
*/

#include <stdio.h>
#include <iostream>
#include "pico/stdlib.h"
#include <Eigen/Dense>

using Eigen::MatrixXd;
                
int main() {
    stdio_init_all();

    while (1){
        tight_loop_contents();
        MatrixXd m(2,2);
        m(0,0) = 3;
        m(1,0) = 2.5;
        m(0,1) = -1;
        m(1,1) = m(1,0) + m(0,1);
        std::cout << m << std::endl;       
        printf("Hello!\n");
    }
}

/// \end:uart_advanced[]
