/*  name: Shane Farnell
    date: sep 12 2019
    Program name:area calculator
    
    this program prompts user for length and width values and calculats and prints
    the area
  */
  #include<iostream>
  using namespace std;

  int main()
  {
    int area;
    int length;
    int width;

    cout << "this program calculates area of rectangle\n\n";
   // cout << "Please enter the width of the rectangle: ";
   // cin >> width;

   // cout << "Please enter the length of the rectangle: ";
   // cin >> length;
   cout << "Please enter width and length separated by space: ";
   cin >> width >> length;

    area = width*length;
    cout << "The calculated area is: " << area << ". \n";
    return 0;
  }
