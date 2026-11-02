// rea decompile_all
// name: FUN_004ab120
// address: 0x4ab120
// body: available
// range: 0x4ab120-0x4ab1cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab120(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  puVar3 = *(undefined4 **)(in_ECX + 0x38);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x34);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x30);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 8);
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    FID_conflict__free(*(void **)(iVar2 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  return;
}

