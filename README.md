This is a tool to take apart and put back together images of Apple II
Sider hard drives. It's intended to work on images pulled from a
scsi2sd. SD cards use 512 byte blocks and the Sider uses 256 byte
blocks which means that the scsi2sd only stores blocks in the lower
half of each SD block. The tool will try to detect whether the sider
image is using 256 byte blocks or 512 byte blocks with the upper half
unused.

FozzTexx  
https://insentricity.com
