// rea decompile_all
// name: FUN_0051b4f0
// address: 0x51b4f0
// body: available
// range: 0x51b4f0-0x51b64c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0051b4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00503650(param_1);
  *(undefined4 *)(in_ECX + 0x48) = param_2;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  local_c = 0;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  local_14 = 0;
  local_10 = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  local_1c = 0;
  local_18 = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  local_24 = 0;
  local_20 = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  local_2c = 0;
  local_28 = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  local_34 = 0;
  local_30 = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  local_3c = 0;
  local_38 = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  iVar1 = *(int *)(in_ECX + 0x2c);
  FUN_0052dce0(local_48);
  uVar2 = FUN_0054fa70(in_ECX + 0x6c,0,local_48,in_ECX,iVar1 + 0x3f8,param_3);
  *(undefined4 *)(in_ECX + 0xdc) = uVar2;
  if (*(int *)(in_ECX + 0xdc) != 0) {
    FUN_00544360();
  }
  return *(int *)(in_ECX + 0xdc) != 0;
}

