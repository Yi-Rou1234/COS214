#include <iostream>
#include "ship.h"
#include "cargoShip.h"
#include "cargoMemento.h"

int main() {
    // Create a CargoShip object
    CargoShip cargoShip("CargoShip1", 1, 100);
    cargoShip.addItem("Item1");
    cargoShip.addItem("Item2");
    // cargoShip.addItem("Item3");

    // Print the CargoShip details
    std::cout << "CargoShip details:\n";
    std::cout << cargoShip.toString() << std::endl;

    // Create a memento and save the CargoShip state
    CargoMemento memento = cargoShip.save(1);

    // Modify the CargoShip
    cargoShip.setCurrentLoad(80);
    cargoShip.deleteItem(1);

    // Print the modified CargoShip details
    std::cout << "Modified CargoShip details:\n";
    std::cout << cargoShip.toString() << std::endl;

    // Restore the CargoShip state from the memento
    cargoShip.restore(memento);

    // Print the restored CargoShip details
    std::cout << "Restored CargoShip details:\n";
    std::cout << cargoShip.toString() << std::endl;

    return 0;
}


// OUTPUT

// CargoShip details:
// Ship 1: CargoShip1
// Load: 0/100
// Items:
// item 1: Item1
// item 2: Item2
// item 3: Item3

// Modified CargoShip details:
// Ship 1: CargoShip1
// Load: 80/100
// Items:
// item 1: Item1
// item 2: Item3

// Restored CargoShip details:
// Ship 1: CargoShip1
// Load: 0/100
// Items:
// item 1: Item1
// item 2: Item2
// item 3: Item3