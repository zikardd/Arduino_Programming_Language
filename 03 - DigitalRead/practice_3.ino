// Digital write, digunakan sebagai output
// Digital read, digunakan sebagai input

const int push_button = 3; // Inisialisasi variabel push button, pada pin 3
void setup() {
  Serial.begin(9600);
  pinMode(push_button, INPUT);  // Inisialisasi variabel push button sebagai input
}

void loop() {
  Serial.println(digitalRead(push_button)); // Menampilkan hasil push button
  /* Jika ditekan, maka akan menampilkan angka 1
   *  Sedangkan jika tombol tidak ditekan, maka akan menampilkan angka 0
  */
  delay(1000);  // Memberikan delay selama satu detik(1000 ms)
}
