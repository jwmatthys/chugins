"./filter.so" => string plugname;
"lpf" => string labelname;
if (me.args()>0) me.arg(0) => plugname;
if (me.args()>1) me.arg(1) => labelname;
Noise n => Ladspa plugin => dac;
plugname => plugin.load;
labelname => plugin.label;
//plugin.info();
<<< plugin.set(0,500) >>>;
//second => now;
//<<< plugin.set(0,-50) >>>;
//second => now;
//<<< plugin.set(0,0) >>>;
//second => now;