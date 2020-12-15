#include <iostream>
#include <cmath>

using namespace std;

float deg2rad(float input){
    float radian;
    radian = (input * M_PI) / 180;
    return radian;
}

float rad2deg(float input){
    float deg;
    deg = (input * 180) / M_PI;
    return deg;
}

float findXComponent(float LA,float LB,float radA,float radB){
    float x;
    x = (LA * cos(radA))+(LB * cos(radB));
    return x;
}

float findYComponent(float LA,float LB,float radA,float radB){
    float y;
    y = (LA * sin(radA))+(LB * sin(radB));
    return y;
}

float pythagoras(float A,float B){
  float ans;
  ans = pow((pow(A,2) + pow(B,2)),0.5);
  return ans;
}

void showResult(float a,float b){
  cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
  cout << "Length of the resultant vector = " << a << "\n";
  cout << "Direction of the resultant vector (deg) = " << b << "\n";
  cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
