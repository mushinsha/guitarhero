#include <KeyboardButton.h>

void setup() {
  Keyboard.begin();

  KeyboardButton::enableButton(8, KEY_UP_ARROW);//UP STROKE
  KeyboardButton::enableButton(9, KEY_DOWN_ARROW);//DOWN STROKE
  KeyboardButton::enableButton(7, KEY_LEFT_ARROW);//START BUTTON
  KeyboardButton::enableButton(10, KEY_RIGHT_ARROW);//SELECT BUTTON
  
  KeyboardButton::enableButton(2, 'z');//GREEN
  KeyboardButton::enableButton(3, 'x');//RED
  KeyboardButton::enableButton(4, 'c');//YELLOW
  KeyboardButton::enableButton(5, 'v');//BLUE
  KeyboardButton::enableButton(6, 'b');//ORANGE
}

void loop() {
  KeyboardButton::updateButtons();
}
