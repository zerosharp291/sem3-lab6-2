#include <iostream>
#include "../include/ball.h"

using namespace std;

int main()

{
    Ball **balls = new Ball *[3];

    balls[0] = new VolleyballBall(10);
    balls[1] = new FootballBall(10);
    balls[2] = new TennisballBall(10);

    for (int i = 0; i < 3; i++)
    {
        balls[i]->calculate_mass();
        balls[i]->calculate_braking_distance();
        balls[i]->get_braking_distance();
    }
    for (int i = 0; i < 3; i++)
    {
        delete balls[i];
    }

    delete[] balls;
    return 0;
}