import <iostream>;
import mathCalculations;


int main() 
{

    std::cout << "1 + 2 = " << math::add(1, 2) << std::endl;
    std::cout << "10 - 5 = " << math::subtract(10, 5) << std::endl;
    std::cout << "3 * 4 = " << math::multiply(3, 4) << std::endl;
    //std::cout << "20 / 4 = " << math::divide(20 / 4) << std::endl;    // Will not work, not exported


    return 0;
}