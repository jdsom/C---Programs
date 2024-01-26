#include <iostream>

class Point{

    private:
        double m_x;
        double m_y;
        double m_z;
        static int count;

    public:

        Point(double x=0.0, double y=0.0, double z=0.0)
            :m_x{x}, m_y{y}, m_z{z}{
                count++;
            }

        friend std::ostream& operator<<(std::ostream& out, const Point& point);
        friend std::istream& operator>>(std::istream& in, Point& point);

        static int getCount(){return count;}
        
};

std::ostream& operator<<(std::ostream& out, const Point& point){
    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
    return out;
    }
std::istream& operator>>(std::istream& in, Point& point){
    in >> point.m_x;
    in >> point.m_y;
    in >> point.m_z;
    
    return in;
    }

int Point::count = 0;

int main(){

    Point p1(1.0, 2.3, 421.01);
    Point p2(33.0, 213.2313, 41231.0123);
    Point p3;

    std::cout << "Enter values for p3: ";
    std::cin >> p3;

    std::cout << p1 << std::endl << p2 << std::endl << p3 << std::endl;
    std::cout << "Number of points: " << Point::getCount() << std::endl;
}