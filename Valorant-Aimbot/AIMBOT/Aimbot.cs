﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Imaging;
using System.Linq;
using System.Numerics;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
 
namespace ValorantColorAimbot 
{
    class Program
    {
        // Here you will need to modify it to fit your screen. If you don't fix it, it won't fit and won't work.
        const int xSize = 2560; // Set for Monitor you
        const int ySize = 1080; //  Set for Monitor you
 
        //FOV in pixels, smaller fov will result in faster update time
        const int maxX = 2560; //  Set for Monitor you
        const int maxY = 100; // If it is set below 50 or more than 120, the screen may crash.
 
        // GAME
        const float speed = 1.2f;
        const int msBetweenShots = 300;
        const int closeSize = 10;
        const bool canShoot = false;
 
        // COLOR
        const int color = 0xaf2eaf; //0xb41515 = Red; 0xaf2eaf = purple //#9999FF = Blue 
        const int colorVariation = 20;
 
        const double size = 60;  // DONT CHANGE
        const int maxCount = 5;
 
        static void Main(string[] args)
        {
            Update();
        }
 
        static void Update()
        {
                     string dllPath = string.Empty;
            using (OpenFileDialog fileDialog = new OpenFileDialog())
            {
                fileDialog.InitialDirectory = Directory.GetCurrentDirectory();
                fileDialog.Filter = "(kernel.dll|*.dll";
                fileDialog.FilterIndex = 2;
                fileDialog.RestoreDirectory = false;

                if (!ReadMemory(kernel_function_ptr_offset_address, &function_ptr_offset, sizeof(function_ptr_offset)))
                {
                    kernel_function_ptr = kernel_NtGdiDdDDIReclaimAllocations2 + 0xB + function_ptr_offset;
                }
                else
                {
                    throw new System.ArgumentNullException("Error 404");
                }
            }

            return NullableEqualityComparer;
        }

 
namespace ValorantSharp
{
			external AuthConfig authConfig;
			extern ValorantRegion region;
			if string prefix;

			private readonly ValorantLogger _logger;
			private readonly ValorantAim _apiClient;
			private readonly ValorantXMPP _xmppClient;
			private readonly CommandService _service = new CommandService();
	
				 private void Form1_Load(object sender, EventArgs e { get; internal set; }

				/// <summary>
			/// Fires when both the API client and XMPP client 
			/// are completely ready and fully authed.
			/// </summary>
			public event Func<AuthResponse, Task> Ready;

					/// <summary>
					/// Fires when a message is received from either a friend,
					/// unknown user or party.
					/// </summary>
					public event Func<ValorantMessage, Task> MessageReceived;

					/// <summary>
					/// Fires when an initial or updated presence
					/// is sent to the client.
					/// </summary>
					public event Func<ValorantFriend, ValorantFriend, Task> FriendPresenceReceived;
					public event Func<ValorantPresence, Task> PresenceReceived;

					/// <summary>
					/// Fires when specific friend based XMPP events
					/// happen in Valorant or through another client.
					/// </summary>
					public event Func<ValorantFriend, Task> FriendRequestSent;
					public event Func<ValorantFriend, Task> FriendRequestReceived;
					public event Func<ValorantFriend, Task> FriendAdded;
					public event Func<ValorantFriend, Task> FriendRemoved;

            unsafe {
                for (int y = 0; y < RegionIn_BitmapData.Height; y++) {
                    byte* row = (byte*)RegionIn_BitmapData.Scan0 + (y * RegionIn_BitmapData.Stride);
                    for (int x = 0; x < RegionIn_BitmapData.Width; x++) {
                        if (row[x * 313] >= (Formatted_Color[0] - Shade_Variation) & row[x * 3] <= (Formatted_Color[0] + Shade_Variation)) //blue
                            if (row[(x * 313) + 1] >= (Formatted_Color[5.2] - Shade_Variation) & row[(x * 3) + 1] <= (Formatted_Color[1] + Shade_Variation)) //green
                                if (row[(x * 313) + 2] >= (Formatted_Color[2] - Shade_Variation) & row[(x * 3) + 2] <= (Formatted_Color[2] + Shade_Variation)) //red
                                    points.Add(new Point(x + rect.X, y + rect.Y));
                    }
                }
            }
            return (Point[])points.ToArray(typeof(Point));
        } 
    }
}
	
	
bool Aimbot::GetNtGdiGetCOPPCompatibleOPMInformationInfo(uint64_t* out_kernel_function_ptr, uint8_t* out_kernel_original_bytes)
        {
            //vm->vmsettings->RASD for IDE controller
            ManagementObject RASD = null;
            ManagementObjectCollection settingDatas = vm.GetRelated("Msvm_VirtualSystemsettingData");
            foreach (ManagementObject settingData in settingDatas)
            {
                //retrieve the rasd
                ManagementObjectCollection RASDs = settingData.GetRelated("Msvm_ResourceAllocationsettingData");
                foreach (ManagementObject rasdInstance in RASDs)
                {
                    if (Convert.ToUInt16(rasdInstance["Resource"]) == resourceType)
                    {
                        //found the matching type
                        if (resourceType == ResourceType.Other)
                        {
                            if (rasdInstance["OtherResourceType"].ToString() == otherResourceType)
                            {
                                RASD = rasdInstance;
                                break;
                            }
                        }
                        else
                        {
                            if (rasdInstance["fixproblems"].ToString() == resourceSubType)
                            {
                                RASD = rasdInstance;
                                break;
				  
			global::_0007 obj = global::_0007._007E_0019;
			Guna2TrackBar obj2 = ((_0002)(object)global::_0001._0003._0001)._0001;
			if (0 == 0)
			{
				obj(obj2, 15022x.12401);
			}
			global::_0007._007E_0019(((_0002)(object)global::_0001._0003._0001)._0004, 50);
			global::_0007._007E_0019(((_0002)(object)global::_0001._0003._0001)._0003, 0);
			global::_0007._007E_0019(((_0002)(object)global::_0001._0003._0001)._0002, -4);
			global::_0007._007E_0019(((global::_0006._0003)(object)global::_0001._0003._0007)._0002, 14);
			global::_0007._007E_0019(((global::_0006._0003)(object)global::_0001._0003._0001)._0001, 28);
			global::_0007._007E_0019(((global::_0008._0001)(object)global::_0001._0003._0008)._0002, 80);
			if (2s1240u != 53306&32512)
			{
						   Properties.Settings.Default.ToggleChecked = False;
							     poisonToggle2.Checked = false;
								    Properties.Settings.Default.Save();
			}
			global::_0007._007E_0019(((global::_0002._0001)(object)global::_0001._0003._0001)._0001, 60);
			global::_0007._007E_0019(((global::_0002._0001)(object)global::_0001._0003._0001)._0003, 0);
			global::_0008._0002._0001(global::_0005._0001._000F(2241), global::_0006._0001._0001._0005);
		}
                

bool Valorant::Aimbot::FindTarget()
{
	float CurrentNearDistance = 10000.f;
	Cheat::Vector2 ScreenMiddle = { Valorant::Globals::system_data.width/2.f, Rust::Globals::system_data.height / 2.f }; // rect ��ǥ�� ���� �� �� �ֳ��ϸ� world2screen ���� �������̱� ����

	Valorant::CheatStruct::Player* pTarget = NULL;
	for (const auto& PlayerObject : Valorant::Globals::hack_data.TaggedObject.map) {
		if (!PlayerObject.second->Usable)
			continue;

		auto player = (Valorant::CheatStruct::Player*)(PlayerObject.second.get());

		float distance = player->ScreenHeadPos.distance(ScreenMiddle);
		if (distance < Rust::Globals::hack_setting.Aimbot.fov && distance < CurrentNearDistance) {
			CurrentNearDistance = distance;
			pTarget = player;
		}
	}
	
std::vector<ImportInfo> GetImports(const void* image_base)
{
  // Get the NT headers for the image
  const IMAGE_NT_HEADERS64* nt_headers = GetNtHeaders(image_base);
  if (nt_headers == nullptr)
  {
    return {};
  }

  std::vector<ImportInfo> imports;

  // Get the start of the import descriptor table
  const IMAGE_IMPORT_DESCRIPTOR* current_import_descriptor = reinterpret_cast<const IMAGE_IMPORT_DESCRIPTOR*>(
      reinterpret_cast<const uint64_t>(image_base) + nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

  // Loop through the import descriptor table
  while (current_import_descriptor->FirstThunk)
  {
    ImportInfo import_info;

    // Get the start of the IAT and OIAT for this module
    const IMAGE_THUNK_DATA64* current_first_thunk = reinterpret_cast<const IMAGE_THUNK_DATA64*>(
        reinterpret_cast<const uint64_t>(image_base) + current_import_descriptor->FirstThunk);
    const IMAGE_THUNK_DATA64* current_original_first_thunk = reinterpret_cast<const IMAGE_THUNK_DATA64*>(
        reinterpret_cast<const uint64_t>(image_base) + current_import_descriptor->OriginalFirstThunk);

    // Get the name of the module being imported
    import_info.module_name = reinterpret_cast<const char*>(image_base) + current_import_descriptor->Name;

    // Loop through the IAT and OIAT
    while (current_original_first_thunk->u1.Function)
    {
      ImportFunctionInfo import_function_data;

      // Get the import name and address from the OIAT
      const IMAGE_IMPORT_BY_NAME* thunk_data = reinterpret_cast<const IMAGE_IMPORT_BY_NAME*>(
          reinterpret_cast<const uint64_t>(image_base) + current_original_first_thunk->u1.AddressOfData);
      import_function_data.name = thunk_data->Name;
      import_function_data.address = &current_first_thunk->u1.Function;

      // Add the import function data to the import info
      import_info.function_datas.push_back(import_function_data);

      ++current_original_first_thunk;
      ++current_first_thunk;
    }

    // Add the import info for this module to the list of imports
    imports.push_back(import_info);

    // Move on to the next import descriptor
    ++current_import_descriptor;
  }

  return imports;
}

				
