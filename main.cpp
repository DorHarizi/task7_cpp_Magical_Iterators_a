#include "sources/MagicalContainer.hpp"

using namespace ariel;
using namespace std;

int main() {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);
    container.addElement(6);
    MagicalContainer::PrimeIterator it(container);
    *it; //10
    ++it;//40
    ++it;//20
    ++it;//30
    ++it;//end()
}
