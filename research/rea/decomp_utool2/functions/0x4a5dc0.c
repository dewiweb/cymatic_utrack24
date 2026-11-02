// rea decompile_all
// name: FUN_004a5dc0
// address: 0x4a5dc0
// body: available
// range: 0x4a5dc0-0x4a5f55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5dc0(char param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  char cVar8;
  WINDOWPLACEMENT local_40;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703848;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x30))(0,local_14);
  if ((undefined **)*in_ECX == juce::HWNDComponentPeer::vftable) {
    if (((uint)in_ECX[2] >> 3 & 1) == 0) {
      cVar8 = (char)in_ECX[0x16];
    }
    else {
      local_40.length = 0x2c;
      GetWindowPlacement((HWND)in_ECX[0xe],&local_40);
      cVar8 = local_40.showCmd == 3;
    }
  }
  else {
    cVar8 = (*(code *)((undefined **)*in_ECX)[0xf])();
  }
  if (cVar8 != param_1) {
    if ((int *)in_ECX[7] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[7] + 8))();
    }
    *(char *)(in_ECX + 0x16) = param_1;
    if (in_ECX[1] == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_0040de70(in_ECX[1]);
    }
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      puVar6[1] = puVar6[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    if ((char)in_ECX[0x16] == '\0') {
      iVar2 = in_ECX[4];
      iVar3 = in_ECX[3];
      iVar4 = in_ECX[6];
      iVar5 = in_ECX[5];
      if (((uint)in_ECX[2] >> 3 & 1) != 0) {
        ShowWindow((HWND)in_ECX[0xe],1);
      }
      if ((0 < iVar5) && (0 < iVar4)) {
        uVar7 = FUN_004b21a0(iVar3,iVar2,iVar5,iVar4);
        (**(code **)(*in_ECX + 0x18))(uVar7,0);
      }
    }
    else if (((uint)in_ECX[2] >> 3 & 1) == 0) {
      SendMessageW((HWND)in_ECX[0xe],0x1a,0,0);
    }
    else {
      ShowWindow((HWND)in_ECX[0xe],3);
    }
    if ((puVar6 != (undefined4 *)0x0) && (puVar6[2] != 0)) {
      FUN_0068ce30();
    }
    if ((int *)in_ECX[7] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[7] + 0xc))();
    }
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar6 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

