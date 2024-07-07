module;

export module line;

export import point;

export class Line
{
    Point m_begin;
    Point m_end;

public:

    Line (Point begin, Point end)
        : m_begin(begin), m_end(end)
    {
        // Empty
    }
    
    Point getBegin()
    {
        return m_begin;
    }

    Point getEnd()
    {
        return m_end;
    }
};

