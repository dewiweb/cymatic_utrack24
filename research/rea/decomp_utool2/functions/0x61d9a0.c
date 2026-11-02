// rea decompile_all
// name: FUN_0061d9a0
// address: 0x61d9a0
// body: available
// range: 0x61d9a0-0x61da32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061d9a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,char param_8)

{
  int *in_ECX;
  undefined8 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_18 = param_1 + -0x76c;
  local_c = 0xffffffff;
  local_1c = param_2;
  local_20 = param_3;
  local_24 = param_4;
  local_28 = param_5;
  local_2c = param_6;
  if (param_8 == '\0') {
    uVar1 = FUN_0061da40();
  }
  else {
    uVar1 = FUN_004ce85b(&local_2c);
  }
  uVar1 = __allmul(uVar1,1000,0);
  *in_ECX = (uint)uVar1 + param_7;
  in_ECX[1] = (int)((ulonglong)uVar1 >> 0x20) + ((int)param_7 >> 0x1f) +
              (uint)CARRY4((uint)uVar1,param_7);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

