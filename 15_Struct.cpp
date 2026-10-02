#include <iostream>
using namespace std;

struct WashingMachine
{
	char firm[30];
	char color[30];
	int width;
	int length;
	int height;
	int power;
	int spinSpeed;
	int heatingTemperature;
};

void ShowWorker(WashingMachine& wm)
{
	cout << "\nFirm : " << wm.firm << endl;
	cout << "Color : " << wm.color << endl;
	cout << "Width : " << wm.width << endl;
	cout << "Length : " << wm.length << endl;
	cout << "Height : " << wm.height << endl;
	cout << "Power : " << wm.power << endl;
	cout << "Spin Speed : " << wm.spinSpeed << endl;
	cout << "Heating Temperature : " << wm.heatingTemperature << endl;
}
WashingMachine Input(WashingMachine wm)
{
	cout << "Enter firm : "; cin >> wm.firm;
	cout << "Enter color : "; cin >> wm.color;
	cout << "Enter width : "; cin >> wm.width;
	cout << "Enter length : "; cin >> wm.length;
	cout << "Enter height : "; cin >> wm.height;
	cout << "Enter power : "; cin >> wm.power;
	cout << "Enter spin speed : "; cin >> wm.spinSpeed;
	cout << "Enter heating temperature : "; cin >> wm.heatingTemperature;
	return wm;
}

struct Iron
{
	char firm[30];
	char model[30];
	char color[30];
	int minTemperature;
	int maxTemperature;
	bool steam;
	int power;
};

void ShowWorker(Iron& iron)
{
	cout << "\nFirm : " << iron.firm << endl;
	cout << "Model : " << iron.model << endl;
	cout << "Color : " << iron.color << endl;
	cout << "Minimum Temperature : " << iron.minTemperature << endl;
	cout << "Maximum Temperature : " << iron.maxTemperature << endl;
	cout << "Steam : " << (iron.steam ? "Yes" : "No") << endl;
	cout << "Power : " << iron.power << endl;
}	

Iron Input(Iron iron)
{
	cout << "Enter firm : "; cin >> iron.firm;
	cout << "Enter model : "; cin >> iron.model;
	cout << "Enter color : "; cin >> iron.color;
	cout << "Enter minimum temperature : "; cin >> iron.minTemperature;
	cout << "Enter maximum temperature : "; cin >> iron.maxTemperature;
	cout << "Enter steam : "; cin >> iron.steam;
	cout << "Enter power : "; cin >> iron.power;
	return iron;
}

struct Boiler
{
	char firm[30];
	char color[30];
	int power;
	int volume;
	int heatingTemperature;
};
void ShowWorker(Boiler& boiler)
{
	cout << "\nFirm : " << boiler.firm << endl;
	cout << "Color : " << boiler.color << endl;
	cout << "Power : " << boiler.power << endl;
	cout << "Volume : " << boiler.volume << endl;
	cout << "Heating Temperature : " << boiler.heatingTemperature << endl;
}

Boiler Input(Boiler boiler)
{
	cout << "Enter firm : "; cin >> boiler.firm;
	cout << "Enter color : "; cin >> boiler.color;
	cout << "Enter power : "; cin >> boiler.power;
	cout << "Enter volume : "; cin >> boiler.volume;
	cout << "Enter heating temperature : "; cin >> boiler.heatingTemperature;
	return boiler;
}
int main()
{
	//1
	WashingMachine worker = { "Samsung", "White", 60, 55, 85, 2000, 1200, 90};
	ShowWorker(worker);
	cout << endl;
	WashingMachine read_worker{};
	read_worker = Input(read_worker);
	ShowWorker(read_worker);

	//2
	Iron iron = { "Philips", "GC5039", "Blue", 70, 230, true, 3000};
	ShowWorker(iron);
	cout << endl;
	Iron read_iron{};
	read_iron = Input(read_iron);
	ShowWorker(read_iron);

	//3
	Boiler boiler = { "Ariston", "White", 2000, 80, 75};
	ShowWorker(boiler);
	cout << endl;
	Boiler read_boiler{};
	read_boiler = Input(read_boiler);
	ShowWorker(read_boiler);
}