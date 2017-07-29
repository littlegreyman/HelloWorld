int ledPin = 10; //定义数字10 接口
int val;
int i;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);//定义小灯接口为输出接口
}
void loop()
{
  val = Serial.read();
  if (val == 'L')
  {
    for (i = 1 ; i<=20; i++) {
      digitalWrite(ledPin, HIGH); //点亮小灯
      delay(200);
      digitalWrite(ledPin, LOW); //熄灭小灯
      delay(200);
      Serial.println(i);
    }
  } else {
    digitalWrite(ledPin, LOW); //

  }

}

