// rea decompile_all
// name: FUN_00415e20
// address: 0x415e20
// body: available
// range: 0x415e20-0x415ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415e20(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *in_EDX;
  
  iVar2 = *in_EDX;
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  iVar2 = FUN_00415570(iVar2,iVar1);
  if (iVar2 < 0) {
    iVar2 = *in_EDX;
    *in_EDX = *in_ECX;
    *in_ECX = iVar2;
  }
  iVar2 = *in_EDX;
  iVar1 = *param_1;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  iVar2 = FUN_00415570(iVar1,iVar2);
  if (iVar2 < 0) {
    iVar2 = *param_1;
    *param_1 = *in_EDX;
    *in_EDX = iVar2;
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    iVar2 = FUN_00415570(iVar2,iVar1);
    if (iVar2 < 0) {
      iVar2 = *in_EDX;
      *in_EDX = *in_ECX;
      *in_ECX = iVar2;
    }
  }
  return;
}

