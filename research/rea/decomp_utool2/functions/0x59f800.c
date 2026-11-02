// rea decompile_all
// name: FUN_0059f800
// address: 0x59f800
// body: available
// range: 0x59f800-0x59fa0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716013;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0059c8e0(param_4);
  in_ECX[0x20] = param_3;
  *(undefined1 *)(in_ECX + 0x21) = param_5._0_1_;
  in_ECX[0x22] = param_6;
  *in_ECX = ImportJob_MTSong::vftable;
  *(undefined1 *)(in_ECX + 0x23) = (undefined1)param_7;
  in_ECX[0x24] = &DAT_00bfe12c;
  in_ECX[0x25] = &DAT_00bfe12c;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  local_8 = 5;
  puVar3 = (undefined4 *)FUN_0040ebb0();
  uVar2 = in_ECX[0x26];
  in_ECX[0x26] = *puVar3;
  *puVar3 = uVar2;
  if (param_5 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_5 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_5)();
    }
  }
  puVar3 = (undefined4 *)FUN_0054e0c0(&param_5);
  uVar2 = in_ECX[0x24];
  in_ECX[0x24] = *puVar3;
  *puVar3 = uVar2;
  piVar5 = param_5 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_5 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,6);
  puVar3 = (undefined4 *)FUN_0054da30(&param_7,param_1,param_3,param_2);
  uVar2 = in_ECX[0x25];
  in_ECX[0x25] = *puVar3;
  *puVar3 = uVar2;
  piVar5 = (int *)(param_7 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_7 = *(undefined4 *)(in_ECX[0x26] + 0x40);
  FUN_00636040(&stack0xffffffd8);
  iVar1 = in_ECX[0x26];
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  puVar4 = (undefined4 *)FUN_0053d560(iVar1);
  puVar3 = (undefined4 *)in_ECX[0x27];
  if ((puVar3 != puVar4) && (in_ECX[0x27] = puVar4, puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)();
  }
  piVar5 = (int *)((int)param_5 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

