#pragma once

/**
 * The type EvenNumber.
*/
class EvenNumber
{
    public:
        EvenNumber(int evenNumber);  // Parameterized constructor.
        int getValue();  // Prototype of the getValue function.
        int getNext();  // Prototype of the getNext function.
        int getPrevious();  // Prototype of the getPrevious function.
        
    private:
        // Value of an EvenNumber.
        int value;
};
