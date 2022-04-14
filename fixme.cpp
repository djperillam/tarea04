#include <iostream>

int main(int argc, char **argv)
{
  double x[10], y[5]; // LA: imprime raro
  //double y[5], x[10]; // LB: imprime 1

  for(int ii = 0; ii < 5; ++ii) {
    y[ii] = ii +1;
  }
  for(int ii = 0; ii < 10; ++ii) {
    x[ii] = -(ii +1);
  }

  double z = x[9]; //x[10] accedia a espacios de memoria fuera del rango defindo. 
  std::cout << z << std::endl;

  return 0;
}
