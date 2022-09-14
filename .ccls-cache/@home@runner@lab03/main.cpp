#include <iostream>
#include<iomanip>
using namespace std;
int main()

{
	float radius,rectwidth,rectlength,squarelength,circlearea,rectarea,squarearea,totalarea,gardenarea,finalarea;
    cout << "enter the circle radius";
	cin >> radius;
	cout << "enter the rectangle width";
	cin >> rectwidth;
	cout << "enter the rectangle length";
	cin >> rectlength;
	cout << "enter the square length ";
	cin >> squarelength;
	circlearea = 22 / 7 * radius * radius;
	rectarea = rectlength * rectwidth;
	squarearea = squarelength * squarearea;
	cout << "circle area = " << setw(12) << setiosflags(ios::fixed) << setprecision(3)<<circlearea<<endl;
	cout << "Rectangle area = " << setw(12) << setiosflags(ios::fixed) << setprecision(3)<< rectarea<<endl;
	cout << "square area = " << setw(12) << setiosflags(ios::fixed) << setprecision(3)<< squarearea;
  totalarea = rectarea + squarearea + circlearea;
  gardenarea = 
  finalarea = gardenarea - totalarea;
  

}