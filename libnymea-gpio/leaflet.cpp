#include "leaflet.h"

QString leafleatGPIOmap(int gpio) {
    switch (gpio)
    {
    case 496:
        return(QString("/sys/class/gpio/S_1"));
    case 497:
        return(QString("/sys/class/gpio/S_2"));
    default:
        return(QString("/sys/class/gpio/gpio%1").arg(QString::number(gpio)));
    }
}
