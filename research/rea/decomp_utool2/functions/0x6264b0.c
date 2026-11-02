// rea decompile_all
// name: FUN_006264b0
// address: 0x6264b0
// body: available
// range: 0x6264b0-0x62652c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006264b0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  
  uVar6 = in_ECX[5];
  if (uVar6 < param_1) {
    uVar5 = (param_1 + 2) * 3 >> 1;
    in_ECX[5] = uVar5;
    if (*in_ECX == 0) {
      FID_conflict__free((void *)0x0);
      piVar4 = (int *)FUN_004c5556(uVar5,4);
      *in_ECX = (int)piVar4;
      iVar1 = in_ECX[2];
      iVar2 = in_ECX[3];
      iVar3 = in_ECX[4];
      *piVar4 = in_ECX[1];
      piVar4[1] = iVar1;
      piVar4[2] = iVar2;
      piVar4[3] = iVar3;
    }
    else {
      piVar4 = (int *)FUN_004c553b(*in_ECX,uVar5 * 4);
      *in_ECX = (int)piVar4;
      if (piVar4 == (int *)0x0) {
        piVar4 = in_ECX + 1;
      }
      if (uVar6 < (uint)in_ECX[5]) {
        do {
          piVar4[uVar6] = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)in_ECX[5]);
      }
    }
  }
  piVar4 = (int *)*in_ECX;
  if (piVar4 == (int *)0x0) {
    piVar4 = in_ECX + 1;
  }
  return piVar4;
}

