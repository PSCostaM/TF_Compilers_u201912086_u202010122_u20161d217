# TF_Compilers_u201912086_u202010122_u20161d217

### Integrantes
- Paulo Sergio Costa Mondragón
- Enzo Fabricio Camargo Ramírez
- Alonso Jesús Ulloa Vizquerra

## Introduction

El desarrollo de sistemas operativos y la interacción con ellos se ha convertido en un aspecto fundamental en la informática moderna. Las interfaces de línea de comandos (CLI) representan una parte esencial de esta interacción, permitiendo a los usuarios comunicarse con el sistema a través de comandos textuales.

En el marco del curso Teoría de compiladores, se planteó el diseño e implementación de una shell, una interfaz de línea de comandos personalizada, utilizando herramientas como las vistas en clase. Esta shell, es un componente crucial en el entorno de un sistema operativo que busca ofrecer una experiencia simplificada para la ejecución de comandos, inspirada en las funcionalidades de shells reconocidas como Bash o Fish, aunque con un enfoque más simplificado y según las indicaciones del informe del trabajo final.

El presente informe detalla el proceso de diseño, desarrollo e implementación de esta shell personalizada, destacando las decisiones clave de diseño, la arquitectura del sistema, los desafíos encontrados y las soluciones propuestas. Además, se discuten las funcionalidades implementadas, ejemplos de su uso y posibles mejoras o expansiones futuras.

## Objectives

El objetivo fundamental de este informe es proporcionar una visión integral del proceso de creación de esta interfaz de línea de comandos, mostrando el trabajo realizado, las lecciones aprendidas y el valor añadido que este proyecto aporta al entendimiento de las bases de las interfaces de usuario en sistemas operativos y la teoría detrás de los compiladores de lenguajes de programación.

Algunos de los objetivos específicos fueron:

- Implementación de una Gramática Utilizando ANTLR: Desarrollar una gramática precisa y eficiente utilizando ANTLR para definir la sintaxis de la shell. Esto incluye la especificación de reglas gramaticales para reconocer comandos, argumentos, redirecciones y otras funcionalidades clave.

- Análisis Léxico y Sintáctico Efectivo: Garantizar un análisis léxico y sintáctico robusto para procesar los comandos ingresados por el usuario, identificando correctamente la estructura y el significado de los mismos.

- Implementación de Funcionalidades Básicas: Ofrecer un conjunto inicial de funcionalidades básicas de una shell, como la ejecución de comandos simples, manejo de variables de entorno, redirección de entrada/salida y soporte para tuberías (pipes).

## Methodology

### Investigación y Planificación Inicial:

- Estudio de Shells Existentes: Analizar las características y funcionalidades de shells como Bash, Fish, Zsh, entre otras, para comprender su estructura y diseño.
Definición de Requisitos: Identificar las funcionalidades esenciales que la shell debe tener y establecer prioridades para su implementación.
Planificación del Proyecto: Establecer un plan de trabajo, con hitos y plazos, para guiar el desarrollo y la implementación de la shell.
Diseño de la Gramática con ANTLR:

- Definición de la Gramática: Desarrollar la gramática utilizando ANTLR para capturar la sintaxis y estructura de los comandos que la shell aceptará.
Pruebas de la Gramática: Realizar pruebas exhaustivas con ejemplos de comandos para verificar la correcta interpretación y análisis léxico y sintáctico de la gramática.
Implementación de la Lógica de Ejecución:

- Desarrollo de la Lógica Principal: Codificar la lógica necesaria para interpretar los comandos reconocidos por la gramática, ejecutarlos y gestionar sus salidas e inputs.
Manejo de Variables y Ambiente: Implementar el manejo de variables de entorno, directorios actuales y otras configuraciones relevantes para la interacción del usuario con la shell.

## Results

![image](https://github.com/PSCostaM/TF_Compilers_u201912086_u202010122_u20161d217/assets/48858434/c6200d6a-1b09-487a-95a2-8a4619191d1b)

Lista de files generados por ANTLR4 teniendo como grammar el archivo .g4.

![image](https://github.com/PSCostaM/TF_Compilers_u201912086_u202010122_u20161d217/assets/48858434/b5fd98c4-9ec8-41a2-96a4-5f211c5e7b7a)

Funcionamiento de commando ls con argumento -la

## Conclusiones

El desarrollo de esta shell utilizando ANTLR y C++ ha sido un ejercicio significativo que ha proporcionado una comprensión más profunda de las complejidades y desafíos inherentes a la creación de una interfaz de línea de comandos. A través de este proyecto, se han logrado una serie de avances y se han identificado áreas de mejora y posibles direcciones futuras:

- Éxito en la Implementación de una Gramática Funcional: La definición y utilización de ANTLR para la gramática ha sido fundamental para lograr una interpretación precisa y eficiente de los comandos, proporcionando una base sólida para la comprensión de las instrucciones ingresadas por el usuario.

- Funcionalidades Básicas Implementadas con Éxito: Se logró implementar un conjunto inicial de funcionalidades esenciales, incluyendo la ejecución de comandos simples, el manejo de variables de entorno y la redirección de entrada/salida, sentando las bases para una shell operativa.

- Desafíos y Áreas de Mejora Identificadas: Durante el desarrollo, surgieron desafíos relacionados con la gestión de errores, la complejidad en la interpretación de comandos más avanzados y el incluir argumentos en los comandos creados. Estos aspectos pueden ser mejorados para una experiencia más robusta y completa.
