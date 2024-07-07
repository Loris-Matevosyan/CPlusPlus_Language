module;

export module math;


namespace math
{
    class Point
    {
        int m_x;
        int m_y;

    public:

        Point (int x, int y)
            : m_x(x), m_y(y)
        {
            // Empty
        }

        int getX()
        {
            return m_x;
        }

        int getY()
        {
            return m_y;
        }
    };
}

namespace math
{   
    export Point createPoint(int x, int y)
    {
        return Point(x, y);
    }
}