// classes example
#include <iostream>
using namespace std;
// class CRectangle {
//     int x, y;
//   public:
//     void set_values (int a,int b)
//         {
//     x = a;
//     y = b;
//         }
//     int area (void)
// 	  {
// 	  return (x*y);
// 	  }
// };

// int main () {
//   CRectangle rect;
//   rect.set_values (3,4);
//   cout << "area: " << rect.area();
//   return 0;
// }

class rectangle{
    int a, b;
    public:
    void value(int x, int y){
        a = x;
        b = y;
    }
    int area(){
        return(a*b);
    }
};
main(){
    rectangle rec;
    rec.value(5,6);
    cout<<"The area is: "<<rec.area();
    return 0;
}