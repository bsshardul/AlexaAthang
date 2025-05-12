#include <pgmspace.h>

#define SECRET

const char WIFI_SSID[] = "";       // e.g., "TAMIM2.4G"
const char WIFI_PASSWORD[] = "";  // e.g., "0544287380"

#define THINGNAME "NodeMcu" //Thing Name

int8_t TIME_ZONE = 5;  // Adjust for your region (NYC is -5 UTC)

const char MQTT_HOST[] = ""; //MQTT Host url xxxxxxxxxxxx-xxx.iot.us-east-x.amazonaws.com

// Root CA certificate (Amazon Root CA 1)
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";

// Device certificate (from XXXXXX-certificate.pem.crt)
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)KEY";

// Private key (from XXXXXXXX-private.pem.key)
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
)KEY";
