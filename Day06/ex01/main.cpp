
#include <iostream>
#include "Data.hpp"
#include "serialization.hpp"

int	main(void)
{
	Data		someRandomData("1337", 500, 5);
	Data		*data = &someRandomData;
	uintptr_t	raw;

	data->display();

	std::cout << std::endl;

	raw = serialize(data);
	data = deserialize(raw);

	data->display();

	return (0);
}
