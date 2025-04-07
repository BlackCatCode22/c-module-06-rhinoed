#include "Hyena.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

namespace animal {
    Hyena::Hyena(const std::string &id,const std::string &name, int age, int weight, const std::string &species, const std::string &origin, const std::string &birthSeason, const std::string &color) : Animal(id,name, age, weight, "Hyena", origin, birthSeason, color) {}

    void Hyena::laugh() {
        std::cout << name << ", the hyena says Hahaha" << std::endl;
    }

    std::string Hyena::generateName() {
        static bool seeded = false;
        if (!seeded) {
            srand(static_cast<unsigned int>(time(nullptr)));
            seeded = true;
        }
        int randomIndex = rand() % 11;
        if (Animal::animalNames.size() > 1 && Animal::animalNames[0].size() >= randomIndex) {
            return Animal::animalNames[0][randomIndex];
        } else {
            return "Hyena Name";
        }
    }
} // animal