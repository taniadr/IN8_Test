#include <iostream>
using namespace std;

class Caixa{
    private:
        int x ;
        int y ;
        int z;

    public:
        Caixa(int x1, int y1, int z1) {
            x = x1;
            y = y1;
            z = z1;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        int getZ(){
            return z;
        }
        void setX(int x2){
            x = x2;
        }
         void setY(int y2){
            y = y2;
        }
        void setZ(int z2){
            z =z2;
        }

        int volume(){
            return x*y*z;
        }
};

int main(void)
{
    Caixa c(10,20,30);
    cout << "Computing the volume of the box:  " <<c.volume() << " m^3"<<endl;
    c.setX(20);
    cout<<"New Volume: "<<c.volume()<< " m^3"<<endl;
    return 0;
}
