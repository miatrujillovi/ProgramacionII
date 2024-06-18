#include <iostream>
#include "Mago.h"
#include "Guerrero.h"
#include "Goblin.h"
#include "Orco.h"

int main() {
    Mago Gandalf;
    Gandalf.setNombre("Gandalf");
    Gandalf.setAltura(1.78);
    Gandalf.setPeso(70);
    Gandalf.setNivelPersonaje(15);
    Gandalf.setMana(100);
    Gandalf.setTipoMagia("Viento");
    Gandalf.Atacar();
    Gandalf.AddObject("Lengua de Sapo");
    Gandalf.AddObject("Piel de Cerdo");
    Gandalf.DeleteObject("Piel de Cerdo");

    Guerrero Himmel;
    Himmel.setNombre("Himmel");
    Himmel.setAltura(1.65);
    Himmel.setPeso(67);
    Himmel.setNivelPersonaje(50);
    Himmel.setArma("Espada");
    Himmel.setArmadura("Heroe Brillante");
    Himmel.Atacar();
    Himmel.AddObject("Anillo Dorado");
    Himmel.AddObject("Corona");
    Himmel.ViewInventory();

    Goblin Quejeso;
    Quejeso.setVida(30);
    Quejeso.setDamage(10);
    Quejeso.setMordida(true);
    Quejeso.setAtaqueSalto(true);
    Quejeso.GettingHit(15);

    Orco Gigante;
    Gigante.setVida(70);
    Gigante.setDamage(20);
    Gigante.setColor("Verde");
    Gigante.setArma(true);
    Gigante.GettingHit(10);

    return 0;
}
