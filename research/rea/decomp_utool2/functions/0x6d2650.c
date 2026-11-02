// rea decompile_all
// name: FUN_006d2650
// address: 0x6d2650
// body: available
// range: 0x6d2650-0x6d2851 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d2650(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726f87;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  operator_new(0x164);
  local_8 = 0;
  piVar2 = (int *)FUN_006e5a80(param_1);
  local_8 = 0xffffffff;
  *(undefined1 *)((int)piVar2 + 0x9a) = 1;
  *(undefined1 *)((int)piVar2 + 0xa1) = 0;
  if (*(int *)(in_ECX + 0xfc) < *(int *)(in_ECX + 0x100) + 1) {
    FUN_00409cf0();
  }
  iVar3 = *(int *)(in_ECX + 0x100);
  *(int *)(in_ECX + 0x100) = iVar3 + 1;
  *(int **)(*(int *)(in_ECX + 0xf8) + iVar3 * 4) = piVar2;
  if (*(int *)(in_ECX + 0x138) < *(int *)(in_ECX + 0x13c) + 1) {
    FUN_00409cf0();
  }
  iVar3 = *(int *)(in_ECX + 0x13c);
  *(int *)(in_ECX + 0x13c) = iVar3 + 1;
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x134) + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = piVar2;
  }
  FUN_006e8e70(&stack0xffffffd8,0x1000c00,0);
  FUN_006e6170(0x1000205);
  iVar3 = FUN_006e9580();
  piVar4 = (int *)(**(code **)(*(int *)(iVar3 + 0x1c) + 0x18))();
  local_8 = 1;
  iVar3 = *piVar4;
  if (piVar2[0x42] != iVar3) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar1 = (undefined4 *)piVar2[0x42];
    piVar2[0x42] = iVar3;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar1 + 1;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  FUN_00696170();
  local_8 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  (**(code **)(*piVar2 + 0x28))(1);
  FUN_006e5050(piVar2,0xffffffff);
  FUN_006e55f0(param_2,1);
  uVar6 = 0;
  uVar5 = FUN_0044ec90(0);
  FUN_00696020(uVar5,uVar6);
  iVar3 = *(int *)(in_ECX + 0x148) + 1;
  if (*(int *)(in_ECX + 0x144) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 0x148) + 9 & 0xfffffff8);
  }
  iVar3 = *(int *)(in_ECX + 0x148);
  *(int *)(in_ECX + 0x148) = iVar3 + 1;
  piVar2 = (int *)(*(int *)(in_ECX + 0x140) + iVar3 * 4);
  if (piVar2 != (int *)0x0) {
    iVar3 = *param_3;
    *piVar2 = iVar3;
    piVar2 = (int *)(iVar3 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  FUN_0068e810(0);
  ExceptionList = local_10;
  return;
}

