#include <Arduboy2.h>
Arduboy2 arduboy;
void setup() {
  arduboy.begin();
  arduboy.setFrameRate(30);
}

void loop() {
  if (!(arduboy.nextFrame()))
    return;
  arduboy.clear();
  if(arduboy.pressed(UP_BUTTON)) {
    for(int i = 0; i<64; i++){
      arduboy.drawFastHLine( 0, i, 127, round(random(2)) );
    }
    tone(13, random(100,500),100);
    
  }else if(arduboy.pressed(DOWN_BUTTON)){
    arduboy.fillCircle ( 30, 20, 10); 
    arduboy.fillCircle ( 90, 20, 10); 
    arduboy.fillRect ( 60, 50, 20,15); 
    tone(13, 400,100);
    
  }else if(arduboy.pressed(LEFT_BUTTON)){
    for(int i = 0; i <64; i++){
      int j = 0;
      while(j<128){
        j = j + round(random(90)) + 1;
        arduboy.drawPixel(j, i, round(random(2)));
      }
    }    
    tone(13, 200,random(50,100));
    
  }else if(arduboy.pressed(RIGHT_BUTTON)){
    arduboy.fillCircle ( 30, 20, 10); 
    arduboy.fillCircle ( 90, 20, 10); 
    arduboy.fillRect ( 50, 40, 10,20);
    tone(13, 500,100);
    
  }else if(arduboy.pressed(A_BUTTON)){
    arduboy.fillCircle ( 30, 20, 10); 
    arduboy.fillCircle ( 90, 20, 10); 
    arduboy.fillRect ( 30, 50, 60,15); 
    tone(13, 330,100);
    
  }else if(arduboy.pressed(B_BUTTON)){
    arduboy.fillRect ( 30, 20, 10, 5); 
    arduboy.fillRect ( 90, 20, 10, 5); 
    arduboy.fillRect ( 30, 60, 60,5);
    tone(13, 380,100);
    
  }else{
    arduboy.fillCircle ( 30, 20, 10); 
    arduboy.fillCircle ( 90, 20, 10); 
    arduboy.fillRect ( 30, 60, 60,5);
    arduboy.digitalWriteRGB(1,1,1);
  }

  
  arduboy.display();
}
