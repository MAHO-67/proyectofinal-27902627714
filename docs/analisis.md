# Análisis del Sistema de Caja - Tienda

## Problema
Desarrollar un programa en C++ que simule la caja de una tienda con menú interactivo.

## Requisitos
- Menú con ciclo while(opcion != 3)
- Validación de entradas con cin.clear() e isalpha
- Cálculo de subtotal, descuento e IVA 12%
- 3 tipos de descuento: 0%, 10%, 15%

## Entradas
- opcion (int)
- cantidad (int)
- precio (float)

## Proceso
1. Mostrar menú
2. Validar que la opción sea número
3. Si es compra, validar cantidad > 0
4. Calcular subtotal = cantidad * precio
5. Aplicar descuento según monto
6. Calcular IVA 12% y total

## Salidas
- Factura con subtotal, descuento, IVA y total a pagar