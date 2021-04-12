# ESP32 SDCard Wave File Example

This code shows how to record a WAV file to an SD Card attached to an ESP32 and then play it back.

There's an explanatory video [here](https://youtu.be/bVru6M862HY)

[![Demo Video](https://img.youtube.com/vi/bVru6M862HY/0.jpg)](https://www.youtube.com/watch?v=bVru6M862HY)

There are two projects - one using Arduino and one using the Esspresif IDF. Both of these projects use PlatformIO to build.

Edit `config.h` for your device. In particular, you will probably want to change the button that is used to trigger recording and playback.

```
// record button
#define GPIO_BUTTON GPIO_NUM_23
```

# Usage

To record audio press and hold the button. Recording will stop when you release the button.

The SD Card should contain a file called `test.wav` after a successful recording.

To playback the recording push the button.

Once the playback has finished the device will switch back to waiting for a new recording to be made.

# Arduino

The `arduino-wav-sdcard` folder has code that works on the current release of Arduino for the ESP32.

# IDF

The `idf-wav-sdcard` folder has code that works with the latest IDF release.
