// rea decompile_all
// name: FUN_00533710
// address: 0x533710
// body: available
// range: 0x533710-0x533921 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533710(void)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  int in_ECX;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d158;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)(in_ECX + 0x4a4);
  FUN_00415520();
  if (*(int *)(iVar2 + 0x58) != 0) {
    local_34 = 0x533756;
    FID_conflict__free(*(void **)(iVar2 + 0x54));
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
  }
  uVar6 = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  if (0 < *(int *)(in_ECX + 0x4c0)) {
    do {
      local_34 = 0x53379e;
      FUN_0053f050();
      local_8 = 0;
      if (local_14 != (undefined4 *)0x0) {
        local_38 = (undefined1 *)&local_34;
        local_3c = 0x5337bf;
        FUN_00410ea0();
        local_38 = (undefined1 *)0x5337c6;
        FUN_00548e50();
        local_8._0_1_ = 1;
        if (uVar6 < *(uint *)(in_ECX + 0x4bc)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar6 * 4);
        }
        else {
          iVar2 = 0;
        }
        local_34 = *(undefined4 *)(iVar2 + 0x30);
        if (uVar6 < *(uint *)(in_ECX + 0x4bc)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar6 * 4);
        }
        else {
          iVar2 = 0;
        }
        local_38 = (undefined1 *)(uint)*(byte *)(iVar2 + 0x34);
        if (uVar6 < *(uint *)(in_ECX + 0x4bc)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar6 * 4);
        }
        else {
          iVar2 = 0;
        }
        local_3c = *(undefined4 *)(iVar2 + 0x2c);
        if (uVar6 < *(uint *)(in_ECX + 0x4bc)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar6 * 4);
        }
        else {
          iVar2 = 0;
        }
        uStack_40 = *(undefined4 *)(iVar2 + 0x24);
        FUN_0040eb00(auStack_44);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0053ea70(uVar6);
      }
      local_8 = 0xffffffff;
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar7 = local_14 + 1;
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          local_34 = 0x533878;
          (**(code **)*local_14)();
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(in_ECX + 0x4c0));
  }
  iVar2 = *(int *)(in_ECX + 0x4a4);
  piVar7 = (int *)(iVar2 + 0x40);
  if (piVar7 != (int *)(in_ECX + 0x4c8)) {
    iVar1 = *(int *)(in_ECX + 0x4d0);
    puVar5 = (undefined8 *)0x0;
    local_14 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      local_14 = (undefined4 *)iVar1;
      if (iVar1 < 1) {
        local_34 = 0x5338c7;
        FID_conflict__free((void *)0x0);
        puVar5 = (undefined8 *)0x0;
      }
      else {
        local_34 = 0x5338b9;
        puVar5 = (undefined8 *)FUN_004c554b();
      }
    }
    iVar4 = 0;
    puVar3 = puVar5;
    if (0 < iVar1) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = *(undefined8 *)(*(int *)(in_ECX + 0x4c8) + iVar4 * 8);
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < iVar1);
    }
    _Memory = (void *)*piVar7;
    *piVar7 = (int)puVar5;
    *(undefined4 **)(iVar2 + 0x44) = local_14;
    *(int *)(iVar2 + 0x48) = iVar1;
    local_34 = 0x53390d;
    FID_conflict__free(_Memory);
  }
  ExceptionList = local_10;
  return;
}

