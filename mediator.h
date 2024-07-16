#pragma once
#include <vector>
#include "abstractColleague.h"

class abstractColleague;
class Mediator
{
public:
	void notify(int message);
	int  enroll(int enrollee);
	int  unenroll(int enrollee);

protected:
	std::vector<abstractColleague*> colleagues;

};
