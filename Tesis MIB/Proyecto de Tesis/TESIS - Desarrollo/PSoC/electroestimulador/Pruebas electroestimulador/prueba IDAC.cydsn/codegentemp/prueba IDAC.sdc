# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\Pruebas electroestimulador\prueba IDAC.cydsn\prueba IDAC.cyprj
# Date: Sat, 19 Dec 2020 11:17:35 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\Pruebas electroestimulador\prueba IDAC.cydsn\TopDesign\TopDesign.cysch
# Project: D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\Pruebas electroestimulador\prueba IDAC.cydsn\prueba IDAC.cyprj
# Date: Sat, 19 Dec 2020 11:17:31 GMT
