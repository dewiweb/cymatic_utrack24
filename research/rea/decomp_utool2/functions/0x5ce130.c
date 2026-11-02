// rea decompile_all
// name: FUN_005ce130
// address: 0x5ce130
// body: available
// range: 0x5ce130-0x5ce1d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005ce130(int *param_1)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  if (*in_ECX != *param_1) {
    uVar3 = FUN_00448730(*in_ECX);
    if (uVar3 != 0) goto LAB_005ce1c9;
  }
  iVar4 = param_1[1];
  if (in_ECX[1] != iVar4) {
    uVar3 = FUN_00448730(in_ECX[1]);
    iVar4 = 0;
    if (uVar3 != 0) goto LAB_005ce1c9;
  }
  dVar2 = *(double *)(in_ECX + 2);
  pdVar1 = (double *)(param_1 + 2);
  uVar3 = (uint)CONCAT21((short)((uint)iVar4 >> 0x10),
                         (dVar2 == *pdVar1) << 6 | (NAN(dVar2) || NAN(*pdVar1)) << 2 | 2U |
                         dVar2 < *pdVar1) << 8;
  if ((dVar2 == *pdVar1) && (uVar3 = in_ECX[4], uVar3 == param_1[4])) {
    uVar3 = FUN_006258a0();
    if ((uVar3 == 0) && (uVar3 = 0, (char)in_ECX[0xd] == (char)param_1[0xd])) {
      uVar3 = FUN_006258a0();
      if (uVar3 == 0) {
        uVar3 = 0;
        if ((char)in_ECX[0x16] == (char)param_1[0x16]) {
          return 1;
        }
      }
    }
  }
LAB_005ce1c9:
  return uVar3 & 0xffffff00;
}

