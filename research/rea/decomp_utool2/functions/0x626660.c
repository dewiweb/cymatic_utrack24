// rea decompile_all
// name: FUN_00626660
// address: 0x626660
// body: available
// range: 0x626660-0x62681d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00626660(uint param_1,int param_2)

{
  undefined4 *puVar1;
  BOOL BVar2;
  undefined4 in_ECX;
  int local_98;
  char *local_88;
  int local_68 [6];
  char *local_50;
  undefined8 local_48;
  uint local_40;
  char local_3c [4];
  undefined1 local_38 [28];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d7c8;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 == 0)))) {
    FUN_00635980();
  }
  else {
    puVar1 = (undefined4 *)FUN_00458890(local_14);
    BVar2 = GetFileAttributesExW((LPCWSTR)*puVar1,GetFileExInfoStandard,local_38);
    if (BVar2 == 0) {
      local_48 = 0;
      local_48._4_4_ = 0;
      local_48._0_4_ = 0;
      local_18 = (uint)local_48;
      local_1c = local_48._4_4_;
    }
    if ((param_2 <= local_1c) && ((param_2 < local_1c || (param_1 < local_18)))) {
      FUN_0062a4d0(in_ECX,0);
      local_8 = 0;
      FUN_0062aec0(&local_48,0x4000);
      local_8._0_1_ = 1;
      FUN_006275d0(in_ECX);
      local_8 = CONCAT31(local_8._1_3_,2);
      if ((*local_88 == '\0') && (*local_50 == '\0')) {
        FUN_00627460(local_18 - param_1,(local_1c - param_2) - (uint)(local_18 < param_1));
        local_40 = local_40 & 0xffffff00;
        (**(code **)(local_68[0] + 0xc))(&local_40,1);
        while ((char)local_40 != '\0') {
          if (((char)local_40 == '\n') || ((char)local_40 == '\r')) {
            if (*(code **)(local_98 + 0x14) == FUN_0062c8e0) {
              local_3c[0] = (char)local_40;
              (**(code **)(local_98 + 0x10))(local_3c,1);
            }
            else {
              (**(code **)(local_98 + 0x14))(local_40);
            }
            FUN_006201e0(local_68,0xffffffff,0xffffffff);
            FUN_00612760();
            local_8 = local_8 & 0xffffff00;
            FUN_0062ade0();
            FUN_0062a3d0();
            goto LAB_00626799;
          }
          local_40 = local_40 & 0xffffff00;
          (**(code **)(local_68[0] + 0xc))(&local_40,1);
        }
      }
      FUN_00612760();
      FUN_0062ade0();
LAB_00626799:
      FUN_0062a430();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

