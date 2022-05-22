class Rectangle {
    public: 
        int w, h;
       void display() {
           cout << w << " " << h << "\n";
       }
};
class RectangleArea :public Rectangle{
    public:
        void read_input() {
            cin >> w >> h;
        }
        void display() {
            cout << w * h << "\n";
        }
};


