echo "Starting compile..."
sleep 3s
echo "Setup \"help CLI\""
sleep 0.4
echo "Setup \"bash CLI\""
sleep 0.4
echo "Setup \"home-show CLI\""
sleep 0.4
echo "Setup \"clear CLI\""
sleep 0.4
echo "Setup \"youtube.com CLI\""
sleep 0.4
echo "Setup \"github.com CLI\""
sleep 0.4
echo "Setup \"monday.com CLI\""
sleep 0.4
echo "Setup \"whatsapp.com CLI\""
sleep 0.4
mkdir build
cd build
g++ ../src/main.cpp -o bumius
g++ ../src/include/plug.hpp -o plug.o
cd ..
echo "Make compiled file in \"build DIR\ by \"src/main.cpp\""
echo "Compile ended"
