const int spkrPin = 3; //3:ConnectorA 4:ConnectorB


#define BEAT 460 //四分音符 BPM130
#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define TI 493.883
#define octDO 523.251

void playmusic(){

// --0
ledcWriteTone(spkrPin, 0); // no sound
delay(BEAT*2);
// --1
  ledcWriteTone(spkrPin, RA);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, TI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
// --2
  ledcWriteTone(spkrPin, RA);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, TI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  // --3
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT+BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  // --4
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT+BEAT / 2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT*2);
 // --5
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT+BEAT/2+BEAT/4+BEAT/8+BEAT/16);
  ledcWriteTone(spkrPin, 0); // no sound
  delay(BEAT/16);
 // --6
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT+BEAT/2+BEAT/4+BEAT/8+BEAT/16);
  ledcWriteTone(spkrPin, 0); // no sound
  delay(BEAT/16);
 // --7
  ledcWriteTone(spkrPin, MI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT / 2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT);
// --8
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
// --9
  ledcWriteTone(spkrPin, RA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, TI);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT/2+BEAT/4+BEAT/8+BEAT/16);
  ledcWriteTone(spkrPin, 0); // no sound
  delay(BEAT/16);
// --10
  ledcWriteTone(spkrPin, RA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, TI);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, _FA);
  delay(BEAT/2);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT/2+BEAT/4+BEAT/8+BEAT/16);
  ledcWriteTone(spkrPin, 0); // no sound
  delay(BEAT/16);
// --11
  ledcWriteTone(spkrPin, RE);
  delay(BEAT*4);
// --12
ledcWriteTone(spkrPin, 0); // no sound
delay(BEAT*2);
}

void setup() {
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
}

void loop() {
  playmusic();
  delay(BEAT*4);
}
