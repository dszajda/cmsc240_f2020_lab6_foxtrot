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
    std::cout  << "Size: " << iv.size() << std::endl;
    iv.put(1);
    iv.put(2);
    iv.put(3);
    std::cout << "Size: " << iv.size() << " [3]" << std::endl;
    
    std::cout << "Before any changes" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }
    
    iv.put(4, 2);
    std::cout << "After putting 4 at index 2" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }
    iv.put(5, 10);
    std::cout << "After putting 5 at index 10" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }
    iv.put(6, -1);
    std::cout << "After putting 6 at index -1" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;
   cv2.appendIntegerVector(iv);
   for(int i = 0; i < cv2.size(); i++)
      std::cout << cv2.get(i) << std::endl;

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
    iv2.appendCharacterVector(cv);
    std::cout << "After appending cv" << std::endl;
    for(int i=0; i < iv2.size(); i++) {
        std::cout << iv2.get(i) << std::endl;
    }
    
    

   //-------------------------------------------------------------------------

   return 0;
}
