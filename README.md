# Control de Brazo Robótico con Micro Servomotores

Este proyecto consiste en el control de un brazo robótico con micro servomotores SG90. El brazo puede ser controlado mediante comandos enviados a través de un servidor local Node-RED, lo que permite una interfaz de usuario gráfica para interactuar con el brazo.

## Requisitos

- Arduino IDE
- Servidor local Node-RED
- Placa Arduino compatible
- Tres micro servomotores SG90
- Componentes electrónicos estándar (cables, resistencias, LEDs)

## Instalación

1. Cargar el código en un Arduino compatible utilizando el Arduino IDE.
2. Conectar los micro servomotores a los pines especificados en el código (`BasePin`, `MedioPin`, `PinzaPin`) y conectar los LEDs a los pines `LedPin1`, `LedPin2`, `LedPin3`.
3. Configurar y ejecutar un servidor local Node-RED en la misma red que el Arduino.

## Uso

- Una vez que el servidor Node-RED esté en funcionamiento y el Arduino esté conectado, se puede acceder a la interfaz de control a través de un navegador web.
- Se pueden enviar comandos desde la interfaz Node-RED para controlar los movimientos del brazo robótico.
- Los comandos están mapeados a través de la comunicación serial entre Node-RED y el Arduino. Los comandos disponibles son:
  - '1': Mover la pinza del brazo a 90 grados.
  - '2': Mover la pinza del brazo a 120 grados.
  - '3': Mover el servo medio a 0 grados.
  - '4': Mover el servo medio a 30 grados.
  - '5': Mover la base del brazo a 0 grados.
  - '6': Mover la base del brazo a 53 grados.

## Licencia

@Gr6systems
