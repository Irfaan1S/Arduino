#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define dp 9

int ButtonState = 0;
int LastButtonState = 0;  // To store the previous state of the button
int Current_State = 0;  // Start at 0
int ButtonPressDelay = 200;  // Debounce delay for the button

const int SegmentPins[] = {A, B, C, D, E, F, G, dp};

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

void setup() {
    for (int i = 0; i < 8; i++) {
        pinMode(SegmentPins[i], OUTPUT);
    }
    pinMode(13, INPUT);  // Button pin
}

void loop() {
    ButtonState = digitalRead(13);

    // Detect a button press (ButtonState HIGH to LOW transition)
    if (ButtonState == HIGH && LastButtonState == LOW) {
        delay(ButtonPressDelay);  // Simple debounce
        Current_State++;  // Increment the state (digit to show)

        // Ensure the state wraps around after 9 (reset to 0)
        if (Current_State > 9) {
            Current_State = 0;
        }
    }

    // Update the display based on the Current_State
    for (int i = 0; i < 8; i++) {
        digitalWrite(SegmentPins[i], digitPatterns[Current_State][i]);
    }

    // Store the last button state for next comparison
    LastButtonState = ButtonState;

    delay(100);  // Delay to make sure display is stable
}
