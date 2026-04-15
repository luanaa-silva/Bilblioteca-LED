#ifndef LED_h
#define LED_h

#include <Arduino.h>


/**
* @class Led
* @brief Classe para controle nao bloqueante de um Led
* Permite ligar, desligar, ligar por tempo determinado, piscar por continuamente e piscar por quantidade definida.
*
* @note o metodo update() deve ser chamado continuamente dentro do loop
*/
class Led
{
private:
    uint8_t pino;
    bool estado;
    bool desligarPorTempo;
    uint32_t desligarNoMomento;

    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;

    /**
     * @brief Processa a logica de piscada do LED

    void funcaoPiscar();
    /**
     * @brief Processa o desligamento temporizado
     */
    void funcaoDesligamento();
    

public:
/**
 * @brief constroi um objeto Led
 * @param pin Numero do pino digital onde o Led esta conectado 
 */
    Led(uint8_t pin); 
    /**
     * @brief Liga o Led continuamente
     */

    void ligar();
    /**
     * @brief Liga o Led por um tempo determinado
     * @param tempoLigado_ms Tempo, em milissegundos, que o LED ficara ligado 
     */

    void ligar(uint32_t tempoLigado_ms);
    /**
     * @brief Desliga o LED e cancela os modos automaticos 
     */

    void desligar();
    /**
     * @brief inicia a piscada continua em 1Hz
     */

    void piscar();
    /**
     * @brief 
     */
    

    void piscar(float frequencia);
    /**
     * @brief Pisca o LED uma quantidade definida de vezes
     * @param frequencia Frequencia da piscada em hertz
     * @param repeticoes Quantidade de piscadas completas
     */

    void piscar(float frequencia, uint16_t repeticoes);
    /**
     * @brief 
     */

    bool getEstado();
    /**
     * @brief Exibe o estado atual do LED
     */

    uint8_t getPino();
    /**
     * @brief Exibe em qual estado o pino esta
     */
    

    void setEstado(bool estado);
    /**
     * @brief Define manualmente o estado do LED
     * @param estado true para ligado, false para desligado
    */

    void  alternar();
    /**
     * @brief Alterna os estados do LED, entre ligado e desligado
     */

    void update();
    /**
     * @brief Registra e atualiza os estados do LED
     */
  
};

#endif
