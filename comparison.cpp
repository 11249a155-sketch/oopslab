#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double l = 0, double w = 0, double h = 0) : length(l), width(w), height(h) {}
    double volume() const {
        return length * width * height;
    }
    bool operator==(const Box &b) const {
        return (length == b.length && width == b.width && height == b.height);
    }
    bool operator<(const Box &b) const {
        return this->volume() < b.volume();
    }
    void display() const {
        cout << "Box(" << length << ", " << width << ", " << height << ")";
    }
};

int main() {
    Box b1(2.0, 3.0, 4.0);
    Box b2(2.0, 3.0, 4.0);
    Box b3(1.0, 2.0, 3.0);
   cout << "Box 1: "; b1.display(); cout << endl;
    cout << "Box 2: "; b2.display(); cout << endl;
    cout << "Box 3: "; b3.display(); cout << endl ;
        cout << "Box 1 is equal to Box 2" << endl;
    else
        cout << "Box 1 is not equal to Box 2" << endl;

    if (b3 < b1)
        cout << "Box 3 is smaller than Box 1" << endl;
    else
        cout << "Box 3 is not smaller than Box 1" << endl;

    return 0;
}
