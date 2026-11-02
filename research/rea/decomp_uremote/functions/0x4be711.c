// rea decompile_all
// name: FUN_004be711
// address: 0x4be711
// body: available
// range: 0x4be711-0x4be8d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be711(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_ESI;
  
  FUN_004beca7(unaff_ESI,(float)param_2,(float)*(int *)(unaff_ESI + 0x60),param_3);
  do {
    uVar4 = *(uint *)(unaff_ESI + 0x18);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x28);
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x20);
    if (0 < *(int *)(unaff_ESI + 0x24)) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x1c);
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + 1;
    }
    uVar1 = *(uint *)(unaff_ESI + 0x2c);
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
    *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + *(int *)(unaff_ESI + 0x34);
    if (0 < *(int *)(unaff_ESI + 0x38)) {
      *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x30);
      *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + 1;
    }
    uVar7 = (int)uVar4 >> 8;
    uVar6 = (int)uVar1 >> 8;
    if (*(int *)(unaff_ESI + 0x54) == 0) {
LAB_004be88a:
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      if ((int)*(uint *)(unaff_ESI + 0x58) < (int)uVar7) {
        uVar7 = *(uint *)(unaff_ESI + 0x58);
      }
      if ((int)*(uint *)(unaff_ESI + 0x5c) < (int)uVar6) {
        uVar6 = *(uint *)(unaff_ESI + 0x5c);
      }
      piVar2 = *(int **)(unaff_ESI + 0x4c);
      *param_1 = *(undefined1 *)(piVar2[2] * uVar6 + piVar2[3] * uVar7 + *piVar2);
    }
    else if (uVar7 < *(uint *)(unaff_ESI + 0x58)) {
      if (uVar6 < *(uint *)(unaff_ESI + 0x5c)) {
        piVar2 = *(int **)(unaff_ESI + 0x4c);
        uVar4 = uVar4 & 0xff;
        pbVar5 = (byte *)(piVar2[2] * uVar6 + piVar2[3] * uVar7 + *piVar2);
        iVar8 = 0x100 - (uVar1 & 0xff);
        iVar3 = piVar2[3];
        *param_1 = (char)(((uint)pbVar5[(piVar2[2] + iVar3) - iVar3] * (0x100 - uVar4) +
                          pbVar5[piVar2[2] + iVar3 + 1] * uVar4) * (uVar1 & 0xff) +
                          (uint)*pbVar5 * iVar8 * (0x100 - uVar4) + 0x8000 +
                          (uint)pbVar5[iVar3 + 1] * iVar8 * uVar4 >> 0x10);
      }
      else {
        FUN_004bee92(param_1,uVar4 & 0xff);
      }
    }
    else {
      if (*(uint *)(unaff_ESI + 0x5c) <= uVar6) goto LAB_004be88a;
      FUN_004beec3(param_1,uVar1 & 0xff);
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return;
    }
  } while( true );
}

