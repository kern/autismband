#include "./vendor/test.h"

// Create test suite
TestSuite suite;

void setup() {
}

// Create a test called 'addition' in the test suite
test(addition) {
  assertEquals(3, 1 + 2);
}

void loop() {
  // Run test suite, printing results to the serial port
  suite.run();
}
