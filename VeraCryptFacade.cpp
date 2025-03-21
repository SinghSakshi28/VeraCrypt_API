// VeraCryptFacade.cpp
#include "VeraCryptFacade.h"
#include <cstdlib>

void VeraCryptFacade::displayVersion() {
    executeCommand("--version");
}

void VeraCryptFacade::createVolume() {
    executeCommand("-c");
}

void VeraCryptFacade::mountVolume() {
    executeCommand("--mount");
}

void VeraCryptFacade::dismountVolume() {
    executeCommand("-d");
}

void VeraCryptFacade::listMountedVolumes() {
    executeCommand("-l");
}

void VeraCryptFacade::volumeProperties() {
    executeCommand("--volume-properties");
}

void VeraCryptFacade::executeCommand(const std::string& option) {
    std::string command = "/home/daksh/VeraCrypt/src/Main/veracrypt " + option;
    system(command.c_str());
}

