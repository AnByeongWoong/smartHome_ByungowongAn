# smartHome_ByungowongAn

Project name: making smart home system by using RasberryPi

1. Everyone pursues something more convenient and more comfortable.
- If we apply this topic in home, it make people feel more comfortable and happy.  
2. If we can control all of our electricity in home it can provide people more safe home.
3. Nowdays, energy waste is big problem in world.
- If we can control all of our electrictity in home, we can also save our energy.

# Process of setting
1. Download Raspbian from [https://www.raspberrypi.org/downloads/](raspberrypi.org)
2. Download balenaEtcher [https://www.balena.io/etcher/](Link)
3. Download Rasbian in SDcard by using balenaEtcher
4. After Dowonloading finish, then make file named "ssh" 
    - It is for accesss raspberryPi by using ssh
5. Making file named "wpa_supplicant.conf" then put code like this
<pre>
<code>
ctrl_interface=DIR=/var/run/wpa_supplicant GRUOP=netdev
update_config = 1
network={
    ssid="name of WIFI"
    psk= "password of WIFI"
}
</code>
</pre>
6. After That put your SDcard in your RaspberryPi
7. finally, you can connecn RaspberryPi.
- ssh pi@"IP address of WIFI"
- initial password is "raspberry"
8. That's all
