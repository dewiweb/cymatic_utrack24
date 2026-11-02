// rea decompile_all
// name: FUN_0053e510
// address: 0x53e510
// body: available
// range: 0x53e510-0x53e60a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053e510(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  
  piVar3 = (int *)(PTR_DAT_00c7ed54 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0xc) = (int)PTR_DAT_00c7ed54;
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
  puVar2 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    LOCK();
    piVar3 = puVar2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 6;
  piVar3 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0x28);
  *(int *)(in_ECX + 0x28) = (int)PTR_DAT_00c7ed68;
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
  *(undefined4 *)(in_ECX + 0x24) = 0xffffffff;
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 1:
  case 2:
  case 4:
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    break;
  case 3:
    *(undefined4 *)(in_ECX + 0x2c) = 0xc1400000;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined1 *)(in_ECX + 0x34) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  return;
}

