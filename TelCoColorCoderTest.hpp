#ifndef TEL_COCOLOR_CODER_TEST_HPP
#define TEL_COCOLOR_CODER_TEST_HPP

#include "TelCoColorCoder.hpp"

void testNumberToPaircheck(int pairNumber,
                      TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumbercheck(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);

#endif
