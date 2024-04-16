#include <stdio.h>
#include <modbus.h>

int main() {
    modbus_t *ctx;
    uint16_t tab_reg[64]; // Assuming you want to read up to 64 holding registers
    int rc;

    // Create a Modbus context
    ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);
    if (ctx == NULL) {
        fprintf(stderr, "Unable to create the libmodbus context\n");
        return -1;
    }

    // Connect to the Modbus slave
    if (modbus_connect(ctx) == -1) {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return -1;
    }

    // Read holding registers starting at address 0, up to 10 registers
    rc = modbus_read_registers(ctx, 0, 10, tab_reg);
    if (rc == -1) {
        fprintf(stderr, "Error reading holding registers: %s\n", modbus_strerror(errno));
        modbus_close(ctx);
        modbus_free(ctx);
        return -1;
    }

    // Print out the read values
    for (int i = 0; i < rc; i++) {
        printf("Holding register %d: %d\n", i, tab_reg[i]);
    }

    // Disconnect and free the context
    modbus_close(ctx);
    modbus_free(ctx);

    return 0;
}
