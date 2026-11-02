// rea decompile_all
// name: FUN_005e9260
// address: 0x5e9260
// body: available
// range: 0x5e9260-0x5e92e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e9260(void)

{
  void *_Memory;
  undefined4 *puVar1;
  void *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  _Memory = *(void **)((int)in_ECX + 0x68);
  FUN_005e92f0();
  if (*(void **)((int)in_ECX + 0x44) != (void *)0x0) {
    FID_conflict__free(*(void **)((int)in_ECX + 0x44));
  }
  if (_Memory != (void *)0x0) {
    iVar3 = 0;
    puVar2 = (undefined4 *)((int)_Memory + 0xc);
    do {
      puVar1 = (undefined4 *)*puVar2;
      FID_conflict__free((void *)puVar1[2]);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      if (iVar3 != 7) {
        FID_conflict__free((void *)*puVar2);
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 0xf);
    FID_conflict__free(_Memory);
  }
  _memset(in_ECX,0,0x70);
  return 0;
}

