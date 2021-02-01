#include "item_definitions.hpp"

const std::map<size_t, weapon_info> k_weapon_info =	{
	{WEAPON_KNIFE,{"models/weapons/v_knife_default_ct.mdl", "knife_default_ct"}},
	{WEAPON_KNIFE_T,{"models/weapons/v_knife_default_t.mdl", "knife_t"}},
	{WEAPON_KNIFE_BAYONET, {"models/weapons/v_knife_bayonet.mdl", "bayonet"}},
	{WEAPON_KNIFE_FLIP, {"models/weapons/v_knife_flip.mdl", "knife_flip"}},
	{WEAPON_KNIFE_GUT, {"models/weapons/v_knife_gut.mdl", "knife_gut"}},
	{WEAPON_KNIFE_KARAMBIT, {"models/weapons/v_knife_karam.mdl", "knife_karambit"}},
	{WEAPON_KNIFE_M9_BAYONET, {"models/weapons/v_knife_m9_bay.mdl", "knife_m9_bayonet"}},
	{WEAPON_KNIFE_TACTICAL, {"models/weapons/v_knife_tactical.mdl", "knife_tactical"}},
	{WEAPON_KNIFE_FALCHION, {"models/weapons/v_knife_falchion_advanced.mdl", "knife_falchion"}},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, {"models/weapons/v_knife_survival_bowie.mdl", "knife_survival_bowie"}},
	{WEAPON_KNIFE_BUTTERFLY, {"models/weapons/v_knife_butterfly.mdl", "knife_butterfly"}},
	{WEAPON_KNIFE_PUSH, {"models/weapons/v_knife_push.mdl", "knife_push"}},
	{WEAPON_KNIFE_URSUS,{"models/weapons/v_knife_ursus.mdl", "knife_ursus"}},
	{WEAPON_KNIFE_GYPSY_JACKKNIFE,{"models/weapons/v_knife_gypsy_jackknife.mdl", "knife_gypsy_jackknife"}},
	{WEAPON_KNIFE_STILETTO,{"models/weapons/v_knife_stiletto.mdl", "knife_stiletto"}},
	{WEAPON_KNIFE_WIDOWMAKER,{"models/weapons/v_knife_widowmaker.mdl", "knife_widowmaker"}},
	{WEAPON_KNIFE_CSS,{"models/weapons/v_knife_css.mdl", "knife_css"}},
	{WEAPON_KNIFE_CORD,{"models/weapons/v_knife_cord.mdl", "knife_cord"}},
	{WEAPON_KNIFE_CANIS,{"models/weapons/v_knife_canis.mdl", "knife_canis"}},
	{WEAPON_KNIFE_OUTDOOR,{"models/weapons/v_knife_outdoor.mdl", "knife_outdoor"}},
	{WEAPON_KNIFE_SKELETON,{"models/weapons/v_knife_skeleton.mdl", "knife_skeleton"}},
	{GLOVE_STUDDED_BLOODHOUND,{"models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound.mdl"}},
	{GLOVE_T_SIDE,{"models/weapons/v_models/arms/glove_fingerless/v_glove_fingerless.mdl"}},
	{GLOVE_CT_SIDE,{"models/weapons/v_models/arms/glove_hardknuckle/v_glove_hardknuckle.mdl"}},
	{GLOVE_SPORTY,{"models/weapons/v_models/arms/glove_sporty/v_glove_sporty.mdl"}},
	{GLOVE_SLICK,{"models/weapons/v_models/arms/glove_slick/v_glove_slick.mdl"}},
	{GLOVE_LEATHER_WRAP,{"models/weapons/v_models/arms/glove_handwrap_leathery/v_glove_handwrap_leathery.mdl"}},
	{GLOVE_MOTORCYCLE,{"models/weapons/v_models/arms/glove_motorcycle/v_glove_motorcycle.mdl"}},
	{GLOVE_SPECIALIST,{"models/weapons/v_models/arms/glove_specialist/v_glove_specialist.mdl"}},
	{GLOVE_HYDRA,{"models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound_hydra.mdl"}},
	{GLOVE_BROKENFANG,{"models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound_brokenfang.mdl"}}
};

const std::vector<weapon_name> k_knife_names = {
	{0, "Default"},
	{WEAPON_KNIFE_BAYONET, "Bayonet"},
	{WEAPON_KNIFE_FLIP, "Flip Knife"},
	{WEAPON_KNIFE_GUT, "Gut Knife"},
	{WEAPON_KNIFE_KARAMBIT, "Karambit"},
	{WEAPON_KNIFE_M9_BAYONET, "M9 Bayonet"},
	{WEAPON_KNIFE_TACTICAL, "Huntsman Knife"},
	{WEAPON_KNIFE_FALCHION, "Falchion Knife"},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, "Bowie Knife"},
	{WEAPON_KNIFE_BUTTERFLY, "Butterfly Knife"},
	{WEAPON_KNIFE_PUSH, "Shadow Daggers"},
	{WEAPON_KNIFE_URSUS, "Ursus Knife"},
	{WEAPON_KNIFE_GYPSY_JACKKNIFE, "Navaja Knife"},
	{WEAPON_KNIFE_STILETTO, "Stiletto Knife"},
	{WEAPON_KNIFE_WIDOWMAKER, "Talon Knife"},
	{WEAPON_KNIFE_CSS, "Classic Knife"},
	{WEAPON_KNIFE_CORD, "Cord Knife"},
	{WEAPON_KNIFE_CANIS, "Canis Knife"},
	{WEAPON_KNIFE_OUTDOOR, "Outdoor Knife"},
	{WEAPON_KNIFE_SKELETON, "Skeleton Knife"}
};

const std::vector<weapon_name> k_glove_names = {
	{0, "Default"},
	{GLOVE_T_SIDE, "Default (Terrorists)"},
	{GLOVE_CT_SIDE, "Default (Counter-Terrorists)"},
    {GLOVE_STUDDED_BLOODHOUND, "Bloodhound"},
	{GLOVE_SPORTY, "Sporty"},
	{GLOVE_SLICK, "Slick"},
	{GLOVE_LEATHER_WRAP, "Handwrap"},
	{GLOVE_MOTORCYCLE, "Motorcycle"},
	{GLOVE_SPECIALIST, "Specialist"},
	{GLOVE_HYDRA, "Hydra"},
	{GLOVE_BROKENFANG, "Broken Fang"}
};

const std::vector<weapon_name> k_weapon_names = {
	{WEAPON_KNIFE, "Knife ct"},
	{WEAPON_KNIFE_T, "Knife t"},
	{GLOVE_CT_SIDE, "Glove ct"},
	{GLOVE_T_SIDE, "Glove t"},
	{61, "Usp-s"},
	{32, "P2000"},
	{4, "Glock-18"},
	{2, "Dual berettas"},
	{36, "P250"},
	{3, "Five-Seven"},
	{30, "Tec-9"},
	{63, "Cz75a"},
	{64, "R8 revolver"},
	{1, "Deagle"},

	{34, "Mp9"},
	{17, "Mac-10"},
	{23, "Mp5-sd"},
	{33, "Mp7"},
	{24, "Ump-45"},
	{19, "P90"},
	{26, "PP-Bizon"},

	{7, "Ak-47"},
	{60, "M4a1-s"},
	{16, "M4a4"},
	{8, "Aug"},
	{39, "Sg553"},
	{10, "Famas"},
	{13, "Galil"},

	{40, "Ssg08"},
	{38, "Scar-20"},
	{9, "Awp"},
	{11, "G3sg1"},

	{14, "M249"},
	{28, "Negev"},

	{27, "Mag-7"},
	{35, "Nova"},
	{29, "Sawed-off"},
	{25, "Xm1014"},
};
