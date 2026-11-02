// rea decompile_all
// name: FUN_004a93c0
// address: 0x4a93c0
// body: available
// range: 0x4a93c0-0x4a9593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a93c0(short param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int *local_60;
  undefined4 local_5c;
  undefined1 auStack_44 [4];
  int *local_40;
  undefined4 local_3c;
  WINDOWPLACEMENT local_38;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_44;
  DAT_00c8a9b0 = 0xffffffff;
  uVar1 = GetAsyncKeyState(0x10);
  uVar2 = GetAsyncKeyState(0x11);
  uVar5 = uVar1 >> 0xf | 2;
  if ((uVar2 & 0x8000) == 0) {
    uVar5 = (uint)(uVar1 >> 0xf);
  }
  uVar1 = GetAsyncKeyState(0x12);
  uVar6 = uVar5 | 4;
  if ((uVar1 & 0x8000) == 0) {
    uVar6 = uVar5;
  }
  uVar1 = GetAsyncKeyState(0xa5);
  piVar4 = local_40;
  uVar5 = uVar6 & 0xfffffff9;
  if ((uVar1 & 0x8000) == 0) {
    uVar5 = uVar6;
  }
  DAT_00c8a9dc = uVar5 | DAT_00c8a9dc & 0x70;
  if ((undefined **)*local_40 == juce::HWNDComponentPeer::vftable) {
    local_38.length = 0x2c;
    local_5c = 0x4a9466;
    GetWindowPlacement((HWND)local_40[0xe],&local_38);
    cVar7 = local_38.showCmd == 2;
  }
  else {
    cVar7 = (*(code *)((undefined **)*local_40)[0xd])();
  }
  if (cVar7 != '\0') {
    FUN_006e6400(&local_60);
    FUN_006ce9f0(1);
    FUN_0068ce30();
    cVar7 = FUN_0068da80();
    if (cVar7 == '\0') goto LAB_004a9574;
  }
  local_5c = 0x4a94b0;
  FUN_006cb4b0();
  local_60 = local_40;
  local_5c = local_3c;
  FUN_004b0b90(0);
  local_5c = 0x4a94d8;
  piVar3 = (int *)FUN_006cf2f0();
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)piVar4[1];
  }
  piVar4 = (int *)FUN_006cecc0();
  if (piVar4 != (int *)0x0) {
    for (; piVar4 != piVar3; piVar3 = (int *)piVar3[3]) {
      if (piVar3 == (int *)0x0) {
        cVar7 = (**(code **)(*piVar4 + 0x9c))();
        if (cVar7 == '\0') {
          if (param_1 == 2) {
            piVar4 = (int *)FUN_006cecc0();
            (**(code **)(*piVar4 + 0xa0))();
            __security_check_cookie(local_c ^ (uint)auStack_44);
            return;
          }
          FUN_0048c530();
          FUN_006ca2a0();
          __security_check_cookie(local_c ^ (uint)auStack_44);
          return;
        }
        break;
      }
    }
  }
  DAT_00c8a9c8 = DAT_00c8a9dc;
  FUN_006ccad0();
LAB_004a9574:
  __security_check_cookie(local_c ^ (uint)auStack_44);
  return;
}

