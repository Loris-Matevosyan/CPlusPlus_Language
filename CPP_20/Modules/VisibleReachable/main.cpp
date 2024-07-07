import <iostream>;
import math;


int main()
{

    // math::Point point(10, 20);     // Can't create directly, not visible

    auto point = math::createPoint(10, 30);     // Can create indirectly, is reachable

    std::cout << "Point x: " << point.getX() << std::endl;
    std::cout << "Point y: " << point.getY() << std::endl;

    return 0;
}