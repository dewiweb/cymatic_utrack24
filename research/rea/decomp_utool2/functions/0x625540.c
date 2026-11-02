// rea decompile_all
// name: FUN_00625540
// address: 0x625540
// body: available
// range: 0x625540-0x6256a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00625540(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar4 = in_ECX[6];
  if (iVar4 < (int)param_1) {
    FUN_0062ca00();
    return;
  }
  piVar6 = (int *)*in_ECX;
  iVar7 = (int)param_1 >> 5;
  uVar1 = (iVar4 >> 5) - iVar7;
  uVar2 = uVar1 + 1;
  in_ECX[6] = iVar4 - param_1;
  if (piVar6 == (int *)0x0) {
    piVar6 = in_ECX + 1;
  }
  if (iVar7 != 0) {
    uVar5 = 0;
    if (uVar2 != 0) {
      piVar8 = piVar6 + iVar7;
      do {
        iVar4 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar6[uVar5] = iVar4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    if (iVar7 != 0) {
      piVar8 = piVar6 + uVar2;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
    }
    param_1 = param_1 & 0x1f;
  }
  if (param_1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      if (7 < uVar1) {
        puVar3 = (uint *)(piVar6 + 4);
        do {
          uVar2 = uVar2 + 8;
          uVar10 = (ulonglong)(0x20 - param_1);
          uVar9 = (ulonglong)param_1;
          puVar3[-4] = puVar3[-3] << uVar10 | puVar3[-4] >> uVar9;
          puVar3[-3] = puVar3[-2] << uVar10 | puVar3[-3] >> uVar9;
          puVar3[-2] = puVar3[-1] << uVar10 | puVar3[-2] >> uVar9;
          puVar3[-1] = *puVar3 << uVar10 | puVar3[-1] >> uVar9;
          *puVar3 = puVar3[1] << uVar10 | *puVar3 >> uVar9;
          puVar3[1] = puVar3[2] << uVar10 | puVar3[1] >> uVar9;
          puVar3[2] = puVar3[3] << uVar10 | puVar3[2] >> uVar9;
          puVar3[3] = puVar3[4] << uVar10 | puVar3[3] >> uVar9;
          puVar3 = puVar3 + 8;
        } while (uVar2 < (uVar1 & 0xfffffff8));
      }
      for (; uVar2 < uVar1; uVar2 = uVar2 + 1) {
        piVar6[uVar2] =
             piVar6[uVar2 + 1] << ((byte)(0x20 - param_1) & 0x1f) |
             (uint)piVar6[uVar2] >> ((byte)param_1 & 0x1f);
      }
    }
    piVar6[uVar1] = (uint)piVar6[uVar1] >> ((byte)param_1 & 0x1f);
  }
  piVar6 = (int *)*in_ECX;
  if (piVar6 == (int *)0x0) {
    piVar6 = in_ECX + 1;
  }
  iVar4 = in_ECX[6] >> 5;
  while( true ) {
    if (iVar4 < 0) {
      in_ECX[6] = -1;
      return;
    }
    uVar1 = piVar6[iVar4];
    if (uVar1 != 0) break;
    iVar4 = iVar4 + -1;
  }
  iVar7 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  in_ECX[6] = iVar4 * 0x20 + iVar7;
  return;
}

