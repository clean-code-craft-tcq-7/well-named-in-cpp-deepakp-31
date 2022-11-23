#include "TelCoColorCoder.hpp"

const char *MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char *MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

TelCoColorCoder::MajorColor TelCoColorCoder::ColorPair::getMajor()
{
    return majorColor;
}
TelCoColorCoder::MinorColor TelCoColorCoder::ColorPair::getMinor()
{
    return minorColor;
}
std::string TelCoColorCoder::ColorPair::ToString()
{
    std::string colorPairStr = MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[minorColor];
    return colorPairStr;
}

TelCoColorCoder::ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber)
{
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor =
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return TelCoColorCoder::ColorPair(majorColor, minorColor);
}
int TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor)
{
    return major * numberOfMinorColors + minor + 1;
}

void TelCoColorCoder::printWiringManual()
{
    for (int pairNum = 1; pairNum < 26; pairNum++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNum);
        std::cout << "Colour pair: " << colorPair.ToString() << "Pair Number: " << pairNum;
    }
}
