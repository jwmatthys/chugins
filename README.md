Joel Matthys' Fork of CCRMA ChuGins
==

### Linux/Advanced Users
To compile and install all chugins:

    git clone https://github.com/jwmatthys/chugins.git
    cd chugins
    make [osx|win32|linux]
    sudo make install

List of New Chugins
--

- **PitchTrack**
  - Monophonic autocorrelation pitch tracker, based on [helmholtz~] by Katja, http://www.katjaas.nl/helmholtz/helmholtz.html
- **GVerb**
  - Good quality stereo reverb with adjustable parameters
- **Mesh2D**
  - STK instrument that simulates a rectilinear, 2-dimensional digital waveguide mesh structure. Basically sounds like striking a metal plate.
- **Spectacle**
  - FFT-based spectral delay and EQ
- **Elliptic**
  - Elliptic filter, capable of very steep slopes or interesting harmonic ripples
- **LADSPA**
  - Load and run LADSPA plugins
- **Sigmund**
  - Sinusoidal analysis and pitch tracker by Miller Puckette
- **ExpDelay**
  - Exponential delay instrument which produces accelerating or deccelerating echoes, inspired by the music of Elainie Lillios
- **Overdrive**
  - Simple distortion which simulates overdriving an amplifier by applying a nonlinear transfer function to the incoming signal

Chugins That I Am Working On
--
- RTcmix's excellent PLACE and MOVE room simulations
