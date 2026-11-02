// rea decompile_all
// name: FUN_006e9aa0
// address: 0x6e9aa0
// body: available
// range: 0x6e9aa0-0x6e9e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e9aa0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_ECX;
  uint uVar4;
  int iStack_d4;
  uint uStack_d0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  uint local_88;
  int local_84;
  int local_78;
  char local_6e;
  char local_6d;
  WINDOWPLACEMENT local_6c;
  WINDOWPLACEMENT local_40;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_00728e1d;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = param_1 | 0x80000000;
  if ((*(byte *)(in_ECX + 0x1a) & 4) != 0) {
    uVar4 = param_1 & 0x7fffffff;
  }
  piVar2 = (int *)FUN_0068db10();
  if ((piVar2 != (int *)0x0) && (uVar4 == piVar2[2])) goto LAB_006e9e3a;
  puVar3 = (undefined4 *)FUN_0040de70();
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  uStack_7 = 0;
  FUN_006cfa80();
  local_6d = '\0';
  local_6e = '\0';
  local_78 = 0;
  local_84 = -1;
  local_9c = 0;
  iStack_98 = 0;
  iStack_94 = 0;
  iStack_90 = 0;
  if (piVar2 == (int *)0x0) {
LAB_006e9c97:
    if (in_ECX[3] != 0) {
      FUN_006cf2a0();
    }
    if (puVar3 == (undefined4 *)0x0) goto LAB_006e9e3a;
    if (puVar3[2] != 0) {
      *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 1;
      if (*(code **)(*in_ECX + 0xac) == FUN_006e8df0) {
        operator_new(0xb0);
        local_8 = 3;
        uStack_d0 = uVar4;
        piVar2 = (int *)FUN_004a55d0();
        local_8 = 0;
      }
      else {
        uStack_d0 = 0x6e9d13;
        piVar2 = (int *)(**(code **)(*in_ECX + 0xac))();
      }
      if (DAT_00c8a67c == 0) {
        operator_new(0xd0);
        local_8 = 4;
        DAT_00c8a67c = FUN_006cb960();
        local_8 = 0;
      }
      FUN_004097d0();
      in_ECX[4] = local_8c;
      in_ECX[5] = local_88;
      FUN_006cdec0(&iStack_d4);
      FUN_004b21a0();
      uStack_d0 = 0x6e9d84;
      (**(code **)(*piVar2 + 0x18))();
      if (-1 < local_84) {
        uStack_d0 = local_84;
        iStack_d4 = 0x6e9d96;
        (**(code **)(*piVar2 + 0x84))();
      }
      uStack_d0 = (uint)(*(byte *)(in_ECX + 0x1a) >> 1 & 1);
      iStack_d4 = 0x6e9da8;
      (**(code **)(*piVar2 + 8))();
      piVar2 = (int *)FUN_0068db10();
      if (piVar2 != (int *)0x0) {
        if (local_6d != '\0') {
          (**(code **)(*piVar2 + 0x38))();
          piVar2[3] = local_9c;
          piVar2[4] = iStack_98;
          piVar2[5] = iStack_94;
          piVar2[6] = iStack_90;
        }
        if (local_6e != '\0') {
          (**(code **)(*piVar2 + 0x30))();
        }
        if ((*(byte *)((int)in_ECX + 0x69) & 1) != 0) {
          (**(code **)(*piVar2 + 0x54))();
        }
        piVar2[7] = local_78;
        FUN_006e6400(&iStack_d4);
        FUN_006ce9f0(1);
        FUN_006cedf0();
      }
    }
  }
  else {
    local_8 = 1;
    if ((undefined **)*piVar2 == juce::HWNDComponentPeer::vftable) {
      if (((uint)piVar2[2] >> 3 & 1) == 0) {
        local_6d = (char)piVar2[0x16];
      }
      else {
        local_40.length = 0x2c;
        uStack_d0 = 0x6e9b9b;
        GetWindowPlacement((HWND)piVar2[0xe],&local_40);
        local_6d = local_40.showCmd == 3;
      }
    }
    else {
      local_6d = (*(code *)((undefined **)*piVar2)[0xf])();
    }
    if ((undefined **)*piVar2 == juce::HWNDComponentPeer::vftable) {
      local_6c.length = 0x2c;
      uStack_d0 = 0x6e9bd6;
      GetWindowPlacement((HWND)piVar2[0xe],&local_6c);
      local_6e = local_6c.showCmd == 2;
    }
    else {
      local_6e = (*(code *)((undefined **)*piVar2)[0xd])();
    }
    local_78 = piVar2[7];
    local_9c = piVar2[3];
    iStack_94 = piVar2[5];
    iStack_90 = piVar2[6];
    iStack_98 = piVar2[4];
    local_84 = (**(code **)(*piVar2 + 0x80))();
    *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xfe;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = 2;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 1;
    }
    FUN_00415ff0();
    FUN_006cedf0();
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[2] != 0)) {
      uStack_d0 = local_88;
      iStack_d4 = local_8c;
      FUN_006e9790();
      local_8 = 0;
      (**(code **)*piVar2)();
      goto LAB_006e9c97;
    }
    (**(code **)*piVar2)();
    if (puVar3 == (undefined4 *)0x0) goto LAB_006e9e3a;
  }
  LOCK();
  piVar2 = puVar3 + 1;
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    (**(code **)*puVar3)();
  }
LAB_006e9e3a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

