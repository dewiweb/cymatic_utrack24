// rea decompile_all
// name: FUN_00679f40
// address: 0x679f40
// body: available
// range: 0x679f40-0x67a052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00679f40(void)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int iVar6;
  
  piVar2 = (int *)in_ECX[7];
  uVar3 = in_ECX[8];
  iVar4 = *piVar2;
  if ((uint)piVar2[2] <= uVar3) {
    return (uint)piVar2 & 0xffffff00;
  }
  fVar1 = *(float *)(iVar4 + uVar3 * 4);
  iVar6 = uVar3 + 1;
  in_ECX[8] = iVar6;
  if (fVar1 == 100002.0) {
    *in_ECX = 0;
  }
  else {
    if (fVar1 != 100001.0) {
      if (fVar1 == 100003.0) {
        *in_ECX = 2;
        in_ECX[1] = *(undefined4 *)(iVar4 + iVar6 * 4);
        in_ECX[8] = in_ECX[8] + 1;
        in_ECX[2] = *(undefined4 *)(iVar4 + in_ECX[8] * 4);
        in_ECX[8] = in_ECX[8] + 1;
        in_ECX[3] = *(undefined4 *)(iVar4 + in_ECX[8] * 4);
        in_ECX[8] = in_ECX[8] + 1;
        uVar5 = *(undefined4 *)(iVar4 + in_ECX[8] * 4);
        in_ECX[4] = uVar5;
        in_ECX[8] = in_ECX[8] + 1;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      if (fVar1 == 100004.0) {
        *in_ECX = 3;
        uVar5 = *(undefined4 *)(iVar4 + iVar6 * 4);
        in_ECX[8] = uVar3 + 2;
        in_ECX[1] = uVar5;
        uVar5 = *(undefined4 *)(iVar4 + (uVar3 + 2) * 4);
        in_ECX[8] = uVar3 + 3;
        in_ECX[2] = uVar5;
        uVar5 = *(undefined4 *)(iVar4 + (uVar3 + 3) * 4);
        in_ECX[8] = uVar3 + 4;
        in_ECX[3] = uVar5;
        uVar5 = *(undefined4 *)(iVar4 + (uVar3 + 4) * 4);
        in_ECX[8] = uVar3 + 5;
        in_ECX[4] = uVar5;
        in_ECX[5] = *(undefined4 *)(iVar4 + (uVar3 + 5) * 4);
        in_ECX[8] = uVar3 + 6;
        in_ECX[6] = *(undefined4 *)(iVar4 + (uVar3 + 6) * 4);
        in_ECX[8] = uVar3 + 7;
        return CONCAT31((int3)(uVar3 + 7 >> 8),1);
      }
      if (fVar1 == 100005.0) {
        *in_ECX = 4;
      }
      return CONCAT31(CONCAT21((short)((uint)piVar2 >> 0x10),
                               (fVar1 == 100005.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < 100005.0),1
                     );
    }
    *in_ECX = 1;
  }
  in_ECX[1] = *(undefined4 *)(iVar4 + iVar6 * 4);
  in_ECX[8] = uVar3 + 2;
  in_ECX[2] = *(undefined4 *)(iVar4 + (uVar3 + 2) * 4);
  in_ECX[8] = uVar3 + 3;
  return CONCAT31((int3)(uVar3 + 3 >> 8),1);
}

