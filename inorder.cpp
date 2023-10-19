#include <iostream>

int main() {
  std::cout << "Enter three integers: ";
  
    int integer1;
    int integer2;
    int integer3;
    
    std::cin >> integer1;
    std::cin >> integer2;
    std::cin >> integer3;
      
    if ((integer1 < integer2) && (integer2 < integer3)) {
      std::cout << "In order.";
    } else if ((integer1 > integer2) && (integer2 > integer3)) {
      std::cout << "In order.";
    } else {
      std::cout << "Not in order.";
    }
    

}      
	  
