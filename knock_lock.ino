
constexpr int kLockPin = 13;

void setup() {
  pinMode(kLockPin, OUTPUT);
  Serial.begin(115200);
  Serial.println("Initialization complete.");
}

uint64_t Micros64() {
    static uint32_t low32, high32;
    uint32_t new_low32 = micros();
    if (new_low32 < low32) high32++;
    low32 = new_low32;
    return (uint64_t) high32 << 32 | low32;
}

class KnockLock {
public:
KnockLock(){}

private:
long 
};

void loop() {

}
