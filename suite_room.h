#ifndef SUITE_ROOM_H
#define SUITE_ROOM_H

#include "room.h"

class suite_room : public room {
public:
	suite_room();
private:
	int num_beds;
	bool air_cond;
	bool mini_fridge;
	bool prem_view;
};

#endif
