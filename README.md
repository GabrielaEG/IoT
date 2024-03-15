#ThingSpeak y ESP32 Monitoreo y visualización de temperatura (IoT)

# Integrantes
- Adalberto Amaya Garcia
- Gabriela Estrello Guadarrama
- Victor Eduardo Garcia Sardaneta
- Ángel Gabriel Herrera Contreras


# Descripción
En este proyecto se presenta una medición contínua de temperatura durante 3 días haciendo uso de el sensor de temperatura LM35, la placa de desarrollo ESP32 y la plataforma online ThingSpeak, ésta última para llevar el registro de los datos en tiempo real. Cabe mencionar que los datos recopilados serán enviados a ThingSpeak para su posterior visualización y análisis utilizando un script en MATLAB.


# Implementación
Para la elaboración de este proyecto, se realizó con el IDE Arduino, por lo cual fue necesario descargar las librerías correspondientes a la placa de desarrollo, que en este caso fue la ESP32, como se mencionó anteriormente. De igual forma, se realizó la instalación de los drivers de los puertos virtuales (COM) para tener una correcta conexión con la placa de desarrollo.

Para hacer uso de la plataforma ThingSpeak y ver los datos en tiempo real, es necesario crear una cuenta en https://thingspeak.com. Luego, se crea un nuevo canal y es necesario generar una tabla con un sólo campo y tomar los datos importantes de canal, tales como su ID, lectura y escritura para entablar la conexión con el código fuente de Arduino. 

-Drivers para COM
-IDE Arduino
-Código Arduino - practicaIOT.ino
-Código MATLAB Visualizations - MATLAB_visualizar_graficar.m

# Desarrollo
El proyecto se basó en dos partes: la captura de los datos mediante un código Arduino utilizando una placa ESP32 al igual que el sensor de temperatura LM35, lo cual permitió capturar la temperatura, y posteriormete fue enviado a la plataforma ThingSpeak para la visualizacion de los datos obtenidos en tiempo real.

Después de la primera captura de los datos, se usó un código que ofrece MATLAB Visualizations, en el cual podemos observar distintos templates. En este caso, agarraremos la comparación de temperatura durante 3 días, donde contiene código ya predefinido. Para su correcto funcionamiento sólo fue necesario cambiar algunso datos correspondientes al canal para hacer conexión con nuestra salida de datos de temperatura que se comentó anteriormente.

# Resultados
En los resultados obtenidos, después de capturar datos durante 3 días, y ajustar los parametros necesarios de MATLAB Visualizations, podemos obtener una gráfica, en la cual se compara el tiempo y la temperatura registrada durante 3 días. En nuestras gráficas podemos visualizar distintos cambios, dependiendo la hora del día, la temperatura aumentó y disminuyó, al igual que hubo ciertos picos, debido a que ciertas ocasiones se perdía la conexión. Apesar de todo, se puede ver una normalización de los datos, ya que, con base al tiempo o temperatura en general, captaba datos similares que se veían reflejados en la plataforma ThingSpeak.
