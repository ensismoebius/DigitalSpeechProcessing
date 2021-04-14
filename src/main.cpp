#include <string>
#include "lib/wave/Wav.cpp"
#include "lib/wave/simpleSignalOperations.h"

int main(int argc, char *args[])
{
	// set the callback function in the Experiment01 class
	Wav w;
	w.setCallbackFunction(reverseSignal);
	w.read("pathToFile");
	w.process();
	w.write("pathToResult");
	return 0;
}
