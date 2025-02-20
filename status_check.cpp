#include "status_check.h"
#include "esphome/core/log.h"

static const char *TAG = "status_check";

void StatusCheck::loop() {
          // Sprawdź, które sensory są włączone
          int active_sensors1 = 0;
          if (id(Wlaczniki_1_A0).state) active_sensors1++;
          if (id(Wlaczniki_1_A1).state) active_sensors1++;
          if (id(Wlaczniki_1_A2).state) active_sensors1++;
          if (id(Wlaczniki_1_A3).state) active_sensors1++;
          if (id(Wlaczniki_1_A4).state) active_sensors1++;
          if (id(Wlaczniki_1_A5).state) active_sensors1++;
          //if (id(Wlaczniki_1_A6).state) active_sensors1++;
          if (id(Wlaczniki_1_B0).state) active_sensors1++;
          if (id(Wlaczniki_1_B1).state) active_sensors1++;
          if (id(Wlaczniki_1_B2).state) active_sensors1++;
          if (id(Wlaczniki_1_B3).state) active_sensors1++;
          if (id(Wlaczniki_1_B4).state) active_sensors1++;
          if (id(Wlaczniki_1_B5).state) active_sensors1++;
          //if (id(Wlaczniki_1_B6).state) active_sensors1++;                  
          // Jeśli więcej niż 3 sensory są włączone, wykonaj akcję
          if (active_sensors1 > 3) {
            ESP_LOGI("MCP23017", "Wlacznik 1 Więcej niż 3 sensory są włączone - wykonuję akcję");
            
            id(Wlaczniki_1_A0).publish_state(false);
            id(Wlaczniki_1_A1).publish_state(false);
            id(Wlaczniki_1_A2).publish_state(false);
            id(Wlaczniki_1_A3).publish_state(false);
            id(Wlaczniki_1_A4).publish_state(false);
            id(Wlaczniki_1_A5).publish_state(false);
            id(Wlaczniki_1_B0).publish_state(false);
            id(Wlaczniki_1_B1).publish_state(false);
            id(Wlaczniki_1_B2).publish_state(false);
            id(Wlaczniki_1_B3).publish_state(false);
            id(Wlaczniki_1_B4).publish_state(false);
            id(Wlaczniki_1_B5).publish_state(false);
            id(Set_Wlaczniki_1_config).press();
            delay(500);
          }

          // Sprawdź, które sensory są włączone
          int active_sensors2 = 0;
          if (id(Wlaczniki_2_A0).state) active_sensors2++;
          if (id(Wlaczniki_2_A1).state) active_sensors2++;
          if (id(Wlaczniki_2_A2).state) active_sensors2++;
          if (id(Wlaczniki_2_A3).state) active_sensors2++;
          if (id(Wlaczniki_2_A4).state) active_sensors2++;
          if (id(Wlaczniki_2_A5).state) active_sensors2++;
          //if (id(Wlaczniki_2_A6).state) active_sensors2++;
          if (id(Wlaczniki_2_B0).state) active_sensors2++;
          if (id(Wlaczniki_2_B1).state) active_sensors2++;
          if (id(Wlaczniki_2_B2).state) active_sensors2++;
          if (id(Wlaczniki_2_B3).state) active_sensors2++;
          if (id(Wlaczniki_2_B4).state) active_sensors2++;
          if (id(Wlaczniki_2_B5).state) active_sensors2++;
          //if (id(Wlaczniki_2_B6).state) active_sensors2++;                  
          // Jeśli więcej niż 3 sensory są włączone, wykonaj akcję
          if (active_sensors2 > 3) {
            ESP_LOGI("MCP23017", "Wlacznik 2 - Więcej niż 3 sensory są włączone - wykonuję akcję");
            id(Wlaczniki_2_A0).publish_state(false);
            id(Wlaczniki_2_A1).publish_state(false);
            id(Wlaczniki_2_A2).publish_state(false);
            id(Wlaczniki_2_A3).publish_state(false);
            id(Wlaczniki_2_A4).publish_state(false);
            id(Wlaczniki_2_A5).publish_state(false);
            id(Wlaczniki_2_B0).publish_state(false);
            id(Wlaczniki_2_B1).publish_state(false);
            id(Wlaczniki_2_B2).publish_state(false);
            id(Wlaczniki_2_B3).publish_state(false);
            id(Wlaczniki_2_B4).publish_state(false);
            id(Wlaczniki_2_B5).publish_state(false);
            id(Set_Wlaczniki_2_config).press();
            delay(500);
          }
          
}

