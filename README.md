# IoT
Monitoreo y visualización de temperatura

# Descripcion
Este proyecto consiste en desarrollar un sistema de monitoreo de temperatura a través de dispositivos IoT durante 3 días consecutivos. Los datos recopilados serán enviados a ThingSpeak para su posterior visualización y análisis utilizando un script en MATLAB


# Implementacion
Cabe mencionar que antes de la ejecucion y toma de los datos en el Codigo Arduino, se realizo la instalacion de los drives de los puertos virtuales o tambien conocidos como COM, los cuales nos permitieron tener una conexion con la placa ESP32, al igual que descargar la placa en el IDE de Arduino

Drivers para COM
IDE Arduino
Codigo Arduino - practicaIOT.ino
Codigo MATLAB Visualizations - MATLAB_visualizar_graficar.m

# Desarrollo
El proyecto se baso en dos partes, la captura de los datos mediante un codigo Arduino, usando una placa ESP32, al igual que un LM35, permitiendonos captura la temperatura, despues de esto fue enviado a ThingSpeak para la visualizacion de esta.

Despues de la primera captura de los datos, se uso un codigo que ofrece MATLAB Visualizations, en la cual podemos observar distintos templates, en este caso agarraremos la comparacion de temperatura durante 3 dias, donde tiene codigo ya predefinido y solo es cambiar los datos necesarios para hacer conexion con nuestra salida de datos de temperatura que se comenta anteriormente.

# Resultados
En los resultados obtenidos, despues de obtener temperaturas durante 3 dias, y ajustar los parametros necesarios de MATLAB Visualizations, podemos obtener una grafica en la cual se compara el tiempo y la temperatura obtenida durante 3 dias, en donde en nuestra graficas podemos visualizar distintos cambios, dependiendo la hora del dia, la temperatura aumento y disminuyo, al igual que hubo ciertos picos, debido a que ciertas ocasiones se perdia la conexion, apesar de todo, se puede ver una normalizacion de los datos, ya que a base como estaba el tiempo o temperatura general, captaba datos similares para el ThingSpeak
