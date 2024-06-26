# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover

AUDIO_ENABLE = no           # Audio output

ENCODER_ENABLE = yes        #Enable keyboard encoder
ENCODER_MAP_ENABLE = yes    #Enable encoder multy map

BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
WPM_ENABLE = yes

OLED_ENABLE = yes		   # Enable OLED driver
# OLED_DRIVER = ssd1306	   # Enable ssd1306 OLED driver
# OLED_TRANSPORT = i2c 	   # Enable OLED i2c

DFU_ARGS = -d 0483:df11 -a 0 -s 0x08000000:leave
