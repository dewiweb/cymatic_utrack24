// rea decompile_all
// name: FUN_0043fba0
// address: 0x43fba0
// body: available
// range: 0x43fba0-0x43fcae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043fba0(int param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_434 [4];
  undefined8 local_430;
  int *local_428;
  int *local_424;
  int local_420;
  int local_41c;
  int *local_418;
  int local_414;
  undefined1 auStack_410 [1028];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_434;
  local_418 = param_2;
  local_428 = param_5;
  local_424 = param_6;
  local_430 = 0;
  local_41c = param_3;
  local_420 = param_4;
  local_414 = param_1;
  local_430._0_4_ = 0;
  local_430._4_4_ = 0;
  iVar5 = local_430._4_4_;
  iVar6 = (uint)local_430;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    while( true ) {
      iVar1 = local_414;
      local_430 = CONCAT44(local_430._4_4_,iVar6);
      cVar2 = (**(code **)(**(int **)(local_414 + 8) + 8))();
      if (cVar2 != '\0') break;
      iVar6 = **(int **)(iVar1 + 8);
      uVar3 = FUN_0040e5f0(0x400,0,local_41c,local_420);
      uVar4 = (**(code **)(iVar6 + 0xc))(auStack_410,uVar3);
      if ((int)uVar4 < 1) {
        iVar6 = (uint)local_430;
        break;
      }
      if ((undefined **)*local_418 != juce::WindowsMediaCodec::JuceIStream::vftable) {
        (*(code *)((undefined **)*local_418)[4])(local_418,auStack_410,uVar4,0);
      }
      iVar5 = iVar5 + ((int)uVar4 >> 0x1f) + (uint)CARRY4((uint)local_430,uVar4);
      iVar6 = (uint)local_430 + uVar4;
    }
  }
  if (local_428 != (int *)0x0) {
    *local_428 = iVar6;
    local_428[1] = iVar5;
  }
  if (local_424 != (int *)0x0) {
    *local_424 = iVar6;
    local_424[1] = iVar5;
  }
  __security_check_cookie(local_c ^ (uint)auStack_434);
  return;
}

