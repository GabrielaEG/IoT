# IoT
Monitoreo y visualización de temperatura

# Descripción
Este proyecto consiste en desarrollar un sistema de monitoreo de temperatura a haciendo uso del sensor de temperatura LM35 3 días consecutivos. Los datos recopilados serán enviados a ThingSpeak para su posterior visualización y análisis utilizando un script en MATLAB.


# Implementación
Cabe mencionar que antes de la ejecución y toma de los datos en el código Arduino, se realizó la instalación de los drives de los puertos virtuales o tambien conocidos como COM, los cuales nos permitieron tener una conexión con la placa ESP32, al igual que descargar la placa en el IDE de Arduino.

-Drivers para COM
-IDE Arduino
-Código Arduino - practicaIOT.ino
-Código MATLAB Visualizations - MATLAB_visualizar_graficar.m

# Desarrollo
El proyecto se basó en dos partes: la captura de los datos mediante un código Arduino utilizando una placa ESP32 al igual que un LM35, lo cual permitió capturar la temperatura, después de esto fue enviado a ThingSpeak para la visualizacion de ésta.

Después de la primera captura de los datos, se usó un código que ofrece MATLAB Visualizations, en el cual podemos observar distintos templates. En este caso, agarraremos la comparación de temperatura durante 3 días, donde contiene código ya predefinido y sólo es cambiar los datos necesarios para hacer conexión con nuestra salida de datos de temperatura que se comentó anteriormente.

# Resultados
En los resultados obtenidos, después de obtener temperaturas durante 3 días, y ajustar los parametros necesarios de MATLAB Visualizations, podemos obtener una gráfica en la cual se compara el tiempo y la temperatura obtenida durante 3 días, en donde en nuestra gráficas podemos visualizar distintos cambios, dependiendo la hora del día, la temperatura aumentó y disminuyó, al igual que hubo ciertos picos, debido a que ciertas ocasiones se perdía la conexión, apesar de todo, se puede ver una normalización de los datos, ya que a base como estaba el tiempo o temperatura en general, captaba datos similares que se veían reflejados en ThingSpeak.
