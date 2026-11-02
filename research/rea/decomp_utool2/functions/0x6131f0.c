// rea decompile_all
// name: FUN_006131f0
// address: 0x6131f0
// body: available
// range: 0x6131f0-0x61326f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006131f0(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined **ppuVar4;
  int *in_EDX;
  undefined1 uVar5;
  int *_Memory;
  int local_8;
  
  FUN_00636a10(&local_8);
  uVar2 = in_EDX[2];
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
      uVar5 = 0;
      goto LAB_00613242;
    }
    if (uVar2 < (uint)in_EDX[2]) {
      ppuVar4 = (undefined **)(*in_EDX + uVar2 * 4);
    }
    else {
      ppuVar4 = &PTR_DAT_00c7ed68;
    }
    cVar3 = FUN_00458920(*ppuVar4,local_8);
  } while (cVar3 == '\0');
  uVar5 = 1;
LAB_00613242:
  _Memory = (int *)(local_8 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  return uVar5;
}

