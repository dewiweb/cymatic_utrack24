// rea decompile_all
// name: FUN_004a9720
// address: 0x4a9720
// body: available
// range: 0x4a9720-0x4a984a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9720(void)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  char cVar3;
  undefined1 local_68 [20];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  void *local_44;
  WINDOWPLACEMENT local_40;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703b02;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (void *)DAT_00c8a67c;
  local_14 = uVar1;
  if (DAT_00c8a67c == 0) {
    local_44 = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  local_44 = (void *)DAT_00c8a67c;
  FUN_006ca940(uVar1);
  if ((char)in_ECX[0x16] != '\0') {
    if ((undefined **)*in_ECX == juce::HWNDComponentPeer::vftable) {
      local_40.length = 0x2c;
      GetWindowPlacement((HWND)in_ECX[0xe],&local_40);
      cVar3 = local_40.showCmd == 2;
    }
    else {
      cVar3 = (*(code *)((undefined **)*in_ECX)[0xd])();
    }
    if (cVar3 == '\0') {
      piVar2 = (int *)FUN_006d2360(local_68);
      FUN_006cac60(piVar2[2] / 2 + *piVar2,piVar2[3] / 2 + piVar2[1]);
      FUN_004b2650(&local_54);
      SetWindowPos((HWND)in_ECX[0xe],(HWND)0x0,local_54,local_50,local_4c,local_48,0x614);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

