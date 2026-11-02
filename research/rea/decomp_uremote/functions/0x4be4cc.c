// rea decompile_all
// name: FUN_004be4cc
// address: 0x4be4cc
// body: available
// range: 0x4be4cc-0x4be5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be4cc(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  
  FUN_004beca7(unaff_ESI,(float)param_2,(float)*(int *)(unaff_ESI + 0x60),param_3);
  do {
    uVar1 = *(uint *)(unaff_ESI + 0x18);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x28);
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x20);
    if (0 < *(int *)(unaff_ESI + 0x24)) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x1c);
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + 1;
    }
    uVar2 = *(uint *)(unaff_ESI + 0x2c);
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
    *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + *(int *)(unaff_ESI + 0x34);
    if (0 < *(int *)(unaff_ESI + 0x38)) {
      *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x30);
      *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + 1;
    }
    piVar3 = *(int **)(unaff_ESI + 0x4c);
    uVar4 = FUN_004aacb6();
    uVar5 = FUN_004aacb6();
    if (((*(int *)(unaff_ESI + 0x54) == 0) || (*(uint *)(unaff_ESI + 0x58) <= uVar4)) ||
       (*(uint *)(unaff_ESI + 0x5c) <= uVar5)) {
      *param_1 = *(undefined4 *)(piVar3[2] * uVar5 + piVar3[3] * uVar4 + *piVar3);
    }
    else {
      FUN_004bef63(unaff_ESI,param_1,uVar1 & 0xff,uVar2 & 0xff);
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}

