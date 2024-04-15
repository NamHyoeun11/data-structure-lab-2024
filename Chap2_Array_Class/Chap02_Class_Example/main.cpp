#include <cstdio>
//#include "Car.h"
//#include "SportsCar.h"
#include "Rectangle.h"
#include "SmartHome.h"
#include "Music.h"
using namespace std;

void main() {
	/*
	//Car 클래스 사용
	Car myCar(50, "K3", 4);
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();

	//SportsCar 클래스 사용
	SportsCar scar;
	scar.speedUp();

}

void main() {
	Rectangle r(10, 20);
	double perimeter=r.getPerimeter();
	double area = r.getArea();
	std::cout << "Rectangle 1:" << std::endl;
	std::cout << "Area:" << r.getArea() << std::endl;
	cout << "Perimeter" << perimeter << endl;
	cout << "Is square?" << boolalpha << r.isSquare() << endl;
}

//SmartHome클래스


	SmartHome myHome("남효은", 23, 40, true);
	myHome.printStatus();
	*/
	
	MusicStreamingService myService("Spotify");
	myService.addMusic("VIBE", "TaeYang", "Album", 2023);
	myService.addMusic("Ditto", "NewJeans", "Album", 2023);
	myService.addMusic("Attention", "NewJeans", "Album", 2022);

	string music_title;
	cout << "Enterthe Music Title: ";
	cin >> music_title;

	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found: " << result->getTitle() << " by " << result->getArtist() << endl;
	}
	else {
		cout << "Not found" << endl;
	}

	string artist_name;
	cout << "Enter the Artist Name: ";
	cin >> artist_name;

	vector<Music*> artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
			for (int i = 0; i < artistResult.size(); i++) {
				cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "Not found" << endl;
	}

}