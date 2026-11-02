// rea decompile_all
// name: FUN_0068ce30
// address: 0x68ce30
// body: available
// range: 0x68ce30-0x68d068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068ce30(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *in_ECX;
  code *pcVar6;
  char cVar7;
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_64;
  WINDOWPLACEMENT local_40;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar6 = GetWindowPlacement_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007214ab;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_00c8a9c8 = DAT_00c8a9dc;
  if ((undefined **)*in_ECX == juce::HWNDComponentPeer::vftable) {
    local_40.length = 0x2c;
    uStack_b0 = 0x68ce8c;
    GetWindowPlacement((HWND)in_ECX[0xe],&local_40);
    cVar7 = local_40.showCmd == 2;
  }
  else {
    cVar7 = (*(code *)((undefined **)*in_ECX)[0xd])();
  }
  if (((*(byte *)(in_ECX[1] + 0x68) & 1) != 0) && (cVar7 == '\0')) {
    if (in_ECX[1] == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_0040de70();
    }
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      puVar5[1] = puVar5[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    (**(code **)(*in_ECX + 0x1c))(auStack_b4);
    FUN_004b2220();
    iVar2 = in_ECX[1];
    if ((*(int *)(iVar2 + 0x10) == local_90) && (*(int *)(iVar2 + 0x14) == local_8c)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((*(int *)(iVar2 + 0x18) == local_88) && (*(int *)(iVar2 + 0x1c) == local_84)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar4) || (bVar3)) {
      *(int *)(iVar2 + 0x10) = local_90;
      *(int *)(iVar2 + 0x14) = local_8c;
      *(int *)(iVar2 + 0x18) = local_88;
      *(int *)(iVar2 + 0x1c) = local_84;
      if (bVar3) {
        FUN_006e6400(auStack_b4);
        FUN_006ce9f0(1);
      }
      uStack_b0 = 0x68cf80;
      FUN_006cf760();
      if (puVar5 == (undefined4 *)0x0) goto LAB_0068d04d;
      if (puVar5[2] == 0) {
        LOCK();
        piVar1 = puVar5 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar5)();
        }
        goto LAB_0068d04d;
      }
    }
    local_8 = 0xffffffff;
    pcVar6 = GetWindowPlacement_exref;
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar5 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      pcVar6 = GetWindowPlacement_exref;
      if (iVar2 == 1) {
        (**(code **)*puVar5)();
        pcVar6 = GetWindowPlacement_exref;
      }
    }
  }
  if ((char)in_ECX[0xc] != cVar7) {
    *(char *)(in_ECX + 0xc) = cVar7;
    if (*(code **)(*(int *)in_ECX[1] + 0x38) != FUN_006e9a80) {
      (**(code **)(*(int *)in_ECX[1] + 0x38))();
    }
    FUN_006cfe10();
  }
  if ((undefined **)*in_ECX == juce::HWNDComponentPeer::vftable) {
    if (((uint)in_ECX[2] >> 3 & 1) == 0) {
      cVar7 = (char)in_ECX[0x16];
    }
    else {
      uStack_b0 = 0x68d021;
      (*pcVar6)();
      cVar7 = local_64 == 3;
    }
  }
  else {
    cVar7 = (*(code *)((undefined **)*in_ECX)[0xf])();
  }
  if (cVar7 == '\0') {
    iVar2 = in_ECX[1];
    in_ECX[3] = *(int *)(iVar2 + 0x10);
    in_ECX[4] = *(int *)(iVar2 + 0x14);
    in_ECX[5] = *(int *)(iVar2 + 0x18);
    in_ECX[6] = *(int *)(iVar2 + 0x1c);
  }
LAB_0068d04d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

