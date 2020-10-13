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

   std::cout  << "Size: " << dv.size() << std::endl;
   dv.put(12.1);
   dv.put(13.1);
   dv.put(14.1);
   std::cout << "Size: " << dv.size() << " [3]" << std::endl;

   std::cout << "Before any changes" << std::endl;
   for(int i=0; i < dv.size(); i++) {
       std::cout << dv.get(i) << std::endl;
   }

   dv.put(13.5, 1);
   std::cout << "After putting 13.5 at index 1" << std::endl;
   for(int i=0; i < dv.size(); i++) {
       std::cout << dv.get(i) << std::endl;
   }
   dv.put(18.5, 5);
   std::cout << "After putting 18.5 at index 5" << std::endl;
   for(int i=0; i < dv.size(); i++) {
       std::cout << dv.get(i) << std::endl;
   }
   dv.put(12.5, -1);
   std::cout << "After putting 12.5 at index -1" << std::endl;
   for(int i=0; i < dv.size(); i++) {
       std::cout << dv.get(i) << std::endl;
   }

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;
    std::cout  << "Size: " << iv.size() << std::endl;
    iv.put(65);
    iv.put(66);
    iv.put(67);
    std::cout << "Size: " << iv.size() << " [3]" << std::endl;

    std::cout << "Before any changes" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }

    iv.put(68, 2);
    std::cout << "After putting 68 at index 2" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }
    iv.put(69, 10);
    std::cout << "After putting 69 at index 10" << std::endl;
    for(int i=0; i < iv.size(); i++) {
        std::cout << iv.get(i) << std::endl;
    }
    iv.put(70, -1);
    std::cout << "After putting 70 at index -1" << std::endl;
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

   dv2.appendIntegerVector(iv);
   for(int i = 0; i < dv2.size(); i++)
      std::cout << dv2.get(i) << std::endl;

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
