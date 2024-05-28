#ifndef FAN_HPP
#define FAN_HPP

enum speed {SLOW=1, MEDIUM=2, FAST=3};

/**
 * The type Fan.
 */
class Fan
{	
	// Attributes of a Fan Object.
	public:
		bool on;
		double radius;
		speed fanSpeed;

	Fan();  // Un-parametrized constructor.
};

#endif /* FAN_H */
