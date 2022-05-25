---
layout: default
title: Dino Game
---

<div class="demo">
    <div class="espboy small">
        <img src="{{ 'assets/images/dino.gif' | relative_url }}">
    </div>
</div>

<div class="overview">
    <h1>Dino Game</h1>
    <p class="credit">&copy; 2022 {{ site.author }}</p>
    <div class="description">
        <p markdown="1">
            This game is a slight remake of the famous Dinosaur Game, also known as the Chrome Dino, a browser game developed by Google and built into the Google Chrome web browser, which can be accessed by inputting <code>chrome://dino</code> into the address bar.
        </p>
        <p markdown="1">
            Dino for ESPboy is a basic casual game. Still it's mostly a project to provide you with a fairly complete example of how to make nice games with [ESPboy library][espboy], using cool graphics, 8-bit sound effects, and the onboard NeoPixel LED.
        </p>
        <p >
            Dino is a one-button runner game.<br />
            Just press the <span class="tag">A</span> button to jump and get the highest score possible.
        </p>
    </div>
    <div class="flasher">
        <esp-web-install-button
            id="upload"
            manifest="{{ 'bin/dino.json' | relative_url }}"
            hide-progress>
            <button id="button" slot="activate">Install</button>
            <span slot="unsupported">
                Your browser does not support Web Serial, which is required to connect to ESPboy. Use Google Chrome or Microsoft Edge instead...
            </span>
            <span slot="not-allowed">You are not allowed to use this on HTTP!</span>
        </esp-web-install-button>
        <div class="progress-bar">
            <span style="width:0%"></span>
        </div>
    </div>
    <div class="resources">
        <p class="iconify github" markdown="1">
            [Source code][source]
        </p>
    </div>
</div>


[espboy]: https://m1cr0lab-espboy.github.io/ESPboy
[source]: https://github.com/m1cr0lab-espboy/Dino