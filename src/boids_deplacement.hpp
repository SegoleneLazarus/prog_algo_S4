#pragma once
#include "boids_class.hpp"
#include <cmath>
#include <vector>


void boids_deplacement(std::vector<Boids> &boids_tab, int nombre_boids);

Boids limites(Boids boidy);