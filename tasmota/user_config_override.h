#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#warning **** NOUS A1T - Energy + TLS ****

// -- Nom de l'image -----------------------------
#undef  CODE_IMAGE_STR
#define CODE_IMAGE_STR "nous-a1t-tls"

// -- MQTT TLS sans vérif de certificat ----------
#define USE_MQTT_TLS
#define USE_MQTT_TLS_FORCE_EC_CIPHER
#undef  USE_MQTT_TLS_CA_CERT

// -- Energy monitoring (chip HLW8012) -----------
#define USE_ENERGY_SENSOR
#define USE_HLW8012

// -- Désactiver les drivers énergie inutiles ----
#undef USE_CSE7766
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501

// -- Libérer de la mémoire pour TLS -------------
#undef USE_DISPLAY
#undef USE_DOMOTICZ
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO
#undef USE_IR_REMOTE
#undef USE_IR_RECEIVE
#undef USE_ZIGBEE

// -- Template NOUS A1T --------------------------
#undef  USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"NOUS A1T\",\"GPIO\":[32,0,0,0,2720,2656,0,0,2624,320,224,0,0,0],\"FLAG\":0,\"BASE\":49}"
#define USE_SET_TEMPLATE_AS_DEFAULT

// -- Sauvegarder conso totale en flash ----------
#define USE_ENERGY_POWER_LIMIT

#endif  // _USER_CONFIG_OVERRIDE_H_
