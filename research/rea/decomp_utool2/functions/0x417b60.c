// rea decompile_all
// name: FUN_00417b60
// address: 0x417b60
// body: available
// range: 0x417b60-0x417c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417b60(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *in_EDX;
  int *piVar4;
  
  piVar2 = in_ECX;
  if (in_ECX != in_EDX) {
    while (piVar2 = piVar2 + 1, piVar2 != in_EDX) {
      iVar3 = *in_ECX;
      iVar1 = *piVar2;
      if (iVar3 != 0) {
        LOCK();
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        UNLOCK();
      }
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      iVar3 = FUN_004175e0(iVar1,iVar3);
      piVar4 = piVar2;
      if (iVar3 < 0) {
        FUN_004c1df0(in_ECX + 1,in_ECX,(int)piVar2 - (int)in_ECX);
        *in_ECX = iVar1;
      }
      else {
        while( true ) {
          iVar3 = piVar4[-1];
          if (iVar3 != 0) {
            LOCK();
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
            UNLOCK();
          }
          if (iVar1 != 0) {
            LOCK();
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
            UNLOCK();
          }
          iVar3 = FUN_004175e0(iVar1,iVar3);
          if (-1 < iVar3) break;
          *piVar4 = piVar4[-1];
          piVar4 = piVar4 + -1;
        }
        *piVar4 = iVar1;
      }
    }
  }
  return;
}

