// VeraCryptFacade.h
#ifndef VERACRYPT_FACADE_H
#define VERACRYPT_FACADE_H

#include <string>

class VeraCryptFacade {
public:
    void displayVersion();
    void createVolume();
    void mountVolume();
    void dismountVolume();
    void listMountedVolumes();
    void volumeProperties();

private:
    void executeCommand(const std::string& option);
};

#endif

