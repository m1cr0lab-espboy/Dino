#pragma once

#include <ESPboy.h>
#include <FixedPoints.h>
#include <FixedPointsCommon.h>

class Dino {

    public:

        Dino(const uint8_t x, const uint8_t baseline);

        const SQ7x8 y()       const;
        const bool  jumping() const;

        void reset();
        void jump();
        void wait();

        const bool collidingWith(const int8_t x, const uint8_t y, const uint8_t size) const;

        void update(const SQ15x16 speed);
        void draw(LGFX_Sprite * const framebuffer) const;

    private:

        static constexpr uint8_t JUMP    = 4;
        static constexpr SQ7x8   GRAVITY = .2f;

        const UQ8x8   _x;
        SQ7x8         _y;
        SQ7x8         _vy;
        const uint8_t _baseline;
        
        bool    _jumping;
        uint8_t _frame;

};

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