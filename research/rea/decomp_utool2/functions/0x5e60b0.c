// rea decompile_all
// name: FUN_005e60b0
// address: 0x5e60b0
// body: available
// range: 0x5e60b0-0x5e62c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e60b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_c;
  
  piVar1 = (int *)**(undefined4 **)(in_ECX + 0x68);
  piVar2 = *(int **)(*(int *)(in_ECX + 4) + 0x1c);
  iVar6 = *(int *)(in_ECX + 0x14) / piVar1[2];
  iVar9 = 0;
  if (-1 < piVar1[0x2a] / piVar1[2]) {
    iVar9 = piVar1[0x2a] / piVar1[2];
  }
  iVar8 = iVar6 + -4;
  iVar6 = iVar6 + 2;
  if (piVar1[0x29] < iVar6) {
    piVar1[0x29] = iVar6;
    iVar6 = FUN_004c553b(piVar1[0x28],iVar6 * 4);
    piVar1[0x28] = iVar6;
  }
  for (; iVar9 < iVar8; iVar9 = iVar9 + 1) {
    piVar1[0x27] = piVar1[0x27] + 1;
    uVar10 = 0;
    if (0x18 < piVar1[0x27]) {
      piVar1[0x27] = 0x18;
    }
    iVar6 = 0;
    if (0 < *piVar1) {
      local_c = 0;
      do {
        uVar7 = FUN_005e62d0(*(int *)(*(int *)(in_ECX + 8) + iVar6 * 4) + piVar1[2] * iVar9 * 4,
                             piVar1 + 10,piVar1[0x26] + local_c);
        local_c = local_c + 0x3f0;
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 | uVar7;
      } while (iVar6 < *piVar1);
    }
    *(undefined4 *)(piVar1[0x28] + 8 + iVar9 * 4) = 0;
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)(piVar1[0x28] + iVar9 * 4) = 1;
      *(undefined4 *)(piVar1[0x28] + 4 + iVar9 * 4) = 1;
    }
    if (((uVar10 & 2) != 0) && (*(undefined4 *)(piVar1[0x28] + iVar9 * 4) = 1, 0 < iVar9)) {
      *(undefined4 *)(piVar1[0x28] + -4 + iVar9 * 4) = 1;
    }
    if ((uVar10 & 4) != 0) {
      piVar1[0x27] = -1;
    }
  }
  iVar6 = piVar1[2];
  iVar8 = iVar6 * iVar8;
  piVar1[0x2a] = iVar8;
  iVar9 = *(int *)(in_ECX + 0x30);
  iVar3 = piVar2[*(int *)(in_ECX + 0x28)];
  iVar4 = piVar2[1];
  iVar11 = piVar1[0x2c];
  iVar5 = *piVar2;
  while( true ) {
    if (iVar8 - iVar6 <= iVar11) {
      return 0xffffffff;
    }
    if (((int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2) +
        iVar4 / 2 + iVar9 + ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) <= iVar11) break;
    piVar1[0x2c] = iVar11;
    if ((*(int *)(piVar1[0x28] + (iVar11 / iVar6) * 4) != 0) && (iVar9 < iVar11)) {
      piVar1[0x2b] = iVar11;
      return 0;
    }
    iVar11 = iVar11 + iVar6;
  }
  return 1;
}

