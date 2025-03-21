// Main.cpp

#include <iostream>
#include "VeraCryptFacade.h"

int main() {
    VeraCryptFacade veracrypt;

    bool continueExecution = true;

    while (continueExecution) {
        std::cout << "Choose a command to perform:\n";
        std::cout << "1. Display Version\n";
        std::cout << "2. Create Volume\n";
        std::cout << "3. Mount Volume\n";
        std::cout << "4. Dismount Volume\n";
        std::cout << "5. List Mounted Volumes\n";
        std::cout << "6. Volume Properties\n";
        std::cout << "7. Exit\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                veracrypt.displayVersion();
                break;
            case 2:
                veracrypt.createVolume();
                break;
            case 3:
                veracrypt.mountVolume();
                break;
            case 4:
                veracrypt.dismountVolume();
                break;
            case 5:
                veracrypt.listMountedVolumes();
                break;
            case 6:
                veracrypt.volumeProperties();
                break;
            case 7:
                continueExecution = false;
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}

