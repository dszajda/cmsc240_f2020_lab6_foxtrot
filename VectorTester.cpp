#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "Size: " << cv.size() << std::endl;
   cv.put('a');
   cv.put('b');
   cv.put('c');
   cv.put('d');
   std::cout << "Size: " << cv.size() << std::endl;
   for(int i = 0; i < cv.size(); i++)
      std::cout << cv.get(i) << std::endl;
   cv.put('z', 1);
   std::cout << "After putting z at index 1" << std::endl;
   for(int i = 0; i < cv.size(); i++)
      std::cout << cv.get(i) << std::endl;
   std::cout << "Size: " << cv.size() << std::endl;
   cv.put('y', 20);
   std::cout << "After putting y at index 20" << std::endl;
   for(int i = 0; i < cv.size(); i++)
      std::cout << cv.get(i) << std::endl;
   cv.put('x', -1);
   std::cout << "After putting x at index -1" << std::endl;
   for(int i = 0; i < cv.size(); i++)
      std::cout << cv.get(i) << std::endl;
   //---------------------------------------

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
