#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Car {
    public:
        int year;
        string make;
        string model;

        Car() {
            year = NULL;
            make = "";
            model = "";
        }

        Car(int a, string b, string c) {
            year = a;
            make = b;
            model = c;
        }

        int getYear() {
            return year;
        }
        string getMake() {
            return make;
        }
        string getModel() {
            return model;
        }

        void setYear(int newYear) {
            year = newYear;
        }
        void setMake(string newMake) {
            make = newMake;
        }
        void setModel(string newModel) {
            model = newModel;
        }
};

ostream& operator << (ostream &os, Car car) {
    return (os << car.getYear() << " " << car.getMake() << " " << car.getModel());
}

template <typename AnyType>
class Comparator {
    public:
        virtual int compare(AnyType x, AnyType y) = 0;
};

// template <typename AnyType>
class carYearComparator: public Comparator<Car> {
    public:
        carYearComparator() {};

        int compare(Car car1, Car car2) {
            if (car1.getYear() < car2.getYear()) {
                return -1;
            } else if (car1.getYear() > car2.getYear()) {
                return 1;
            } else {
                return 0;
            }
        }
};

class carReverseYearComparator: public Comparator<Car> {
    public:
        carReverseYearComparator() {};

        int compare(Car car1, Car car2) {
            if (car1.getYear() < car2.getYear()) {
                return 1;
            } else if (car1.getYear() > car2.getYear()) {
                return -1;
            } else {
                return 0;
            }
        }
};

template <typename AnyType>
vector<AnyType*> sort(vector<AnyType*> vect, Comparator<AnyType>* cmp) {
    int length = vect.size();

    for (int i = 0; i < length; i++) {
        int min = i;
        for (int n = i + 1; n < length; n++) {
            // type from vector is car ptr
            if (cmp->compare(*vect.at(n), *vect.at(min)) < 0) {
                min = n;
            }
        }

        AnyType* temp = vect.at(i);
        vect[i] = vect.at(min);
        vect[min] = temp;
    }
    return vect;
}

void main () {
    Car volvo(2013, "Volvo", "S60");
    Car bmw(2022, "BMW", "M5");
    Car ford(1930, "Ford", "Model A");
    Car toyota(2004, "Toyota", "Tacoma");
    Car cars[4] = {volvo, bmw, ford, toyota};

    Car* volvo2 = new Car(2013, "Volvo", "S60");
    Car* bmw2 = new Car(2022, "BMW", "M5");
    Car* ford2 = new Car(1930, "Ford", "Model A");
    Car* toyota2 = new Car(2004, "Toyota", "Tacoma");
    vector<Car> carVector{volvo, bmw, ford, toyota};
    vector<Car*> carVector2{volvo2, bmw2, ford2, toyota2};
    vector<Car*>* carPtrVector = new vector<Car*>{volvo2, bmw2, ford2, toyota2};

    // create int vector
    vector<int>* intVector = new vector<int>{1, 2};
    cout << "int: " << intVector->at(0) << "\n";

    // print cars from pointer vector
    cout << "vector of cars\n";
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ") ";
        cout << "ptr: " << carPtrVector->at(i) << ", obj: ";
        cout << *carPtrVector->at(i) << "\n";
    }

    // insertion sort
    carYearComparator* yearCmp = new carYearComparator;
    carReverseYearComparator* revYearCmp = new carReverseYearComparator;
    vector<Car*> carYearVector = sort(*carPtrVector, yearCmp);
    vector<Car*> carRevYearVector = sort(*carPtrVector, revYearCmp);
    
    cout << "cars sorted by year\n";
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ") ";
        cout << "ptr: " << carYearVector.at(i) << ", obj: ";
        cout << *carYearVector.at(i) << "\n";
    }

    cout << "cars sorted by year descending\n";
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ") ";
        cout << "ptr: " << carRevYearVector.at(i) << ", obj: ";
        cout << *carRevYearVector.at(i) << "\n";
    }
};