#include "codadapter.h"

namespace CODAdapter
{
	// Define MW3 Adapter
	Adapter* MW3 = new Adapter
	{
		L"MW3",
		L"iw5mp.exe",
		"42690",
		0xB0C738,
		0x1CF0B84
	};

	// Define MW2 Adapter
	Adapter* MW2 = new Adapter
	{
		L"MW2",
		L"iw4mp.exe",
		"10190",
		0xAAC278,
		0x1B907B0
	};

	std::vector<Adapter*>* Adapters = new std::vector<Adapter*>
	{
		MW3, MW2
	};
}
