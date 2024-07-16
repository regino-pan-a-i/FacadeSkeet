#include "mediator.h"

void Mediator::notify(int message)
{ 
	for (auto colleague : colleagues)
	{
		colleague->notify(message);
	}
}
	