#include <ESPboy.h>
#include "Game.h"
#include "assets/sprites.h"

Game game;

void setup() {
    
    espboy.begin(
        M1CR0LAB_SIZE,
        M1CR0LAB_SIZE,
        M1CR0LAB_LOGO,
        1000
    );
    
    game.begin();
    
}

void loop() {

    espboy.update();
    game.loop();

}

/**
 * ----------------------------------------------------------------------------
 * Dino Game
 * ----------------------------------------------------------------------------
 * Copyright (c) 2022 Stéphane Calderoni (https://github.com/m1cr0lab)
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 * ----------------------------------------------------------------------------
 */