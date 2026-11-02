// rea decompile_all
// name: FUN_005d3020
// address: 0x5d3020
// body: available
// range: 0x5d3020-0x5d317f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d3020(void)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  
  if (in_ECX != (int *)0x0) {
    FUN_005e9260();
    FUN_005e8a50();
    piVar1 = in_ECX + 0x1e;
    if (piVar1 != (int *)0x0) {
      if ((void *)*piVar1 != (void *)0x0) {
        FID_conflict__free((void *)*piVar1);
      }
      if ((void *)in_ECX[0x22] != (void *)0x0) {
        FID_conflict__free((void *)in_ECX[0x22]);
      }
      if ((void *)in_ECX[0x23] != (void *)0x0) {
        FID_conflict__free((void *)in_ECX[0x23]);
      }
      _memset(piVar1,0,0x168);
    }
    if ((in_ECX[0x12] != 0) && (in_ECX[0xd] != 0)) {
      iVar2 = 0;
      if (0 < in_ECX[0xd]) {
        do {
          FUN_005e2a80();
          FUN_005e2cf0();
          iVar2 = iVar2 + 1;
        } while (iVar2 < in_ECX[0xd]);
      }
      FID_conflict__free((void *)in_ECX[0x12]);
      FID_conflict__free((void *)in_ECX[0x13]);
    }
    if ((void *)in_ECX[0xf] != (void *)0x0) {
      FID_conflict__free((void *)in_ECX[0xf]);
    }
    if ((void *)in_ECX[0x11] != (void *)0x0) {
      FID_conflict__free((void *)in_ECX[0x11]);
    }
    if ((void *)in_ECX[0x10] != (void *)0x0) {
      FID_conflict__free((void *)in_ECX[0x10]);
    }
    if ((void *)in_ECX[0xe] != (void *)0x0) {
      FID_conflict__free((void *)in_ECX[0xe]);
    }
    piVar1 = in_ECX + 6;
    if (piVar1 != (int *)0x0) {
      if ((void *)*piVar1 != (void *)0x0) {
        FID_conflict__free((void *)*piVar1);
      }
      *piVar1 = 0;
      in_ECX[7] = 0;
      in_ECX[8] = 0;
      in_ECX[9] = 0;
      in_ECX[10] = 0;
      in_ECX[0xb] = 0;
      in_ECX[0xc] = 0;
    }
    if ((*in_ECX != 0) && ((code *)in_ECX[0xb2] != (code *)0x0)) {
      (*(code *)in_ECX[0xb2])(*in_ECX);
    }
    _memset(in_ECX,0,0x2d0);
  }
  return 0;
}

