#include "../include/ball.h"

// -------- BALL -----------------

void Ball::calculate_i_radius(double _o_radius, double _w_thinkness)
{
    i_radius = _o_radius - _w_thinkness;
}

Ball::Ball(double _s_speed)
{
    s_speed = _s_speed;
}

void Ball::get_braking_distance()
{
    cout << braking_distance << endl;
}

// -------- VALLEYBALL BALL -----------

void VolleyballBall::calculate_mass()
{
    calculate_i_radius(o_radius, w_thinkness);
    mass = rubber_density * (4.0 / 3.0) * M_PI * pow(o_radius - i_radius, 3);
}

void VolleyballBall::calculate_braking_distance()
{
    calculate_mass();
    braking_distance = mass * pow(s_speed, 2) / (2 * friction_force);
}

VolleyballBall::VolleyballBall(double _s_speed) : Ball(_s_speed) {}

// -------- FOOTBALL BALL -----------

void FootballBall::calculate_mass()
{
    calculate_i_radius(o_radius, w_thinkness);
    mass = rubber_density * (4.0 / 3.0) * M_PI * pow(o_radius - i_radius, 3);
}

void FootballBall::calculate_braking_distance()
{
    calculate_mass();
    braking_distance = mass * pow(s_speed, 2) / (2 * friction_force);
}

FootballBall::FootballBall(double _s_speed) : Ball(_s_speed) {}

// ----------- TENNISBALL BALL ------------

void TennisballBall::calculate_mass()
{
    mass = rubber_density * (4.0 / 3.0) * M_PI * pow(radius, 3);
}

void TennisballBall::calculate_braking_distance()
{
    calculate_mass();
    braking_distance = mass * pow(s_speed, 2) / (2 * friction_force);
}

TennisballBall::TennisballBall(double _s_speed) : Ball(_s_speed) {}