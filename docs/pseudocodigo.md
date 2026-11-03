Inicio
  Definir IVA = 0.12
  opcion = 0
  Mientras opcion != 3 Hacer
    Mostrar "1. Realizar Venta 2. Ver Reporte 3. Salir"
    Leer opcion
    Si opcion es letra entonces
      Limpiar buffer y mostrar error
    FinSi
    Segun opcion
      Caso 1:
        Leer cantidad
        Si cantidad <= 0 entonces error
        Leer precio
        subtotal = cantidad * precio
        Si subtotal >= 500 entonces descuento = 15%
        Sino Si subtotal >= 200 entonces descuento = 10%
        Sino descuento = 0%
        iva = (subtotal - descuento) * 0.12
        total = subtotal - descuento + iva
        Mostrar factura
      Caso 3: Salir
    FinSegun
  FinMientras
Fin