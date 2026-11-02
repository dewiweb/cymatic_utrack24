// rea decompile_all
// name: FUN_0064a0d0
// address: 0x64a0d0
// body: available
// range: 0x64a0d0-0x64a1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a0d0(void)

{
  int *piVar1;
  int *_Memory;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x2c) & 2) != 0) {
    FUN_00618e50();
  }
  _Memory = *(int **)(in_ECX + 0x70);
  if (_Memory != (int *)0x0) {
    *(undefined4 *)(in_ECX + 0x70) = 0;
    do {
      piVar1 = (int *)*_Memory;
      FID_conflict__free(_Memory);
      _Memory = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  if (*(void **)(in_ECX + 0xd8) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xd8));
  }
  if (*(void **)(in_ECX + 0xd4) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xd4));
  }
  if (*(void **)(in_ECX + 0xdc) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xdc));
  }
  if (*(void **)(in_ECX + 0xe0) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xe0));
  }
  if (*(void **)(in_ECX + 0xe4) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xe4));
  }
  if (*(void **)(in_ECX + 0xe8) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xe8));
  }
  FUN_0064a000();
  if (*(void **)(in_ECX + 0x1d4) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x1d4));
  }
  if (*(void **)(in_ECX + 0x1d8) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x1d8));
  }
  if (*(void **)(in_ECX + 0x210) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x210));
  }
  return;
}

