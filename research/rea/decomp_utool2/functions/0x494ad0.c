// rea decompile_all
// name: FUN_00494ad0
// address: 0x494ad0
// body: available
// range: 0x494ad0-0x494c48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00494ad0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007023a8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x74) != 0) {
    return;
  }
  iVar6 = *(int *)(in_ECX + 0x54);
  piVar4 = (int *)(iVar6 + -8);
  ExceptionList = &local_10;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  puVar5 = (undefined4 *)FUN_006377c0(iVar6);
  iVar6 = FUN_0045cfe0(*puVar5,uVar3);
  piVar4 = local_14 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00672a30(iVar6,iVar6 >> 0x1f);
  local_8 = 0;
  if (local_14 == (undefined4 *)0x0) {
    if ((char)param_1 != '\0') {
      ExceptionList = local_10;
      return;
    }
    piVar4 = (int *)FUN_006865e0();
    local_14 = (undefined4 *)*piVar4;
    *piVar4 = 0;
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = param_1 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*param_1)(1);
      }
    }
    if (local_14 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
    FUN_006729f0(iVar6,iVar6 >> 0x1f);
  }
  if (*(undefined4 **)(in_ECX + 0x74) != local_14) {
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      local_14[1] = local_14[1] + 1;
      UNLOCK();
    }
    puVar5 = *(undefined4 **)(in_ECX + 0x74);
    *(undefined4 **)(in_ECX + 0x74) = local_14;
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar5 + 1;
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  piVar4 = (int *)(*(int *)(in_ECX + 0x4c) + 0xc);
  LOCK();
  iVar6 = *piVar4;
  if (iVar6 == 0) {
    *piVar4 = 1;
    iVar6 = 0;
  }
  UNLOCK();
  if ((iVar6 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0xc) = 0;
    UNLOCK();
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_14 + 1;
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

