#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include "target.h"
#include "windows.h"

using namespace std;

int main(int argc, char *argv[])
{
    ofstream file("scenarios_100.tln");
    if(!file){
        cout << "Файл не открыт\n\n";
        return -1;
    }
    const int countTargets = 100;

    float time = 0;
    float deltaTime = 0.3;

    target targets[countTargets];
    for (int i = 0; i < countTargets; i++){
        targets[i].initTarget();
        int x = 1000;
        Sleep(x);
    }
    float velocity_y, velocity_x;
    unsigned int iterations = 1000;
    for(unsigned int i = 0; i < iterations; i++){
        time += deltaTime;
        for(int j = 0; j < countTargets; j++){
            velocity_y = targets[j].getVelocity() * cos(targets[j].getCourse());
            velocity_x = targets[j].getVelocity() * sin(targets[j].getCourse());
            targets[j].setX(targets[j].getX() + velocity_x * deltaTime);
            targets[j].setY(targets[j].getY() + velocity_y * deltaTime);
            targets[j].setAzimuth(atan(targets[j].getX()/targets[j].getY()));
            file << j + 1 << "\t" << time << "\t" << targets[j].getX()  << "\t" << targets[j].getY() << "\t" << targets[j].getVelocity() * cos(targets[j].getCourse() - targets[j].getAzimuth())
                 << "\t" << targets[j].getCourse() << "\t" << targets[j].getAzimuth() << "\t0.0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"<< "\n";
        }
    }

    file.close();
    cout << "End." << endl;
    return 0;
}
