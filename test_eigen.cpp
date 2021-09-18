/*
  Copyright (c) 2021 Kouhei Ito 
*/

#include <stdio.h>
#include <iostream>
#include "pico/stdlib.h"
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main() {
  char dummy;
  short i;
  stdio_init_all();

  for(i=0; i<30;i++){
    printf("Please wait for %d second.\n",30-i);
    sleep_ms(1000);
  }
  printf("Let's start calculation.\n\n");

  i=0;
  while (1){
    tight_loop_contents();
    printf("Hit return key! %d\n",i++);
    scanf("%c",&dummy);

    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
  }
}
