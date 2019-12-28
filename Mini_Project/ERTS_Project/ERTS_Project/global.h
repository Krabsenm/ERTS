#pragma once

enum events
{
	initialized,
	restart,
	stop,
	corner,
	pass,
	edge
};



enum state
{
	initialize,
	passthrough,
	edgedetection,
	cornerdetection,
	stopped
};
