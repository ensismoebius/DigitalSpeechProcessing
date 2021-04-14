#include <string>
#include "lib/wave/Wav.cpp"
#include "lib/wave/simpleSignalOperations.h"

int main(int argc, char *args[])
{
	Wav w;
	w.setCallbackFunction(reverseSignal);
	w.read("/tmp/inputWavFile.wav");
	w.process();
	w.write("/tmp/outputWavFile.wav");
	return 0;
}
