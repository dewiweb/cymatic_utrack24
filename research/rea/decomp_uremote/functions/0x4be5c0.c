// rea decompile_all
// name: FUN_004be5c0
// address: 0x4be5c0
// body: available
// range: 0x4be5c0-0x4be710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be5c0(undefined1 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int unaff_ESI;
  uint uVar8;
  
  FUN_004beca7(unaff_ESI,(float)param_2,(float)*(int *)(unaff_ESI + 0x60),param_3);
  do {
    uVar5 = *(uint *)(unaff_ESI + 0x18);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x28);
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x20);
    if (0 < *(int *)(unaff_ESI + 0x24)) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x1c);
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + 1;
    }
    uVar8 = *(uint *)(unaff_ESI + 0x2c);
    *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + *(int *)(unaff_ESI + 0x34);
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
    if (0 < *(int *)(unaff_ESI + 0x38)) {
      *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x30);
      *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + 1;
    }
    piVar1 = *(int **)(unaff_ESI + 0x4c);
    uVar3 = FUN_004aacb6();
    uVar4 = FUN_004aacb6();
    if (((*(int *)(unaff_ESI + 0x54) == 0) || (*(uint *)(unaff_ESI + 0x58) <= uVar3)) ||
       (*(uint *)(unaff_ESI + 0x5c) <= uVar4)) {
      *param_1 = *(undefined1 *)(piVar1[2] * uVar4 + piVar1[3] * uVar3 + *piVar1);
    }
    else {
      uVar5 = uVar5 & 0xff;
      uVar8 = uVar8 & 0xff;
      pbVar6 = (byte *)(piVar1[2] * uVar4 + piVar1[3] * uVar3 + *piVar1);
      iVar7 = 0x100 - uVar8;
      iVar2 = piVar1[3];
      *param_1 = (char)(((uint)pbVar6[(piVar1[2] + iVar2) - iVar2] * (0x100 - uVar5) +
                        pbVar6[piVar1[2] + iVar2 + 1] * uVar5) * uVar8 +
                        (uint)*pbVar6 * iVar7 * (0x100 - uVar5) + 0x8000 +
                        (uint)pbVar6[iVar2 + 1] * iVar7 * uVar5 >> 0x10);
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}

