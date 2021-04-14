#include <cmath>
#include <string>
#include <vector>

void reverseSignal(std::vector<double> &signal, int &signalLength, unsigned int samplingRate, std::string path) {
	int middleSignalIndex = signalLength / 2;
	int tempVar;

	for (int i = middleSignalIndex; i < signalLength; ++i) {
		tempVar = signal[i];
		signal[i] = signal[signalLength - i - 1];
		signal[signalLength - i - 1] = tempVar;
	}
}
