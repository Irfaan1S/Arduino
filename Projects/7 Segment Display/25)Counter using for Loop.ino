#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define dp 9

// Array to hold pin numbers
const int segmentPins[] = {A, B, C, D, E, F, G, dp};

// Array to define each digit (0-9) for a common cathode 7-segment display
const bool digitPatterns[10][8] = {
    {1, 1, 1, 1, 1, 1, 0, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1, 0}, // 2
    {1, 1, 1, 1, 0, 0, 1, 0}, // 3
    {0, 1, 1, 0, 0, 1, 1, 0}, // 4
    {1, 0, 1, 1, 0, 1, 1, 0}, // 5
    {1, 0, 1, 1, 1, 1, 1, 0}, // 6
    {1, 1, 1, 0, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1, 0}, // 8
    {1, 1, 1, 1, 0, 1, 1, 0}  // 9
};

void setup()
{
    // Set all segment pins as output
    for (int i = 0; i < 8; i++)
    {
        pinMode(segmentPins[i], OUTPUT);
    }
}

void loop()
{
    // Loop through digits 0 to 9
    for (int digit = 0; digit < 10; digit++)
    {
        // Update segments based on the current digit pattern
        for (int segment = 0; segment < 8; segment++)
        {
            digitalWrite(segmentPins[segment], digitPatterns[digit][segment]);
        }
        
        delay(1000); // Wait 1 second before showing the next digit
    }
}
