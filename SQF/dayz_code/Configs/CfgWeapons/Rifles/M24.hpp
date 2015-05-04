class M24_DZ : M24
{
	model = "ca\weapons\m24_green.p3d";
	displayName = $STR_DZ_WPN_M24_NAME;
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Ghillie"
		};
		
		Attachment_Ghillie = "M24_Gh_DZ";
	};
};

class M24_Gh_DZ : M24_DZ
{
	model = "z\addons\dayz_communityweapons\m24\m24_ghillie.p3d";
	displayName = $STR_DZ_WPN_M24_GH_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M24_DZ'] call player_removeAttachment";
		};
	};
};