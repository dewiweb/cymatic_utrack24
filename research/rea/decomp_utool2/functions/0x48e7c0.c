// rea decompile_all
// name: FUN_0048e7c0
// address: 0x48e7c0
// body: available
// range: 0x48e7c0-0x48e9fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e7c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701d50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
  }
  if (param_1 != iVar6) {
    if (param_1 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_0040de70();
    }
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      puVar4[1] = puVar4[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    uVar2 = *(undefined4 *)(in_ECX + 0x20);
    if (iVar6 != 0) {
      puVar5 = (undefined4 *)FUN_0040de70();
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        puVar5[1] = puVar5[1] + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0048e620(0,param_2,param_3);
      if ((puVar5 != (undefined4 *)0x0) && (puVar5[2] != 0)) {
        if (*(undefined4 **)(in_ECX + 0x2c) != puVar4) {
          if (puVar4 != (undefined4 *)0x0) {
            LOCK();
            puVar4[1] = puVar4[1] + 1;
            UNLOCK();
          }
          puVar3 = *(undefined4 **)(in_ECX + 0x2c);
          *(undefined4 **)(in_ECX + 0x2c) = puVar4;
          if (puVar3 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = puVar3 + 1;
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)*puVar3)();
            }
          }
        }
        FUN_0048e320(puVar5[2],param_2,param_3);
      }
      *(undefined4 *)(in_ECX + 0x20) = uVar2;
      local_8 = local_8 & 0xffffff00;
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar5 + 1;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*puVar5)();
        }
      }
    }
    if (*(undefined4 **)(in_ECX + 0x2c) != puVar4) {
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        puVar4[1] = puVar4[1] + 1;
        UNLOCK();
      }
      puVar5 = *(undefined4 **)(in_ECX + 0x2c);
      *(undefined4 **)(in_ECX + 0x2c) = puVar4;
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar5 + 1;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*puVar5)();
        }
      }
    }
    if (*(int *)(in_ECX + 0x2c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
    }
    if (iVar6 != 0) {
      FUN_0048e290(iVar6,param_2,param_3);
    }
    FUN_0048f720();
    FUN_0048e620(uVar2,param_2,param_3);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar4 + 1;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar4)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

