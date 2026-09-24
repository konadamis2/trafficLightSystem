int red = 2;
int amb = 3;
int gre = 4;

void setup(){

	pinMode(red, OUTPUT);
	pinMode(amb, OUTPUT);
	pinMode(gre, OUTPUT);
}

void loop(){

	digitalWrite(red, HIGH);
	delay(6000);

	digitalWrite(amb, HIGH);
	delay(2000);

	digitalWrite(red, LOW);
	digitalWrite(amb, LOW);
	digitalWrite(gre, HIGH);
	delay(6000);

	digitalWrite(amb, HIGH);
	digitalWrite(gre, LOW);
	delay(2000);

	digitalWrite(amb, LOW);
}