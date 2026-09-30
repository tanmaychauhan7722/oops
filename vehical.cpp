#include <iostream>
using namespace std;

class ServiceRecord {
    string serviceName;
    float serviceCost;

public:
    void read() {
        cout << "Enter Service Name: ";
        cin >> serviceName;

        cout << "Enter Service Cost: ";
        cin >> serviceCost;
    }

    void display() {
        cout << "Service: " << serviceName
             << " | Cost: " << serviceCost << endl;
    }

    float getCost() {
        return serviceCost;
    }
};

class Vehicle {
    string vehicleNumber;
    string ownerName;
    int serviceCount;

    ServiceRecord *services;

public:

    // Constructor
    Vehicle(int count) {
        serviceCount = count;

        services = new ServiceRecord[serviceCount];
    }

    void read() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        for (int i = 0; i < serviceCount; i++) {
            cout << "\nEnter Service " << i + 1 << endl;
            services[i].read();
        }
    }

    void display() {
        cout << "\n--- Vehicle Details ---\n";
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;

        cout << "\n--- Service Records ---\n";

        for (int i = 0; i < serviceCount; i++) {
            services[i].display();
        }
    }

    float totalBill() {
        float total = 0;

        for (int i = 0; i < serviceCount; i++) {
            total += services[i].getCost();
        }

        return total;
    }
    ~Vehicle() {
        delete[] services;
        cout << "\nService records memory released.";
    }
};

int main() {
    int n;

    cout << "Enter number of services: ";
    cin >> n;

    Vehicle *vehicle = new Vehicle(n);

    vehicle->read();

    vehicle->display();

    cout << "\nTotal Service Bill: "
         << vehicle->totalBill() << endl;

    delete vehicle;

    return 0;
}