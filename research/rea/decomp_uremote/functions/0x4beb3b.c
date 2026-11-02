// rea decompile_all
// name: FUN_004beb3b
// address: 0x4beb3b
// body: available
// range: 0x4beb3b-0x4beca6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004beb3b(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  int unaff_ESI;
  uint uVar6;
  
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
    uVar6 = (int)uVar1 >> 8;
    uVar5 = (int)uVar2 >> 8;
    if (*(int *)(unaff_ESI + 0x54) == 0) {
LAB_004bec4a:
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      if ((int)*(uint *)(unaff_ESI + 0x58) < (int)uVar6) {
        uVar6 = *(uint *)(unaff_ESI + 0x58);
      }
      if ((int)*(uint *)(unaff_ESI + 0x5c) < (int)uVar5) {
        uVar5 = *(uint *)(unaff_ESI + 0x5c);
      }
      piVar3 = *(int **)(unaff_ESI + 0x4c);
      puVar4 = (undefined1 *)(piVar3[2] * uVar5 + piVar3[3] * uVar6 + *piVar3);
      *param_1 = *puVar4;
      param_1[1] = puVar4[1];
      param_1[2] = puVar4[2];
    }
    else if (uVar6 < *(uint *)(unaff_ESI + 0x58)) {
      if (uVar5 < *(uint *)(unaff_ESI + 0x5c)) {
        FUN_004bed4c(unaff_ESI,param_1,uVar1 & 0xff,uVar2 & 0xff);
      }
      else {
        FUN_004beef4(unaff_ESI,param_1);
      }
    }
    else {
      if (*(uint *)(unaff_ESI + 0x5c) <= uVar5) goto LAB_004bec4a;
      FUN_004bee23(unaff_ESI,param_1);
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return;
    }
  } while( true );
}

