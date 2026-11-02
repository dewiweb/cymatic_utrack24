// rea decompile_all
// name: FUN_006f34d0
// address: 0x6f34d0
// body: available
// range: 0x6f34d0-0x6f3692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f34d0(short *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_48 [16];
  undefined4 local_38;
  int local_34;
  short *local_30;
  char local_29;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729939;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  local_38 = param_2;
  if ((0 < param_3) && (0 < param_4)) {
    glBlendFunc(1,0x303,local_18);
    glEnable(0xbe2);
    glGetBooleanv(0xb71,&local_29);
    if (local_29 != '\0') {
      glDisable(0xb71);
    }
    local_8 = 0;
    cVar1 = FUN_006f3900();
    if (cVar1 != '\0') {
      local_28 = *param_1;
      local_1e = param_1[2];
      local_24 = local_30[4] + local_28;
      local_26 = local_30[6] + local_1e;
      local_22 = local_26;
      local_20 = local_28;
      local_1c = local_24;
      local_1a = local_1e;
      iVar2 = FUN_004bb2e0();
      uVar3 = FUN_0040e4d0(local_48);
      FUN_004bb650(uVar3,param_5);
      local_30 = (short *)0x0;
      (**(code **)(local_34 + 0xc))(1,&local_30);
      (**(code **)(local_34 + 4))(0x8892,local_30);
      (**(code **)(local_34 + 0x10))(0x8892,0x10,&local_28,0x88e4);
      uVar3 = *(undefined4 *)(iVar2 + 0x18);
      (**(code **)(local_34 + 0x54))(uVar3,2,0x1402,0,4,0);
      (**(code **)(local_34 + 0x58))(uVar3);
      glDrawArrays(5,0,4);
      (**(code **)(local_34 + 4))(0x8892,0);
      (**(code **)(local_34 + 0x38))(0);
      (**(code **)(local_34 + 0x5c))(uVar3);
      (**(code **)(local_34 + 8))(1,&local_30);
    }
    if (local_29 != '\0') {
      glEnable(0xb71);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

