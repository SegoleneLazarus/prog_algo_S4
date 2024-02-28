#include "boids_class.hpp"

double fonction_rand() {
        thread_local std::default_random_engine gen{std::random_device{}()};
        thread_local auto distrib =
            std::uniform_real_distribution<double>{0.0, 1.0};

        return distrib(gen);
};

struct Boids boids;

int pile_ou_face(float p) {
        double random = fonction_rand();
        return random > p ? 0 : 1;
};

float random_float(float max) {
    float random_float_max1_minm1;
    
    random_float_max1_minm1= fonction_rand()*max;
    if (pile_ou_face(0.5) == 0)
        return -random_float_max1_minm1;
    return random_float_max1_minm1;
};  


// INUTILE --------- calculer la distance entre 2 vecteurs ; v1 - v2 = distance

float distanceVect(const glm::vec2& v1, const glm::vec2& v2) {
    glm::vec2 v3 = v2 - v1;
    float distance = sqrt((v3.x*v3.x + v3.y*v3.y));

    return distance;
}