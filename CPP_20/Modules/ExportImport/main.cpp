import <iostream>;
import line;


int main() 
{

    Point begin(10, 20);
    Point end(110, 120);

    Line(begin, end);

    std::cout << "Beginning point with x: " << begin.getX() << "  y: " << begin.getX() << std::endl;
    std::cout << "Ending point with x: " << end.getX() << "  y: " << begin.getX() << std::endl;


    return 0;
}