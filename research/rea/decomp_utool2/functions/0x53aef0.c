// rea decompile_all
// name: FUN_0053aef0
// address: 0x53aef0
// body: available
// range: 0x53aef0-0x53b08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053aef0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined **ppuVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  int in_ECX;
  undefined8 local_24;
  undefined1 local_1c [4];
  undefined *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070df0f;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = (ulonglong)(uint)local_24;
  local_8 = 0;
  if (*(undefined4 **)(in_ECX + 0x10) != param_1) {
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x10);
    *(undefined4 **)(in_ECX + 0x10) = param_1;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar7 = puVar2 + 1;
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1,uVar5);
      }
    }
  }
  if (*(int *)(in_ECX + 0x10) == 0) {
    local_18 = PTR_DAT_00c7ed54;
    piVar7 = (int *)(PTR_DAT_00c7ed54 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    ppuVar6 = &local_18;
    local_14 = 2;
  }
  else {
    ppuVar6 = (undefined **)FUN_00410ea0((int)&local_24 + 4);
    local_14 = 1;
  }
  puVar3 = local_18;
  piVar7 = (int *)(*ppuVar6 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0xc) = (int)*ppuVar6;
  UNLOCK();
  piVar7 = (int *)(iVar1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    piVar7 = (int *)(puVar3 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if (((local_14 & 1) != 0) && (piVar7 = (int *)(local_24._4_4_ + -8), piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  cVar4 = FUN_00548d30();
  if (cVar4 == '\0') {
    puVar8 = &local_24;
    local_24 = 0;
  }
  else {
    puVar8 = (undefined8 *)FUN_00636970(local_1c);
  }
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)puVar8;
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)((int)puVar8 + 4);
  if (*(int *)(in_ECX + 0x10) == 0) {
    uVar9 = 6;
  }
  else {
    uVar9 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x1c);
  }
  *(undefined4 *)(in_ECX + 0x20) = uVar9;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar7 = param_1 + 1;
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

