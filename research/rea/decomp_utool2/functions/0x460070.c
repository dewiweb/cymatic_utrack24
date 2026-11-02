// rea decompile_all
// name: FUN_00460070
// address: 0x460070
// body: available
// range: 0x460070-0x46016a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460070(int param_1,int *param_2)

{
  int *_Memory;
  int *_Memory_00;
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  while (param_1 < in_EDX) {
    iVar3 = (in_EDX + -1) / 2;
    iVar4 = *param_2;
    _Memory = (int *)(iVar4 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      *_Memory = *_Memory + 1;
      UNLOCK();
    }
    piVar1 = (int *)(in_ECX + iVar3 * 4);
    iVar2 = *piVar1;
    _Memory_00 = (int *)(iVar2 + -8);
    if (_Memory_00 != &DAT_00bfe124) {
      LOCK();
      *_Memory_00 = *_Memory_00 + 1;
      UNLOCK();
    }
    if (iVar2 == iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0045c1e0(iVar2,iVar4);
    }
    if (_Memory_00 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory_00;
      *_Memory_00 = *_Memory_00 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory_00);
      }
    }
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    if (-1 < iVar4) break;
    iVar4 = *(int *)(in_ECX + in_EDX * 4);
    *(int *)(in_ECX + in_EDX * 4) = *piVar1;
    *piVar1 = iVar4;
    in_EDX = iVar3;
  }
  iVar4 = *(int *)(in_ECX + in_EDX * 4);
  *(int *)(in_ECX + in_EDX * 4) = *param_2;
  *param_2 = iVar4;
  return;
}

