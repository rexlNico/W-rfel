void setup() {
	for (int i = 0; i < 7; i++) {
		pinMode(i, OUTPUT);
	}
	pinMode(7, INPUT);
}

void loop() {
	if (digitalRead(7) == HIGH) {
		light(random(1, 6));
	}
	delay(3000);
}

void light(int zahl) {
	for (int i = 0; i < 7; i++) {
		digitalWrite(i, 0);
	}
	switch (zahl) {
	case 1:
		digitalWrite(3, 1);
		break;
	case 2:
		digitalWrite(2, 1);
		digitalWrite(4, 1);
		break;
	case 3:
		digitalWrite(2, 1);
		digitalWrite(3, 1);
		digitalWrite(4, 1);
		break;
	case 4:
		digitalWrite(0, 1);
		digitalWrite(2, 1);
		digitalWrite(4, 1);
		digitalWrite(6, 1);
		break;
	case 5:
		digitalWrite(0, 1);
		digitalWrite(2, 1);
		digitalWrite(3, 1);
		digitalWrite(4, 1);
		digitalWrite(6, 1);
		break;
	case 6:
		digitalWrite(0, 1);
		digitalWrite(1, 1);
		digitalWrite(2, 1);
		digitalWrite(4, 1);
		digitalWrite(5, 1);
		digitalWrite(6, 1);
		break;
	default:
		break;
	}
}
