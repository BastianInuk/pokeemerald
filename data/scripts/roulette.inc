MauvilleCity_GameCorner_EventScript_2A5AB1:: @ 82A5AB1
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 0
	getpricereduction 2
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2A5B0D
	addvar VAR_0x8004, 128
	goto MauvilleCity_GameCorner_EventScript_2A5B0D
	end

MauvilleCity_GameCorner_EventScript_2A5ADF:: @ 82A5ADF
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 1
	getpricereduction 2
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2A5B0D
	addvar VAR_0x8004, 128
	goto MauvilleCity_GameCorner_EventScript_2A5B0D
	end

MauvilleCity_GameCorner_EventScript_2A5B0D:: @ 82A5B0D
	special PlayRoulette
	waitstate
	end
	
gUnknown_082A5B12:: @ 82A5B12
	.string "The minimum wager at this table\n"
	.string "is {STR_VAR_1}. Do you want to play?$"

gUnknown_082A5B4E:: @ 82A5B4E
	.string "You don't have enough COINS.$"

gUnknown_082A5B6B:: @ 82A5B6B
	.string "Special rate table right now!$"

gUnknown_082A5B89:: @ 82A5B89
	.string "Place your wager with the + Control\n"
	.string "Pad, then press the A Button.$"

gUnknown_082A5BCB:: @ 82A5BCB
	.string "It's a hit!$"

gUnknown_082A5BD7:: @ 82A5BD7
	.string "Jackpot!$"

gUnknown_082A5BE0:: @ 82A5BE0
	.string "Nothing doing!$"

gUnknown_082A5BEF:: @ 82A5BEF
	.string "You've won {STR_VAR_1} COINS!$"

gUnknown_082A5C04:: @ 82A5C04
	.string "No COINS left…$"

gUnknown_082A5C13:: @ 82A5C13
	.string "Keep playing?$"

gUnknown_082A5C21:: @ 82A5C21
	.string "The ROULETTE board will be cleared.$"

gUnknown_082A5C45:: @ 82A5C45
	.string "You don't have a COIN CASE.$"

gUnknown_082A5C61:: @ 82A5C61
	.string "Your COIN CASE is full!\n"
	.string "Coins can be exchanged for prizes.$"
