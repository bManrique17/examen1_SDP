run.o:	Login.o Gun.o SMG.o Shotgun.o Rifle.o GunFactory.o YoutubeChannel.o Suscriber.o PCDirector.o GamingPCBuilder.o GamingPC.o Client.o TemperatureService.o TemperatureServiceAdapter.o File.o ClientAccount.o SoftwareManager.o FreeLicense.o StudentLicense.o PremiunLicense.o main.o
	g++ Login.o Gun.o SMG.o Shotgun.o Rifle.o GunFactory.o YoutubeChannel.o Suscriber.o PCDirector.o GamingPCBuilder.o GamingPC.o Client.o TemperatureService.o TemperatureServiceAdapter.o File.o ClientAccount.o SoftwareManager.o FreeLicense.o StudentLicense.o PremiunLicense.o main.o -o run

Login.o:	Singleton/Login.h Singleton/Login.cpp
	g++ -c Singleton/Login.cpp

Gun.o:	Factory/Gun.cpp Factory/Gun.h
	g++ -c Factory/Gun.cpp

SMG.o:	Factory/SMG.cpp Factory/SMG.h
	g++ -c Factory/SMG.cpp

Shotgun.o:	Factory/Shotgun.h Factory/Shotgun.cpp
	g++ -c Factory/Shotgun.cpp

Rifle.o:	Factory/Rifle.h Factory/Rifle.cpp
	g++ -c Factory/Rifle.cpp

GunFactory.o:	Factory/GunFactory.cpp Factory/GunFactory.h
	g++ -c Factory/GunFactory.cpp

YoutubeChannel.o:	Observer/YoutubeChannel.cpp Observer/YoutubeChannel.h
	g++ -c Observer/YoutubeChannel.cpp

Suscriber.o:	Observer/Suscriber.cpp Observer/Suscriber.cpp
	g++ -c Observer/Suscriber.cpp

PCDirector.o:	Builder/PCDirector.cpp Builder/PCDirector.h
	g++ -c Builder/PCDirector.cpp

GamingPCBuilder.o:	Builder/GamingPCBuilder.cpp Builder/GamingPCBuilder.h
	g++ -c Builder/GamingPCBuilder.cpp

GamingPC.o:	Builder/GamingPC.cpp Builder/GamingPC.h
	g++ -c Builder/GamingPC.cpp

Client.o:	Adapter/Client.cpp Adapter/Client.h
	g++ -c Adapter/Client.cpp

TemperatureService.o:	Adapter/TemperatureService.cpp Adapter/TemperatureService.h
	g++ -c Adapter/TemperatureService.cpp

TemperatureServiceAdapter.o:	Adapter/TemperatureServiceAdapter.cpp Adapter/TemperatureServiceAdapter.h
	g++ -c Adapter/TemperatureServiceAdapter.cpp

File.o:	State/File.cpp State/File.h
	g++ -c State/File.cpp

ClientAccount.o:	State/ClientAccount.cpp State/ClientAccount.h
	g++ -c State/ClientAccount.cpp

SoftwareManager.o:	State/SoftwareManager.cpp State/SoftwareManager.h
	g++ -c State/SoftwareManager.cpp

FreeLicense.o:	State/FreeLicense.cpp State/FreeLicense.h
	g++ -c State/FreeLicense.cpp

StudentLicense.o:	State/StudentLicense.cpp State/StudentLicense.h
	g++ -c State/StudentLicense.cpp

PremiunLicense.o:	State/PremiunLicense.cpp State/PremiunLicense.h
	g++ -c State/PremiunLicense.cpp

main.o:	main.cpp
	g++ -c main.cpp