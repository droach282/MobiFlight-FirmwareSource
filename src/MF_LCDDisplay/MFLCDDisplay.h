//
// MFLCDDisplay.h
//
// (C) MobiFlight Project 2022
//

#pragma once

#include <Arduino.h>
#include <Adafruit_LiquidCrystal.h>

class MFLCDDisplay
{
public:
    MFLCDDisplay();
    void display(const char *string);
    void attach(byte address, byte cols, byte lines);
    void detach();
    void test();
    void powerSavingMode(bool state);

private:
    Adafruit_LiquidCrystal _lcdDisplay = Adafruit_LiquidCrystal(0);
    bool              _initialized;
    byte              _address;
    byte              _cols;
    byte              _lines;

    void              _printCentered(const char *str, uint8_t line);
};

// MFLCDDisplay.h