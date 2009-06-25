/*
 * File:       art-data.h
 * Summary:    Definitions for unrandom artefacts.
 * Written by: ????
 *
 *  Modified for Crawl Reference by $Author$ on $Date$
 */

/*
 * This file is automatically generated from art-data.txt via
 * util/art-data.pl.  Do not directly edit this file, but rather change
 * art-data.txt.
 *
 * If the unrandart_entry struct is changed or a new artefact property is
 * added to artefact_prop_type, then change art-data.pl so that the
 * art-data.h file it produces matches up with the new structure.
 */

#ifdef ART_DATA_H
#error "art-data.h included twice!"
#endif

#define ART_DATA_H

/* 1: UNRAND_DUMMY1 */
{
    "DUMMY UNRANDART 1", "DUMMY UNRANDART 1", 
    OBJ_UNASSIGNED, 250, 250, 250, BLACK, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 2: UNRAND_SINGING_SWORD */
{
    "Singing Sword", "golden long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +7, +7, YELLOW, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "This blessed weapon loves nothing more than to sing to its owner, whether they want it to or not.", 
    "", 
},

/* 3: UNRAND_TROG */
{
    "Wrath of Trog", "bloodstained battleaxe", 
    OBJ_WEAPONS, WPN_BATTLEAXE, +3, +11, RED, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "This was the favourite weapon of the old god Trog, before it was lost one day. It induces a bloodthirsty berserker rage in anyone who uses it to strike another.", 
    "", 
},

/* 4: UNRAND_VARIABILITY */
{
    "Mace of Variability", "shimmering mace", 
    OBJ_WEAPONS, WPN_MACE, 0, 0, BLACK, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "It is rather unreliable.", 
    "", 
},

/* 5: UNRAND_PRUNE */
{
    "Glaive of Prune", "purple glaive", 
    OBJ_WEAPONS, WPN_GLAIVE, 0, +12, MAGENTA, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "It is the creation of a mad god, and carries a curse which transforms anyone possessing it into a prune. Fortunately, the curse works very slowly, and one can use it briefly with no consequences worse than slightly purple skin and a few wrinkles.", 
    "", 
},

/* 6: UNRAND_POWER */
{
    "Sword of Power", "chunky great sword", 
    OBJ_WEAPONS, WPN_GREAT_SWORD, 0, 0, RED, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "It rewards the powerful with power and the meek with weakness.", 
    "", 
},

/* 7: UNRAND_OLGREB */
{
    "Staff of Olgreb", "green glowing staff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, 0, 0, GREEN, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "It was the magical weapon wielded by the mighty wizard Olgreb before he met his fate somewhere within these dungeons. It increases the ability of its wielder to use venomous magic, and carries magical powers which can be evoked.", 
    "", 
},

/* 8: UNRAND_WUCAD_MU */
{
    "Staff of Wucad Mu", "ephemeral quarterstaff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, 0, 0, BROWN, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "Its power varies in proportion to its wielder's intelligence. Using it can be a bit risky.", 
    "", 
},

/* 9: UNRAND_VAMPIRES_TOOTH */
{
    "Vampire's Tooth", "ivory dagger", 
    OBJ_WEAPONS, WPN_DAGGER, +3, +4, WHITE, 
    {
        SPWPN_VAMPIRICISM, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "It is lethally vampiric.", 
    "", 
},

/* 10: UNRAND_CURSES */
{
    "Scythe of Curses", "warped scythe", 
    OBJ_WEAPONS, WPN_SCYTHE, +13, +13, DARKGREY, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        -1, 0, 0, 
    },
    "", 
    "This weapon carries a terrible and highly irritating curse.", 
    "", 
},

/* 11: UNRAND_TORMENT */
{
    "Sceptre of Torment", "jewelled golden mace", 
    OBJ_WEAPONS, WPN_MACE, +7, +6, YELLOW, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "This truly accursed weapon is an instrument of Hell.", 
    "", 
},

/* 12: UNRAND_ZONGULDROK */
{
    "Sword of Zonguldrok", "bone long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +9, +9, LIGHTGREY, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "This dreadful weapon is used at the user's peril.", 
    "", 
},

/* 13: UNRAND_CEREBOV */
{
    "Sword of Cerebov", "great serpentine sword", 
    OBJ_WEAPONS, WPN_GREAT_SWORD, +6, +6, YELLOW, 
    {
        SPWPN_FLAMING, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        -1, 0, 0, 
    },
    "Eerie flames cover its twisted blade.", 
    "", 
    "", 
},

/* 14: UNRAND_DISPATER */
{
    "Staff of Dispater", "golden staff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, +4, +4, YELLOW, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "This legendary item can unleash the fury of Hell.", 
    "", 
},

/* 15: UNRAND_ASMODEUS */
{
    "Sceptre of Asmodeus", "ruby sceptre", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, +7, +7, RED, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "It carries some of the powers of the arch-fiend Asmodeus.", 
    "", 
},

/* 16: UNRAND_BLOODBANE */
{
    "long sword \"Bloodbane\"", "blackened long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +7, +8, DARKGREY, 
    {
        SPWPN_VORPAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 
        0, -20, 0, 
    },
    "", 
    "", 
    "", 
},

/* 17: UNRAND_FLAMING_DEATH */
{
    "scimitar of Flaming Death", "smoking scimitar", 
    OBJ_WEAPONS, WPN_SCIMITAR, +7, +5, RED, 
    {
        SPWPN_FLAMING, 0, 0, 0, 0, 0, 
        2, -1, 0, 1, 0, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 18: UNRAND_BRILLIANCE */
{
    "mace of Brilliance", "brightly glowing mace", 
    OBJ_WEAPONS, WPN_MACE, +5, +5, WHITE, 
    {
        SPWPN_HOLY_WRATH, 5, 0, 0, 5, 0, 
        0, 0, 0, 0, 1, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, -20, 0, 
    },
    "", 
    "", 
    "", 
},

/* 19: UNRAND_LEECH */
{
    "demon blade \"Leech\"", "runed demon blade", 
    OBJ_WEAPONS, WPN_DEMON_BLADE, +13, +4, MAGENTA, 
    {
        SPWPN_VAMPIRICISM, 0, -1, -1, -1, -1, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        4, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 20: UNRAND_CHILLY_DEATH */
{
    "dagger of Chilly Death", "sapphire dagger", 
    OBJ_WEAPONS, WPN_DAGGER, +5, +7, LIGHTBLUE, 
    {
        SPWPN_FREEZING, 0, 0, 0, 0, 0, 
        -1, 2, 0, 1, 0, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A dagger made of one huge piece of sapphire.", 
    "", 
    "", 
},

/* 21: UNRAND_MORG */
{
    "dagger \"Morg\"", "rusty dagger", 
    OBJ_WEAPONS, WPN_DAGGER, -1, +4, LIGHTRED, 
    {
        SPWPN_PAIN, 0, 0, 0, 5, 0, 
        0, 0, 0, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "An ugly rusty dagger.", 
    "", 
    "Many years ago it was the property of a powerful mage called Boris. He got lost in the Dungeon while seeking the Orb.", 
},

/* 22: UNRAND_FINISHER */
{
    "scythe \"Finisher\"", "blackened scythe", 
    OBJ_WEAPONS, WPN_SCYTHE, +3, +5, DARKGREY, 
    {
        SPWPN_SPEED, 0, 0, 3, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        -1, 0, 0, 
    },
    "A long and sharp scythe, specially modified for combat purposes.", 
    "", 
    "", 
},

/* 23: UNRAND_PUNK */
{
    "sling \"Punk\"", "blue sling", 
    OBJ_WEAPONS, WPN_SLING, +9, +12, LIGHTBLUE, 
    {
        SPWPN_FROST, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A sling made of weird blue leather.", 
    "", 
    "", 
},

/* 24: UNRAND_KRISHNA */
{
    "bow of Krishna \"Sharnga\"", "golden bow", 
    OBJ_WEAPONS, WPN_BOW, +8, +8, YELLOW, 
    {
        SPWPN_SPEED, 0, 0, 0, 0, 3, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A wonderful golden bow.", 
    "", 
    "It once belonged to a foreign god. It works best with special arrows which are not generally available.", 
},

/* 25: UNRAND_SKULLCRUSHER */
{
    "giant club \"Skullcrusher\"", "brutal giant club", 
    OBJ_WEAPONS, WPN_GIANT_CLUB, +0, +5, BROWN, 
    {
        SPWPN_SPEED, 0, 0, 5, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 26: UNRAND_GUARD */
{
    "glaive of the Guard", "polished glaive", 
    OBJ_WEAPONS, WPN_GLAIVE, +5, +8, LIGHTCYAN, 
    {
        SPWPN_ELECTROCUTION, 5, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "This weapon once belonged to Gar Dogh, the guard of a king's treasures. According to legend he was lost somewhere in the Dungeon.", 
},

/* 27: UNRAND_JIHAD */
{
    "sword of Jihad", "crystal sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +12, +10, WHITE, 
    {
        SPWPN_HOLY_WRATH, 0, 3, 0, 0, 0, 
        0, 0, 0, 0, 1, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 
        0, -50, 0, 
    },
    "A long sword made of one huge piece of crystal.", 
    "", 
    "This sword was The Shining One's gift to a worshipper.", 
},

/* 28: UNRAND_HELLFIRE */
{
    "crossbow \"Hellfire\"", "flaming crossbow", 
    OBJ_WEAPONS, WPN_CROSSBOW, +6, +9, LIGHTRED, 
    {
        SPWPN_FLAME, 0, 0, 0, 0, 0, 
        2, -1, 0, 0, 0, 40, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A flaming crossbow, forged in the fires of the Hells.", 
    "", 
    "", 
},

/* 29: UNRAND_DOOM_KNIGHT */
{
    "sword of the Doom Knight", "adamantine great sword", 
    OBJ_WEAPONS, WPN_GREAT_SWORD, +13, +13, BLUE, 
    {
        SPWPN_PAIN, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "An adamantine great sword.", 
    "", 
    "", 
},

/* 30: UNRAND_EOS */
{
    "\"Eos\"", "encrusted morningstar", 
    OBJ_WEAPONS, WPN_MORNINGSTAR, +5, +5, LIGHTCYAN, 
    {
        SPWPN_ELECTROCUTION, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 31: UNRAND_BOTONO */
{
    "spear of the Botono", "ebony spear", 
    OBJ_WEAPONS, WPN_SPEAR, +2, +10, DARKGREY, 
    {
        SPWPN_VAMPIRICISM, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, -30, 0, 
    },
    "", 
    "", 
    "A really dark and malign artefact, which no wise man would even touch.", 
},

/* 32: UNRAND_OCTOPUS_KING */
{
    "trident of the Octopus King", "mangy trident", 
    OBJ_WEAPONS, WPN_TRIDENT, +10, +4, CYAN, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 1, 1, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "This trident was stolen many years ago from the Octopus King's garden by a really unimportant and already dead man. But beware of the Octopus King's wrath!", 
},

/* 33: UNRAND_ARGA */
{
    "mithril axe \"Arga\"", "mithril axe", 
    OBJ_WEAPONS, WPN_WAR_AXE, +10, +6, WHITE, 
    {
        SPWPN_SPEED, 0, 0, 2, 0, 0, 
        0, 0, 0, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A beautiful mithril axe, probably lost by some dwarven hero.", 
    "", 
    "", 
},

/* 34: UNRAND_ELEMENTAL_STAFF */
{
    "Elemental Staff", "black staff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, +3, +1, DARKGREY, 
    {
        SPWPN_PROTECTION, 0, 0, 0, 0, 0, 
        2, 2, 0, 0, 0, 60, 
        0, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 
        0, 2, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "This powerful staff used to belong to the leader of the Guild of Five Elements.", 
},

/* 35: UNRAND_SNIPER */
{
    "hand crossbow \"Sniper\"", "black crossbow", 
    OBJ_WEAPONS, WPN_HAND_CROSSBOW, +10, +0, DARKGREY, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A hand crossbow made of some black material.", 
    "", 
    "", 
},

/* 36: UNRAND_PIERCER */
{
    "longbow \"Piercer\"", "very long metal bow", 
    OBJ_WEAPONS, WPN_LONGBOW, +2, +10, CYAN, 
    {
        SPWPN_VORPAL, 0, -2, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "An exceptionally large metal longbow.", 
    "", 
    "", 
},

/* 37: UNRAND_BLOWGUN_ASSASSIN */
{
    "blowgun of the Assassin", "tiny blowgun", 
    OBJ_WEAPONS, WPN_BLOWGUN, +6, +6, WHITE, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 60, 0, 
    },
    "It is designed for easy concealment, but still packs a nasty punch.", 
    "", 
    "", 
},

/* 38: UNRAND_WYRMBANE */
{
    "Wyrmbane", "scale-covered lance", 
    OBJ_WEAPONS, WPN_SPEAR, +9, +6, GREEN, 
    {
        SPWPN_DRAGON_SLAYING, 5, 0, 0, 0, 0, 
        1, 0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 39: UNRAND_SPRIGGANS_KNIFE */
{
    "Spriggan's Knife", "dainty little knife", 
    OBJ_WEAPONS, WPN_KNIFE, +4, +10, LIGHTCYAN, 
    {
        SPWPN_NORMAL, 0, 4, 0, 0, 4, 
        0, 0, 0, 0, 0, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 50, 0, 
    },
    "A dainty little knife.", 
    "", 
    "This knife was made by Spriggans, or for Spriggans, or possibly from Spriggans. Anyway, it's in some way associated with those fey folk.", 
},

/* 40: UNRAND_PLUTONIUM_SWORD */
{
    "plutonium sword", "glowing long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +12, +16, LIGHTGREEN, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 6, 0, 0, 
        1, -20, 0, 
    },
    "A long sword made of weird glowing metal.", 
    "", 
    "", 
},

/* 41: UNRAND_UNDEADHUNTER */
{
    "great mace \"Undeadhunter\"", "great steel mace", 
    OBJ_WEAPONS, WPN_GREAT_MACE, +7, +7, LIGHTGREY, 
    {
        SPWPN_HOLY_WRATH, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 42: UNRAND_SERPENT_SCOURGE */
{
    "whip \"Serpent-Scourge\"", "forked whip", 
    OBJ_WEAPONS, WPN_WHIP, +5, +10, DARKGREY, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "A double-ended whip made from the cured hides of the Lair of Beasts' deadly grey snakes.", 
    "", 
},

/* 43: UNRAND_ACCURACY */
{
    "knife of Accuracy", "thin dagger", 
    OBJ_WEAPONS, WPN_DAGGER, +27, -1, LIGHTCYAN, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "It is almost unerringly accurate.", 
},

/* 44: UNRAND_CRYSTAL_SPEAR */
{
    "Lehudib's crystal spear", "crystal spear", 
    OBJ_WEAPONS, WPN_SPEAR, +6, +6, GREEN, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "Presumably this relic led to the invention of the famous spell.", 
},

/* 45: UNRAND_IGNORANCE */
{
    "shield of Ignorance", "dull large shield", 
    OBJ_ARMOUR, ARM_LARGE_SHIELD, +5, 0, BROWN, 
    {
        SPARM_NORMAL, 2, 2, 0, -6, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        3, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 46: UNRAND_AUGMENTATION */
{
    "robe of Augmentation", "silk robe", 
    OBJ_ARMOUR, ARM_ROBE, +4, 0, LIGHTRED, 
    {
        SPARM_NORMAL, 0, 0, 2, 2, 2, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A robe made of the finest silk.", 
    "", 
    "", 
},

/* 47: UNRAND_THIEF */
{
    "cloak of the Thief", "tattered cloak", 
    OBJ_ARMOUR, ARM_CLOAK, +1, 0, DARKGREY, 
    {
        SPARM_NORMAL, 0, 2, 0, 0, 2, 
        0, 0, 0, 0, 0, 0, 
        1, 1, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, -3, 
        0, 60, 0, 
    },
    "", 
    "", 
    "It allows its wearer to excel in the arts of thievery.", 
},

/* 48: UNRAND_BULLSEYE */
{
    "shield \"Bullseye\"", "round shield", 
    OBJ_ARMOUR, ARM_SHIELD, +10, 0, RED, 
    {
        SPARM_NORMAL, 0, -5, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 49: UNRAND_DYROVEPREVA */
{
    "crown of Dyrovepreva", "jewelled bronze crown", 
    OBJ_ARMOUR, ARM_CAP, +3, 0, BROWN, 
    {
        SPARM_NORMAL, 0, 0, 0, 2, 0, 
        0, 0, 1, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 
        0, 0, 0, 
    },
    "A large crown of dull bronze, set with a dazzling array of gemstones.", 
    "", 
    "", 
},

/* 50: UNRAND_MISFORTUNE */
{
    "robe of Misfortune", "fabulously ornate robe", 
    OBJ_ARMOUR, ARM_ROBE, -5, 0, MAGENTA, 
    {
        SPARM_NORMAL, 0, -4, -2, -2, -2, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 1, 0, 
        0, 0, 5, 0, 0, 
        1, -80, 0, 
    },
    "A splendid flowing robe of fur and silk.", 
    "", 
    "", 
},

/* 51: UNRAND_FLASH */
{
    "cloak of Flash", "vibrating cloak", 
    OBJ_ARMOUR, ARM_CLOAK, +3, 0, RED, 
    {
        SPARM_NORMAL, 0, 4, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 1, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A vibrating cloak.", 
    "", 
    "", 
},

/* 52: UNRAND_BOOTS_ASSASSIN */
{
    "boots of the Assassin", "soft boots", 
    OBJ_ARMOUR, ARM_BOOTS, +2, 0, BROWN, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 3, 
        0, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 80, 0, 
    },
    "Some soft boots.", 
    "", 
    "These boots were specially designed by the Assassin's Guild.", 
},

/* 53: UNRAND_LEAR */
{
    "Lear's chain mail", "golden chain mail", 
    OBJ_ARMOUR, ARM_CHAIN_MAIL, -1, 0, YELLOW, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, -3, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 
        -1, 0, 0, 
    },
    "A chain mail made of pure gold.", 
    "", 
    "", 
},

/* 54: UNRAND_ZHOR */
{
    "skin of Zhor", "smelly skin", 
    OBJ_ARMOUR, ARM_ANIMAL_SKIN, +4, 0, BROWN, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 2, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "The skin of some strange animal.", 
    "", 
    "", 
},

/* 55: UNRAND_SALAMANDER */
{
    "salamander hide armour", "red leather armour", 
    OBJ_ARMOUR, ARM_LEATHER_ARMOUR, +3, 0, RED, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        2, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A leather armour made of a salamander's skin.", 
    "", 
    "", 
},

/* 56: UNRAND_WAR */
{
    "gauntlets of War", "thick gauntlets", 
    OBJ_ARMOUR, ARM_GLOVES, +3, 0, BROWN, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 3, 3, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 57: UNRAND_RESISTANCE */
{
    "shield of Resistance", "bronze shield", 
    OBJ_ARMOUR, ARM_SHIELD, +3, 0, LIGHTRED, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        1, 1, 0, 0, 0, 40, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A bronze shield.", 
    "", 
    "", 
},

/* 58: UNRAND_FOLLY */
{
    "robe of Folly", "dull robe", 
    OBJ_ARMOUR, ARM_ROBE, -1, 0, LIGHTGREY, 
    {
        SPARM_NORMAL, 0, 0, 0, -5, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 
        2, 0, 0, 
    },
    "A dull grey robe.", 
    "", 
    "", 
},

/* 59: UNRAND_MAXWELL */
{
    "Maxwell's patent armour", "weird-looking armour", 
    OBJ_ARMOUR, ARM_PLATE_MAIL, +10, 0, LIGHTGREEN, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 1, 
        0, 0, 0, 0, 0, 
        -1, 0, 0, 
    },
    "A weird-looking armour.", 
    "", 
    "", 
},

/* 60: UNRAND_DRAGONMASK */
{
    "mask of the Dragon", "blue mask", 
    OBJ_ARMOUR, ARM_CAP, 0, 0, BLUE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 40, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 2, 2, 
        0, 0, 0, 
    },
    "A blue mask.", 
    "", 
    "", 
},

/* 61: UNRAND_NIGHT */
{
    "robe of Night", "black robe", 
    OBJ_ARMOUR, ARM_ROBE, +4, 0, DARKGREY, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 30, 
        1, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 50, 0, 
    },
    "A long black robe made of strange glossy material.", 
    "", 
    "According to legend, this robe was the gift of Ratri the Goddess of the Night to one of her followers.", 
},

/* 62: UNRAND_DRAGON_KING */
{
    "armour of the Dragon King", "shiny dragon armour", 
    OBJ_ARMOUR, ARM_GOLD_DRAGON_ARMOUR, +5, 0, YELLOW, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 63: UNRAND_ALCHEMIST */
{
    "hat of the Alchemist", "dirty hat", 
    OBJ_ARMOUR, ARM_WIZARD_HAT, +2, 0, MAGENTA, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        1, 1, 1, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A dirty hat.", 
    "", 
    "", 
},

/* 64: UNRAND_FENCERS_GLOVES */
{
    "Fencer's gloves", "silk gloves", 
    OBJ_ARMOUR, ARM_GLOVES, +2, 0, WHITE, 
    {
        SPARM_NORMAL, 0, 3, 0, 0, 3, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 5, 0, 
        0, 0, 0, 
    },
    "A pair of gloves made of white silk.", 
    "", 
    "", 
},

/* 65: UNRAND_STARLIGHT */
{
    "cloak of Starlight", "phosphorescent cloak", 
    OBJ_ARMOUR, ARM_CLOAK, 0, 0, WHITE, 
    {
        SPARM_NORMAL, 0, 4, 0, 0, 0, 
        0, 1, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, -30, 0, 
    },
    "A phosphorescent cloak.", 
    "", 
    "A cloak woven of pure light beams.", 
},

/* 66: UNRAND_RATSKIN_CLOAK */
{
    "ratskin cloak", "motley cloak", 
    OBJ_ARMOUR, ARM_CLOAK, +1, 0, LIGHTRED, 
    {
        SPARM_NORMAL, 0, 0, 0, -1, -1, 
        0, 0, 0, 1, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "An enchantress with a magic loom and way too much time on her hands stitched this cloak from the hides of hundreds of rats, most of them orange. It's a bit awkward to wear and looks rather foolish, but it provides excellent protection from rats of all kinds.", 
},

/* 67: UNRAND_AIR */
{
    "amulet of the Air", "sky-blue amulet", 
    OBJ_JEWELLERY, AMU_CONTROLLED_FLIGHT, 0, 0, LIGHTCYAN, 
    {
        0, 0, 3, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 50, 0, 
    },
    "A sky-blue amulet.", 
    "", 
    "", 
},

/* 68: UNRAND_SHADOWS */
{
    "ring of Shadows", "black ring", 
    OBJ_JEWELLERY, RING_INVISIBILITY, 0, 0, DARKGREY, 
    {
        0, 0, 4, 0, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, -3, 0, 
        0, 40, 0, 
    },
    "", 
    "", 
    "", 
},

/* 69: UNRAND_CEKUGOB */
{
    "amulet of Cekugob", "crystal amulet", 
    OBJ_JEWELLERY, AMU_WARDING, 0, 0, LIGHTGREY, 
    {
        0, 1, 1, 0, 0, 0, 
        0, 0, 1, 1, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 
        0, 2, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 70: UNRAND_FOUR_WINDS */
{
    "amulet of the Four Winds", "jade amulet", 
    OBJ_JEWELLERY, AMU_CLARITY, 0, 0, LIGHTGREEN, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 100, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 71: UNRAND_BLOODLUST */
{
    "necklace of Bloodlust", "blood-stained necklace", 
    OBJ_JEWELLERY, AMU_RAGE, 0, 0, RED, 
    {
        0, 0, 0, 2, -2, 0, 
        0, 0, 0, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        1, 0, 0, 0, 3, 
        3, -20, 0, 
    },
    "", 
    "", 
    "", 
},

/* 72: UNRAND_SHAOLIN */
{
    "ring of Shaolin", "jade ring", 
    OBJ_JEWELLERY, RING_EVASION, +8, 0, LIGHTGREEN, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 73: UNRAND_ROBUSTNESS */
{
    "ring of Robustness", "steel ring", 
    OBJ_JEWELLERY, RING_PROTECTION, +8, 0, LIGHTGREY, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 74: UNRAND_MAGE */
{
    "ring of the Mage", "sapphire ring", 
    OBJ_JEWELLERY, RING_WIZARDRY, 0, 0, LIGHTBLUE, 
    {
        0, 0, 0, 0, 3, 0, 
        0, 0, 0, 0, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

/* 75: UNRAND_SHIELDING */
{
    "brooch of Shielding", "shield-shaped amulet", 
    OBJ_JEWELLERY, AMU_WARDING, 0, 0, LIGHTBLUE, 
    {
        0, 4, 4, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "A shield-shaped amulet.", 
    "", 
    "Back in the good old days, every adventurer had one of these handy devices. That, and a pony.", 
},

/* 76: UNRAND_DUMMY2 */
{
    "DUMMY UNRANDART 2", "DUMMY UNRANDART 2", 
    OBJ_UNASSIGNED, 250, 250, 250, BLACK, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 
    },
    "", 
    "", 
    "", 
},

