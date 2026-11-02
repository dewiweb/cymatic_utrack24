// rea decompile_all
// name: FUN_0045fa50
// address: 0x45fa50
// body: available
// range: 0x45fa50-0x45fadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045fa50(void)

{
  int iVar1;
  int *in_ECX;
  int *_Memory;
  int *extraout_ECX;
  int in_EDX;
  int *piVar2;
  int local_8;
  
  iVar1 = in_EDX - (int)in_ECX >> 2;
  if (1 < iVar1) {
    piVar2 = (int *)(in_EDX + -4);
    _Memory = in_ECX;
    if (iVar1 < 2) goto LAB_0045fac7;
    do {
      local_8 = *piVar2;
      *piVar2 = (int)&DAT_00bfe12c;
      *piVar2 = *in_ECX;
      *in_ECX = (int)&DAT_00bfe12c;
      FUN_0045fe40(-(int)in_ECX + (int)piVar2 >> 2,&local_8,_Memory);
      _Memory = (int *)(local_8 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
          _Memory = extraout_ECX;
        }
      }
LAB_0045fac7:
      piVar2 = piVar2 + -1;
    } while (1 < -(int)in_ECX + 4 + (int)piVar2 >> 2);
  }
  return;
}

