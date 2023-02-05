// Digital read, digunakan sebagai input
// Digital write, digunakan sebagai output

const int push_button = 3; // Inisialisasi variabel push button, pada pin 3
const int led = 4; // Inisialisasi variabel led, pada pin 4
boolean input_push_button;

void setup() {
  Serial.begin(9600);
  pinMode(push_button, INPUT);  // Inisialisasi variabel push button sebagai input
  pinMode(led, OUTPUT); // Inisialisasi variabel led sebagai output
}

void loop() {
  input_push_button = digitalRead(push_button); // Deklarasi nilai input
  if(input_push_button == 1){ // Jika push button ditekan, maka akan dieksekusi perintah di bawah L
    digitalWrite(led, HIGH);  // Lampu hidup
  }
  else{
    digitalWrite(led, LOW);   // Lampu mati
  }
}
