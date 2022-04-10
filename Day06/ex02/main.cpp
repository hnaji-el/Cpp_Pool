
#include "Classes.hpp"
#include "generateIdentify.hpp"

int	main(void)
{
	Base*	basePtr;

	basePtr = generate();

	Base&	baseRef = *basePtr;

	identify(basePtr);
	identify(baseRef);

	delete basePtr;

	return (0);
}
