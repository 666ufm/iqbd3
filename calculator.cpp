#include <iostream>
#include <cmath>


using namespace std;

int main() 
{
const double pi = 3.14; // circle O
double radius ; // circle O 
double size ; // square []
double base ; // triangle <|
double height ; // triangle <|
double hypotenuse ; // triangle <|
double lentgh ; // rectangle [  ]
double width ; // rectangle [  ]

double total = 0.0;

int choice ;
int circlechoice ; // circle O
int squarechoice ; // square []
int trianglechoice ; // triangle <|
int rectanglechoice ; // rectangle [  ]

double CircleArea = pi * pow(radius,2) ; // circle O
double PerimeterCircle = pi * radius * 2 ; // circle O
double SquareArea = pow(size,2) ; // square []
double PerimeterSquare = size * 4 ; // square []
double TriangelaArea = base * height * 0.5  ; // triangle <|
double PerimeterTriangle = base + height + hypotenuse ; // triangle <|
double RectangleArea = lentgh * width ; // rectangle [  ]
double PerimeterRectangle = 2 * (base + height) ; // rectangle [  ]

bool run = true ;
bool run1 = true ;

while (run) 
{
     cout << "---------Calculator List---------" << endl ;
     cout << "1 Circle List " << endl ;
     cout << "2 Square List " << endl ;
     cout << "3 Triangel List " << endl ;
     cout << "4 Rectangle List " << endl ;
     cout << "5 Total " << endl ;
     cout << "6 Clear Total " << endl ;
     cout << "0 Exit " << endl ;
     cout << "--Enter The Number You Want To Calculate--" << endl ;
     cin >> choice ;

switch (choice)
{
      while (run1)
      {

         case 1:
            cout << "---------Circle List---------" << endl ;
            cout << "1 Circle Area " << endl ;
            cout << "2 Perimeter " << endl ;
            cout << "0 Return " << endl ;
            cin >> circlechoice ;
            
                  switch (circlechoice)
                  {
                   case 1:
                         cout << "Enter The Radius" << endl ;
                         cin >> radius ;
                         CircleArea = pi * pow(radius,2) ;
                         total = total + CircleArea ;
                         cout << "The Area Of The Circle = " << CircleArea << endl ;
                   break;
                   case 2:
                         cout << "Enter The Radius" << endl ;
                         cin >> radius ;
                         PerimeterCircle = pi * radius * 2 ;
                         total = total + PerimeterCircle ;
                         cout << "Perimeter Of The Circle = " << PerimeterCircle << endl ;
                   break; 
                   case 0 :
                         cout << "Make Sure Next Time" << endl ;
                         run1 = false ;
                   break; 
                   default:
                         cout << "there is no action fo this number" << endl ;
                   break;
         } 
      }
         break;
      while (run1)
      {

         case 2:
            cout << "---------Square List---------" << endl ;
            cout << "1 Square Area " << endl ;
            cout << "2 Perimeter " << endl ;
            cout << "0 Return " << endl ;
            cin >> squarechoice ;
            
                  switch (squarechoice)
                  {
                   case 1:
                         cout << "Enter The Size" << endl ;
                         cin >> size ;
                         SquareArea = pow(size,2) ;
                         total = total + SquareArea ;
                         cout << "The Area Of The Square = " << SquareArea << endl ;
                   break;
                   case 2:
                         cout << "Enter The Size" << endl ;
                         cin >> size ;
                         PerimeterSquare = size * 4 ;
                         total = total + PerimeterSquare ;
                         cout << "Perimeter Of The Square = " << PerimeterSquare << endl ;
                   break; 
                   case 0 :
                         cout << "Make Sure Next Time" << endl ;
                         run1 = false ;
                   break; 
                   default:
                         cout << "there is no action fo this number" << endl ;
                   break;
         } 
      }
         break;
      while (run1)
      {

         case 3:
            cout << "---------Triangle List---------" << endl ;
            cout << "1 Triangle Area " << endl ;
            cout << "2 Perimeter " << endl ;
            cout << "0 Return " << endl ;
            cin >> trianglechoice ;
            
                  switch (trianglechoice)
                  {
                   case 1:
                         cout << "Enter The Base & Height" << endl ;
                         cin >> base >> height ;
                         TriangelaArea = 0.5 * base * height ;
                         total = total + TriangelaArea ;
                         cout << "The Area Of The Triangle = " << TriangelaArea << endl ;

                   break;
                   case 2:
                         cout << "Enter The Base & Height & Hypotenuse " << endl ;
                         cin >> base >> height >> hypotenuse ;
                         PerimeterTriangle = base + height + hypotenuse ;
                         total = total + PerimeterTriangle ;
                         cout << "Perimeter Of The Triangle = " << PerimeterTriangle << endl ;
                   break; 
                   case 0 :
                         cout << "Make Sure Next Time" << endl ;
                         run1 = false ;
                   break; 
                   default:
                         cout << "there is no action fo this number" << endl ;
                   break;
         } 
      }
         break;
      while (run1)
      {

         case 4:
            cout << "---------Rectangle List---------" << endl ;
            cout << "1 Rectangle Area " << endl ;
            cout << "2 Perimeter " << endl ;
            cout << "0 Return " << endl ;
            cin >> rectanglechoice ;
            
                  switch (rectanglechoice)
                  {
                   case 1:
                         cout << "Enter The Lentgh & Width" << endl ;
                         cin >> lentgh >> width ;
                         RectangleArea = lentgh * width ;
                         total = total + RectangleArea ;
                         cout << "The Area Of The Rectangle = " << RectangleArea << endl ;

                   break;
                   case 2:
                         cout << "Enter The Lentgh & Width" << endl ;
                         cin >> lentgh >> width ;
                         PerimeterRectangle = lentgh * width * 2 ;
                         total = total + PerimeterRectangle ;
                         cout << "Perimeter Of The Rectangle = " << PerimeterRectangle << endl ;

                   break; 
                   case 0 :
                         cout << "Make Sure Next Time" << endl ;
                         run1 = false ;
                   break; 
                   default:
                         cout << "there is no action fo this number" << endl ;
                   break;
         } 
      }
         break;
         case 5:
             cout <<"Total: "<< total << endl ;
         break;
         case 6:       
             total = 0.0 ;
             cout << "Total Is Clear" << endl ;
         break;
         case 0:
             cout << "GoodBye , User" << endl ;
             run = false ;
         break;
    
        default:
             cout << "there is no action fo this number" << endl ;
         break;

}
}

 return 0;
}