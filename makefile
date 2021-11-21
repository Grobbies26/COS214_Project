prjct.out: main.o BMode.o Builder.o Button.o Command.o Crewdragon.o Decommissioned.o Dragonsc.o Falcon9.o Falcon9core.o Falcon9CrewDragon.o Falcon9DragonSC.o Falcon9Starlink.o Heavyfalcon.o HeavyFalconCrewDragon.o HeavyFalconDragonSC.o InUse.o Laser.o Launch.o Links.o Merlinengine.o NMode.o Node.o Normalmode.o Payload.o ReadyToTest.o ReadyToUse.o Refurbishing.o Rocket.o SatelliteIterator.o Ship.o SimBackup.o SimStateInfo.o SimStore.o Simulation.o Singlevacuummerlin.o SpaceXUser.o Starlink.o State.o Storesim.o Testing.o Testmode.o TMode.o
	g++ main.o BMode.o Builder.o Button.o Command.o Crewdragon.o Decommissioned.o Dragonsc.o Falcon9.o Falcon9core.o Falcon9CrewDragon.o Falcon9DragonSC.o Falcon9Starlink.o Heavyfalcon.o HeavyFalconCrewDragon.o HeavyFalconDragonSC.o InUse.o Laser.o Launch.o Links.o Merlinengine.o NMode.o Node.o Normalmode.o Payload.o ReadyToTest.o ReadyToUse.o Refurbishing.o Rocket.o SatelliteIterator.o Ship.o SimBackup.o SimStateInfo.o SimStore.o Simulation.o Singlevacuummerlin.o SpaceXUser.o Starlink.o State.o Storesim.o Testing.o Testmode.o TMode.o -o prjct.out

main.o: main.cpp
	g++ -c main.cpp

BMode.o: BMode.cpp
	g++ -c BMode.cpp

Builder.o: Builder.cpp
	g++ -c Builder.cpp

Button.o: Button.cpp
	g++ -c Button.cpp

Command.o: Command.cpp
	g++ -c Command.cpp

Crewdragon.o: Crewdragon.cpp
	g++ -c Crewdragon.cpp

Decommissioned.o: Decommissioned.cpp
	g++ -c Decommissioned.cpp

Dragonsc.o: Dragonsc.cpp
	g++ -c Dragonsc.cpp

Falcon9.o: Falcon9.cpp
	g++ -c Falcon9.cpp

Falcon9core.o: Falcon9core.cpp
	g++ -c Falcon9core.cpp

Falcon9CrewDragon.o: Falcon9CrewDragon.cpp
	g++ -c Falcon9CrewDragon.cpp

Falcon9DragonSC.o: Falcon9DragonSC.cpp
	g++ -c Falcon9DragonSC.cpp

Falcon9Starlink.o: Falcon9Starlink.cpp
	g++ -c Falcon9Starlink.cpp

Heavyfalcon.o: Heavyfalcon.cpp
	g++ -c Heavyfalcon.cpp

HeavyFalconCrewDragon.o: HeavyFalconCrewDragon.cpp
	g++ -c HeavyFalconCrewDragon.cpp

HeavyFalconDragonSC.o: HeavyFalconDragonSC.cpp
	g++ -c HeavyFalconDragonSC.cpp

InUse.o: InUse.cpp
	g++ -c InUse.cpp

Laser.o: Laser.cpp
	g++ -c Laser.cpp

Launch.o: Launch.cpp
	g++ -c Launch.cpp

Links.o: Links.cpp
	g++ -c Links.cpp

Merlinengine.o: Merlinengine.cpp
	g++ -c Merlinengine.cpp

NMode.o: NMode.cpp
	g++ -c NMode.cpp

Node.o: Node.cpp
	g++ -c Node.cpp

Normalmode.o: Normalmode.cpp
	g++ -c Normalmode.cpp

Payload.o: Payload.cpp
	g++ -c Payload.cpp

ReadyToTest.o: ReadyToTest.cpp
	g++ -c ReadyToTest.cpp

ReadyToUse.o: ReadyToUse.cpp
	g++ -c ReadyToUse.cpp

Refurbishing.o: Refurbishing.cpp
	g++ -c Refurbishing.cpp

Rocket.o: Rocket.cpp
	g++ -c Rocket.cpp

SatelliteIterator.o: SatelliteIterator.cpp
	g++ -c SatelliteIterator.cpp

Ship.o: Ship.cpp
	g++ -c Ship.cpp

SimBackup.o: SimBackup.cpp
	g++ -c SimBackup.cpp

SimStateInfo.o: SimStateInfo.cpp
	g++ -c SimStateInfo.cpp

SimStore.o: SimStore.cpp
	g++ -c SimStore.cpp

Simulation.o: Simulation.cpp
	g++ -c Simulation.cpp

Singlevacuummerlin.o: Singlevacuummerlin.cpp
	g++ -c Singlevacuummerlin.cpp

SpaceXUser.o: SpaceXUser.cpp
	g++ -c SpaceXUser.cpp

Starlink.o: Starlink.cpp
	g++ -c Starlink.cpp

State.o: State.cpp
	g++ -c State.cpp

Storesim.o: Storesim.cpp
	g++ -c Storesim.cpp

Testing.o: Testing.cpp
	g++ -c Testing.cpp

Testmode.o: Testmode.cpp
	g++ -c Testmode.cpp

TMode.o: TMode.cpp
	g++ -c TMode.cpp


run:
	./prjct.out
	
clean:
	rm -f *.o prjct