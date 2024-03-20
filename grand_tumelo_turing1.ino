//C++ Code
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  	digitalWrite(13, HIGH);//acende vermelho 1
    digitalWrite(10, HIGH);// acende verde 2
    delay(1000);
    digitalWrite(10, LOW);//apaga verde 2
    digitalWrite(9, HIGH);//acende amarelo 2
    delay(500);
    digitalWrite(13, LOW);//apaga vermelho 1
    digitalWrite(11, HIGH);//acende verde 1
    digitalWrite(8, HIGH);//acende vermelho 2
    digitalWrite(9, LOW);//apaga amarelo 2
    delay(1000);
    digitalWrite(11, LOW);//apaga verde 1
    digitalWrite(12, HIGH);// acende amarelo 1
    delay(500);
    digitalWrite(8, LOW);//apaga vermelho 2
    digitalWrite(12, LOW);//apaga amaraelo 1
}