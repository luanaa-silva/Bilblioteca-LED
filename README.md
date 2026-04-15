# Biblioteca LED

Biblioteca simples para controle não bloqueante de LED com Arduino e ESP32.

A classe `Led` permite:

- ligar o LED continuamente
- ligar por tempo determinado
- apagar
- alternar estado
- piscar continuamente
- piscar uma quantidade definida de vezes

O funcionamento é não bloqueante, usando `millis()`.  
Por isso, o método `update()` deve ser chamado repetidamente dentro do `loop()`.

---

## Estrutura da biblioteca

```text
Biblioteca LED/
├── examples/
│   ├── 01-Led_Piscando
│   └── 02-Led_Ligando
├── src/
│   ├── LED.cpp
│   └── LED.h
├── library.json
├── LICENSE
└── README.md