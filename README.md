### Proyecto: Figuras Geométricas en C++ — Encapsulación de Datos Primitivos
 # Descripción General
Este proyecto implementa dos clases en C++ —Circulo y Rectangulo— diseñadas bajo los principios de la Programación Orientada a Objetos (POO). Cada clase encapsula datos primitivos (como double) y proporciona métodos para calcular el área y el perímetro, permitiendo demostrar cómo los datos simples pueden ser transformados en Tipos Abstractos de Datos (TAD) mediante el uso de clases.
El proyecto forma parte de la Unidad I – Estructuras de Datos, enfocada en la manipulación, protección y operación de datos primitivos dentro de objetos.
________________________________________
 ## Contenidos del Proyecto
•	 Implementación de dos clases: Circulo y Rectangulo
•	 Encapsulamiento de datos primitivos mediante atributos privados
•	 Métodos para calcular área y perímetro
•	 Uso de constructores parametrizados
•	 Demostración de POO aplicada en C++
________________________________________
 ## 1. Estructura del Código
 # Clase Circulo
•	Atributo privado double radio
•	Constructor parametrizado
•	Métodos:
o	CalcularArea()
o	CalcularPerimetro()
•	Encapsulamiento mediante acceso controlado
 Clase Rectangulo
•	Atributos privados double largo y double ancho
•	Constructor parametrizado
•	Métodos:
o	CalcularArea()
o	CalcularPerimetro()
________________________________________
 ## 2. Explicación Técnica
 # Encapsulamiento
Los atributos se declaran como privados para proteger los datos primitivos y evitar modificaciones externas no controladas.
Los métodos públicos permiten operar sobre los datos sin exponer su implementación interna.
 Constructores
Cada clase utiliza un constructor parametrizado para inicializar sus dimensiones. Esto garantiza que el objeto se cree siempre con valores válidos.
 Métodos Matemáticos
Los métodos CalcularArea() y CalcularPerimetro() devuelven valores tipo double, aplicando las fórmulas exactas de cada figura geométrica.
________________________________________
 ## 3. Resultados Obtenidos
Durante las pruebas del programa se verificó que:
•	Los cálculos del área y perímetro para ambas figuras se ejecutan correctamente.
•	Los valores se procesan con precisión gracias al uso de double.
•	La organización del código mediante clases facilita la lectura, mantenimiento y ampliación del proyecto.
•	El software demuestra efectivamente el concepto de Tipo Abstracto de Dato (TAD) aplicado a figuras geométricas.
________________________________________
 ## 4. Conclusiones Principales
•	Se comprobó que la encapsulación permite proteger datos primitivos y manipularlos mediante métodos especializados.
•	Las clases Circulo y Rectangulo convierten atributos simples en estructuras más completas y funcionales.
•	La implementación sigue correctamente los pilares de POO: encapsulamiento, abstracción y modularidad.
•	El proyecto sienta las bases para aplicaciones más complejas que involucren colecciones, herencia o polimorfismo.
________________________________________
## 5. Ejecución del Código
# Compilar en consola:
g++ main.cpp -o figuras
./figuras
________________________________________
 ## 6. Estructura del Repositorio
├── README.md
├── main.cpp
├── circulo.h
├── rectangulo.h
└── /capturas
    ├── codigo.png
    └── ejecucion.png
________________________________________
## 7. Autor del Proyecto
Nombre: johhny Alberto Vera Vaca Materia: Estructura de Datos – Unidad I
Lenguaje utilizado: C++
Universidad: Universidad Estatal Amazónica UEA 
