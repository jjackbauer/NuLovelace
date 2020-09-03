#ifndef LOVELACEREPRESENTATION_HPP_
#define LOVELACEREPRESENTATION_HPP_

#include <vector>
#include <string>
#include <iostream>
class lovelaceRepresentation
{
    private:
        std::vector<char> algarisms;
        long long int amountAlgarisms = 0;
        bool zero = true;
        char intsToBitwise(int a,int b);
        void bitwiseToInts(char bitwise, int &a, int &b);
        void setBitwise(long long int position, int a, int b);
        void getBitwise(long long int position, int &a, int &b);
    public:
        lovelaceRepresentation(lovelaceRepresentation &&toMove) = default;
        lovelaceRepresentation& operator=(lovelaceRepresentation &&toMove);
        lovelaceRepresentation(lovelaceRepresentation &toCopy) = default;
        lovelaceRepresentation& operator=(lovelaceRepresentation &toCopy);
        lovelaceRepresentation(int number=0);
        lovelaceRepresentation(std::string number);
        ~lovelaceRepresentation();
        void reset();
        void setDigit(long long int position, int value);
        int  getDigit(long long int position);
        bool getZero();
        void setZero(bool zero);
        lovelaceRepresentation&& copyAlgarisms(long long int initialPosition=0, long long int finalPosition=-1);
};


#endif /* LOVELACEREPRESENTATION_HPP_ */