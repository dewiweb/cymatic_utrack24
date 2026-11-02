// rea decompile_all
// name: FUN_004087a0
// address: 0x4087a0
// body: available
// range: 0x4087a0-0x408a58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004087a0(void)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = 0x8c;
  pdVar2 = (double *)&DAT_00cea800;
  do {
    FUN_004e4f50(0x4022000000000000);
    FUN_00403bc0(0,0);
    FUN_00408fc0(pdVar2 + -6,FUN_00403920,extraout_ECX);
    dVar5 = 0.0;
    iVar3 = 2;
    pdVar1 = pdVar2;
    do {
      dVar5 = dVar5 + pdVar1[-6] + pdVar1[-3] + *pdVar1 + pdVar1[3] + pdVar1[6] + pdVar1[9] +
              pdVar1[0xc] + pdVar1[0xf] + pdVar1[0x12];
      pdVar1 = pdVar1 + 0x1b;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 2;
    dVar5 = 1.0 / dVar5;
    do {
      pdVar2[-6] = pdVar2[-6] * dVar5;
      pdVar2[-3] = dVar5 * pdVar2[-3];
      *pdVar2 = dVar5 * *pdVar2;
      pdVar2[3] = pdVar2[3] * dVar5;
      pdVar2[6] = pdVar2[6] * dVar5;
      pdVar2[9] = pdVar2[9] * dVar5;
      pdVar2[0xc] = dVar5 * pdVar2[0xc];
      pdVar2[0xf] = pdVar2[0xf] * dVar5;
      pdVar2[0x12] = pdVar2[0x12] * dVar5;
      iVar3 = iVar3 + -1;
      pdVar2 = pdVar2 + 0x1b;
    } while (iVar3 != 0);
    iVar4 = iVar4 + -1;
    pdVar2 = pdVar1;
  } while (-5 < iVar4);
  pdVar2 = (double *)&DAT_00ceab30;
  iVar4 = 0x9b4;
  do {
    dVar5 = pdVar2[-0x6c];
    pdVar2[-0x6c] = pdVar2[0x36];
    pdVar2[-0x6b] =
         ((pdVar2[-0x36] - pdVar2[0xa2]) * 16.0 + (pdVar2[0x6c] - *pdVar2) * 61.0 +
         (pdVar2[0xd8] - dVar5) * 3.0) / 76.0;
    pdVar2[-0x6a] =
         (((((*pdVar2 + pdVar2[0x6c]) * 106.0 + pdVar2[0xd8] * 10.0 + dVar5 * 6.0) -
           pdVar2[0x10e] * 3.0) - (pdVar2[-0x36] + pdVar2[0xa2]) * 29.0) - pdVar2[0x36] * 167.0) /
         76.0;
    pdVar2 = pdVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

