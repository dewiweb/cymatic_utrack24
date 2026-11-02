// rea decompile_all
// name: FUN_006256b0
// address: 0x6256b0
// body: available
// range: 0x6256b0-0x6257a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006256b0(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *in_ECX;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
  puVar4 = (undefined4 *)FUN_006264b0(((int)(in_ECX[6] + param_1) >> 5) + 1);
  iVar7 = in_ECX[6];
  uVar5 = (int)param_1 >> 5;
  in_ECX[6] = iVar7 + param_1;
  if (uVar5 != 0) {
    iVar7 = iVar7 >> 5;
    if (-1 < iVar7) {
      puVar6 = puVar4 + uVar5 + iVar7;
      do {
        puVar1 = puVar4 + iVar7;
        iVar7 = iVar7 + -1;
        *puVar6 = *puVar1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar7);
    }
    uVar9 = uVar5;
    puVar6 = puVar4;
    if (uVar5 != 0) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    param_1 = param_1 & 0x1f;
  }
  if (param_1 != 0) {
    bVar3 = (byte)param_1;
    for (uVar9 = in_ECX[6] >> 5; uVar5 < uVar9; uVar9 = uVar9 - 1) {
      puVar4[uVar9] =
           (uint)puVar4[uVar9 - 1] >> (0x20 - bVar3 & 0x1f) | puVar4[uVar9] << (bVar3 & 0x1f);
    }
    puVar4[uVar5] = puVar4[uVar5] << (bVar3 & 0x1f);
  }
  piVar8 = (int *)*in_ECX;
  if (piVar8 == (int *)0x0) {
    piVar8 = in_ECX + 1;
  }
  iVar7 = in_ECX[6] >> 5;
  while( true ) {
    if (iVar7 < 0) {
      in_ECX[6] = -1;
      return;
    }
    uVar5 = piVar8[iVar7];
    if (uVar5 != 0) break;
    iVar7 = iVar7 + -1;
  }
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  in_ECX[6] = iVar7 * 0x20 + iVar2;
  return;
}

