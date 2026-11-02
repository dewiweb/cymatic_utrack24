// rea decompile_all
// name: FUN_006eac00
// address: 0x6eac00
// body: available
// range: 0x6eac00-0x6eacc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eac00(undefined4 param_1,undefined4 param_2)

{
  HWND hWnd;
  int *in_ECX;
  undefined4 extraout_ECX;
  HWND in_EDX;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  tagRECT local_2c;
  tagRECT local_1c;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_2c;
  GetWindowRect(in_EDX,&local_1c);
  if ((undefined **)*in_ECX == juce::HWNDComponentPeer::vftable) {
    hWnd = (HWND)in_ECX[0xe];
  }
  else {
    hWnd = (HWND)(*(code *)((undefined **)*in_ECX)[1])();
  }
  GetWindowRect(hWnd,&local_2c);
  switch(param_1) {
  case 0x200:
  case 0x201:
  case 0x202:
  case 0x204:
  case 0x205:
  case 0x207:
  case 0x208:
    fVar1 = (float)(((short)param_2 - local_2c.left) + local_1c.left);
    fVar2 = (float)(((short)((uint)param_2 >> 0x10) - local_2c.top) + local_1c.top);
    uVar3 = FUN_00687700(fVar1,fVar2);
    uVar4 = extraout_ECX;
    FUN_00687140(extraout_ECX,uVar3);
    FUN_0068d900(0,uVar4,uVar3,fVar1,fVar2);
  }
  __security_check_cookie(local_c ^ (uint)&local_2c);
  return;
}

