#pragma once
#ifndef VOX_READER_H
#define VOX_READER_H

#include <string>
#include "I2DJpegSource.h" // Annahme: Header-Datei für DICOM-Bilddaten

class VoxReader {
public:
    VoxReader();
    ~VoxReader();

    void loadVoxFile(const std::string& filename);
    I2DJpegSource* extractImage();
};

#endif // VOX_READER_H
