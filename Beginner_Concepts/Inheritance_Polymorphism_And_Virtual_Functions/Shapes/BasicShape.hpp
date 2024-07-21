#pragma once

class BasicShape
{
    // Attribute of a BasicShape.
    protected:
        double area;

    // Utility functions of the BasicShape abstract class.
    public:
        BasicShape(){};
        
        double getArea() const
        {
            return this->area;
        }

        virtual void calcArea() = 0;
};
