#ifndef TelCoColorCoder_HPP
#define TelCoColorCoder_HPP

#include <iostream>
#include <assert.h>

namespace TelCoColorCoder
{
  class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
    
            MajorColor getMajor() ;
            MinorColor getMinor() ;
            std::string ToString() ;
    };
  
  ColorPair GetColorFromPairNumber(int pairNumber) ;
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) ;
  
}

#endif 
