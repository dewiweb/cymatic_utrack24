// rea decompile_all
// name: FUN_006c3960
// address: 0x6c3960
// body: available
// range: 0x6c3960-0x6c3b59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c3960(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  uint uStack_2c;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072593c;
  local_10 = ExceptionList;
  uStack_2c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *param_1;
  if (*(int *)(in_ECX + 0x78) != iVar2) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    puVar4 = *(undefined4 **)(in_ECX + 0x78);
    *(int *)(in_ECX + 0x78) = iVar2;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar4 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puStack_30 = (undefined1 *)0x1;
        uStack_34 = 0x6c39bb;
        (**(code **)*puVar4)();
      }
    }
  }
  puStack_30 = local_20;
  uStack_34 = 0x6c39c6;
  puVar4 = (undefined4 *)FUN_00673860();
  puStack_30 = (undefined1 *)puVar4[3];
  uStack_34 = puVar4[2];
  uStack_38 = puVar4[1];
  uStack_3c = *puVar4;
  FUN_006e9790();
  puStack_30 = (undefined1 *)0x6c39e3;
  FUN_0069f0a0();
  local_8 = 0;
  puStack_30 = (undefined1 *)0x6c39f5;
  FUN_0069f0a0();
  local_8 = 0xffffffff;
  puVar4 = *(undefined4 **)(in_ECX + 0x84);
  *(undefined4 *)(in_ECX + 0x84) = local_18;
  puVar3 = *(undefined4 **)(in_ECX + 0x88);
  *(undefined4 *)(in_ECX + 0x88) = local_14;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puStack_30 = (undefined1 *)0x1;
      uStack_34 = 0x6c3a2a;
      (**(code **)*puVar3)();
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puStack_30 = (undefined1 *)0x1;
      uStack_34 = 0x6c3a3c;
      (**(code **)*puVar4)();
    }
  }
  puStack_30 = (undefined1 *)0x6c3a58;
  FUN_0069f0a0();
  local_8 = 1;
  puStack_30 = (undefined1 *)0x6c3a6a;
  FUN_0069f0a0();
  local_8 = 0xffffffff;
  puVar4 = *(undefined4 **)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x8c) = local_18;
  puVar3 = *(undefined4 **)(in_ECX + 0x90);
  *(undefined4 *)(in_ECX + 0x90) = local_14;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puStack_30 = (undefined1 *)0x1;
      uStack_34 = 0x6c3a9f;
      (**(code **)*puVar3)();
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puStack_30 = (undefined1 *)0x1;
      uStack_34 = 0x6c3ab1;
      (**(code **)*puVar4)();
    }
  }
  puStack_30 = (undefined1 *)0x6c3aca;
  FUN_0069f0a0();
  local_8 = 2;
  puStack_30 = (undefined1 *)0x6c3ae3;
  FUN_0069f0a0();
  local_8 = 0xffffffff;
  puVar4 = *(undefined4 **)(in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x94) = local_18;
  puVar3 = *(undefined4 **)(in_ECX + 0x98);
  *(undefined4 *)(in_ECX + 0x98) = local_14;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puStack_30 = (undefined1 *)0x1;
      uStack_34 = 0x6c3b18;
      (**(code **)*puVar3)();
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puStack_30 = (undefined1 *)0x1;
      uStack_34 = 0x6c3b2a;
      (**(code **)*puVar4)();
    }
  }
  puStack_30 = (undefined1 *)0x0;
  uStack_34 = 0x6c3b33;
  FUN_006c3650();
  FUN_006e6400(&uStack_3c);
  FUN_006ce9f0(1);
  ExceptionList = local_10;
  return;
}

