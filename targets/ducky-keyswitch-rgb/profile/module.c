#include "jdprofile.h"

#include "addons/example.h"

// Edit the string below to match your company name, the device name, and hardware revision.
// Do not change the generated 0x3.... value, as that would break the firmware update process.
FIRMWARE_IDENTIFIER(0x35b329b6, "Ducky Keyswitch with RGB");

static const led_params_t params = {
    .pin_r = PA_8,
    .pin_g = NO_PIN,  // PC_6 - breaks
    .pin_b = PB_1,
    .active_high = 0,
};

void app_init_services() {
    // see jacdac-c/services/jd_services.h for the services that can be
    // enabled here; you can enable zero or more services
    button_init(PA_12, 0, NO_PIN);

    pin_setup_output(PA_8);
    pin_set(PA_8, 1);
    pin_setup_output(PC_6);
    pin_set(PC_6, 1);
    pin_setup_output(PB_1);
    pin_set(PB_1, 1);
    
    led_service_init(&params);

    example_custom_function(); // call our custom function
}
