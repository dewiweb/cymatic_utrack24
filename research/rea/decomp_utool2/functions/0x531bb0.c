// rea decompile_all
// name: FUN_00531bb0
// address: 0x531bb0
// body: available
// range: 0x531bb0-0x531c80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00531bb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x38) = *(undefined1 *)(param_1 + 0x38);
  *(undefined1 *)(in_ECX + 0x39) = *(undefined1 *)(param_1 + 0x39);
  piVar3 = (int *)(*(int *)(param_1 + 0xc) + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0xc) = *(int *)(param_1 + 0xc);
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(in_ECX + 0x10) != iVar1) {
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x10);
    *(int *)(in_ECX + 0x10) = iVar1;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = puVar2 + 1;
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  piVar3 = (int *)(*(int *)(param_1 + 0x28) + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0x28);
  *(int *)(in_ECX + 0x28) = *(int *)(param_1 + 0x28);
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(in_ECX + 0x34) = *(undefined1 *)(param_1 + 0x34);
  return;
}

