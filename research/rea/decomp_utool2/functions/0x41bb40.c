// rea decompile_all
// name: FUN_0041bb40
// address: 0x41bb40
// body: available
// range: 0x41bb40-0x41bc11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bb40(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  int *in_EDX;
  
  piVar3 = (int *)(*in_ECX + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar1 = *in_EDX;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  cVar2 = FUN_0041b940(iVar1);
  if (cVar2 != '\0') {
    iVar1 = *in_EDX;
    *in_EDX = (int)&DAT_00bfe12c;
    *in_EDX = *in_ECX;
    *in_ECX = iVar1;
  }
  piVar3 = (int *)(*in_EDX + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar1 = *param_1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  cVar2 = FUN_0041b940(iVar1);
  if (cVar2 != '\0') {
    iVar1 = *param_1;
    *param_1 = (int)&DAT_00bfe12c;
    *param_1 = *in_EDX;
    *in_EDX = iVar1;
    piVar3 = (int *)(*in_ECX + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    iVar1 = *in_EDX;
    piVar3 = (int *)(iVar1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    cVar2 = FUN_0041b940(iVar1);
    if (cVar2 != '\0') {
      iVar1 = *in_EDX;
      *in_EDX = (int)&DAT_00bfe12c;
      *in_EDX = *in_ECX;
      *in_ECX = iVar1;
    }
  }
  return;
}

