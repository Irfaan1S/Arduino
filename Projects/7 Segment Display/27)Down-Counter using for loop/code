  #define A 2
  #define B 3
  #define C 4
  #define D 5
  #define E 6
  #define F 7
  #define G 8
  #define dp 9

  const int SegmentPins[] = {A,B,C,D,E,F,G,dp};

  const bool Pattern[10][8] = {

    {1,1,1,1,0,1,1,0},//9
    {1,1,1,1,1,1,1,0},//8
    {1,1,1,0,0,0,0,0},//7
    {1,0,1,1,1,1,1,0},//6
    {1,0,1,1,0,1,1,0},//5
    {0,1,1,0,0,1,1,0},//4 
    {1,1,1,1,0,0,1,0},//3
    {1,1,0,1,1,0,1,0},//2
    {0,1,1,0,0,0,0,0},//1
    {1,1,1,1,1,1,0,0},//0
  };
  void setup()
  {
    for(int i = 0;i<8;i++){
        pinMode(SegmentPins[i],OUTPUT);
    }
  }

  void loop()
  {
    for(int i = 0;i<10;i++){
       for (int j = 0; j < 8; j++)
          {
              digitalWrite(SegmentPins[j], Pattern[i][j]);
          }
      delay(1000);

    }
  }
