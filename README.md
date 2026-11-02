# Sistema de Caja para Tienda - Proyecto Final Algoritmos

**Estudiante:** MAHO-67
**Carnet:** 2790-26-27714

## Descripción
Programa de consola en C++ para la caja de una tiendita de barrio. Permite registrar ventas por productos, calcula descuento según subtotal (0%, 5%, 10%), calcula IVA 12% sobre monto con descuento, calcula cambio y muestra resumen del día.

## Lenguaje Usado
C++ (g++)

## Cómo Compilar y Ejecutar
g++ main.cpp -o caja
./caja

## Casos de Prueba

1. Venta Q99.99 (sin descuento) - Subtotal Q99.99 -> Desc 0% -> Total Q111.99 OK
2. Venta Q100.00 (límite 5%) - Subtotal Q100 -> Desc Q5 -> Total Q106.40 OK
3. Venta Q500.00 (límite 10%) - Subtotal Q500 -> Desc Q50 -> Total Q504 OK
4. Datos inválidos: Precio -5, cantidad 0, cantidad 101, opción 9, pago menor -> muestra error y no se cae
5. Resumen sin ventas -> muestra "Aun no hay ventas" sin división entre cero

## Enlaces
- Repositorio: https://github.com/MAHO-67/proyectofinal-27902627714
- Video Demostración: PENDIENTE SUBIR A YOUTUBE

## Uso de IA
Herramienta: Meta AI
Qué pregunté: Que revisara si mis validaciones con cin.clear() y mis condicionales de descuento e IVA cumplían las restricciones de no usar funciones propias.
Qué acepté: Sugerencia de agregar comentarios para identificar ciclos y validaciones.
Qué rechacé: Que generara el código completo. Todo el código es mío y puedo explicar cada línea.

