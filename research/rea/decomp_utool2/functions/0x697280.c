// rea decompile_all
// name: FUN_00697280
// address: 0x697280
// body: available
// range: 0x697280-0x6972ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697280(void)

{
  int *_Memory;
  int iVar1;
  DWORD DVar2;
  int in_ECX;
  
  if (DAT_00c8a644 == 0) {
    DVar2 = timeGetTime();
    if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar2;
    }
  }
  *(uint *)(in_ECX + 0x104) = DAT_00c8a644;
  *(undefined1 *)(in_ECX + 0xec) = 1;
  LOCK();
  iVar1 = *(int *)(in_ECX + 0xd8);
  *(int *)(in_ECX + 0xd8) = (int)&DAT_00bfe12c;
  UNLOCK();
  _Memory = (int *)(iVar1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  return;
}

