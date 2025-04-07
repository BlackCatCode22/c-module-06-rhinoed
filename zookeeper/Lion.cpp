#include "Lion.h"
#include "Animal.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

namespace animal {
    Lion::Lion(const std::string &id,const std::string &name, int age, int weight, const std::string &species, const std::string &origin, const std::string &birthSeason, const std::string &color) : Animal(id,name, age, weight, "Lion", origin, birthSeason, color) {}

    void Lion::roar() {
        std::cout << name << ", the lion roars" << std::endl;
    }

    std::string Lion::generateName() {
        static bool seeded = false;
        if (!seeded) {
            srand(static_cast<unsigned int>(time(nullptr)));
            seeded = true;
        }
        int randomIndex = rand() % 12;
        if (Animal::animalNames.size() > 1 && Animal::animalNames[1].size() >= randomIndex) {
            return Animal::animalNames[1][randomIndex];
        } else {
            return "DefaultLionName";
        }
    }
} // animal