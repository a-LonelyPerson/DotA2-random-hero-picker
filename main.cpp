#include <iostream>
#include <time.h>
#include <Windows.h>

int main()
{
	srand(time(NULL));
	const char* Heroes[115] =
	{
		"Earth Shaker",
		"Sven",
		"Tiny",
        	"Kunkka",
		"Beast Master",
		"Dragon Knight",
		"Clockwerk",
		"OmniKnight",
		"Huskar",
		"Alchemist",
		"Beast Master",
		"Treant Protector",
		"IO",
		"Centaur Warrunner",
		"Timbersaw",
		"Bristleback",
		"Tusk",
		"Elder titan",
		"Legion commander",
		"Earth Spirit",
		"Phoenix",
		"Axe",
		"Pudge",
		"Sandking",
		"Slardar",
		"TideHunter",
		"Wraith King",
		"Lifestealer",
		"Night Stalker",
		"Doom",
		"Spirit Breaker",
		"Lycan",
		"Chaos Knight",
		"Undying",
		"Magnus",
		"Abaddon",
		"Underlord",
		"Anti-Mage",
		"Drow Ranger",
		"Juggernaut",
		"Mirana",
		"Morphling",
		"Phantom lancer",
		"Vengfull Spirit",
		"Riki",
		"Sniper",
		"Templar Assassin",
		"Luna",
		"Bounty hunter",
		"Ursa",
		"Gyrocopter",
		"Lone Druid",
		"Naga siren",
		"Troll Warlord",
		"Ember Spirit",
		"Monkey King",
		"Pangolier",
		"Bloodseeker",
		"Shadow Fiend",
		"Razor",
		"Venomancer",
		"Faceless Void",
		"Phantom Assasin",
		"Viper",
		"Clinkz",
		"Broodmother",
		"Weaver",
		"Spectre",
		"Meepo",
		"Nyx Assassin",
		"Slark",
		"Medusa",
		"Terrorblade",
		"Arc Warden",
		"Crystal Maiden",
		"Puck",
		"Storm Spirit",
		"WindRanger",
		"Zeus",
		"Lina",
		"Shadow Shaman",
		"Tinker",
		"Nature Prophet",
		"Enchantress",
		"Jakiro",
		"Chen",
		"Silncer",
		"Ogre-Magi",
		"Rubick",
		"Distruptor",
		"Keeper of the light",
		"Skywrath Mage",
		"Oracle",
		"Techies (plz don't)",
		"Dark Willow",
		"Bane",
		"Lich",
		"Lion",
		"Witch Doctor",
		"Enigma",
		"Necrophos",
		"Warlock",
		"Queen of pain",
		"Death Prophet",
		"Pugna",
		"Dazzle",
		"Leshrac",
		"Darkseer",
		"Batrider",
		"Ancient Apparition",
		"Invoker",
		"Outworld Devourer",
		"Shadow Demon",
		"Visage",
		"Winter Wyvern" 
	};
	while (true)
	{
		system("pause > nul");
		std::cout << Heroes[rand() % 115] << std::endl << std::endl;
	}
}
