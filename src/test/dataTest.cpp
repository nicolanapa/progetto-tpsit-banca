#pragma once
#include "../scripts/Data.h"

void dataTest() {
	Data x(23, 11);

	x.getTime();

	x.avanzamento(365, 0, 0);

	x.getTime();

	x.avanzamento(5, 2, 0);

	x.getTime();

	x.avanzamento(33, 0, 1);

	x.getTime();

	x.avanzamento(45, 0, 0);

	x.getTime();

	x.avanzamento(0, 20, 0);

	x.getTime();

	x.avanzamento(152, 2, 0);

	x.getTime();
}