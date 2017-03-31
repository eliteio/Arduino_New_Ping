// Example usage for New_Ping library by Tim Eckel.

#include "New_Ping.h"

// Initialize objects from the lib
New_Ping new_Ping;

void setup() {
    // Call functions on initialized library objects that require hardware
    new_Ping.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    new_Ping.process();
}
