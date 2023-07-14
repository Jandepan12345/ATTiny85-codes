#include  "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("notepad");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(400);
DigiKeyboard.print("you have been hacked 10%..........20%.........30%..........50%.........90%..........100% hacking done");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(700);
DigiKeyboard.print("https://geekprank.com/matrix-code-rain/");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_F11);
for(;;)
  {
  }
}
