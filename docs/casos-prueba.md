# Casos de Prueba

### Caso 1: Compra normal sin descuento
Entrada: cantidad=2, precio=50 (subtotal Q100)
Esperado: Descuento Q0, IVA Q12, Total Q112
Resultado: OK

### Caso 2: Compra con 10% descuento
Entrada: cantidad=6, precio=100 (subtotal Q600)
Esperado: Descuento Q60, IVA Q64.80, Total Q604.80
Resultado: OK

### Caso 3: Entrada inválida
Entrada: opcion="a", cantidad=-5
Esperado: Mensaje "Entrada no válida, intente de nuevo" y no se cierra el programa gracias a cin.clear() y cin.ignore()
Resultado: OK