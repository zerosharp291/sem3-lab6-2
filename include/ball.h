#pragma once

#include <iostream>
#include <cmath>

using namespace std;

// virtual class Ball
class Ball
{
protected:
    double braking_distance;
    double s_speed; // start speed
    double mass;    // weight of the ball
    double rubber_density = 1200;
    double i_radius; // inner radius of the ball

public:
    Ball(double _s_speed);
    virtual void calculate_mass() = 0;
    virtual void calculate_braking_distance() = 0;
    void calculate_i_radius(double _o_radius, double _w_thinkness);
    void get_braking_distance();
};

// Valleyball case for virtual Ball
class VolleyballBall : public Ball
{
    const double friction_force = 0.05;
    double o_radius = 0.15;
    double w_thinkness = 0.0025;

    void calculate_mass() override;
    void calculate_braking_distance() override;

public:
    VolleyballBall(double _s_speed);
};

// Football case for virtual Ball
class FootballBall : public Ball
{
    const double friction_force = 0.1;
    double o_radius = 0.1;
    double w_thinkness = 0.005;

    void calculate_mass() override;
    void calculate_braking_distance() override;

public:
    FootballBall(double _s_speed);
};

// Tennis case for virtual Ball
class TennisballBall : public Ball
{
    const double friction_force = 0.07;
    double radius = 0.03;

    void calculate_mass() override;
    void calculate_braking_distance() override;

public:
    TennisballBall(double _s_speed);
};