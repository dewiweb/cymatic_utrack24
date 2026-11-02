// rea decompile_all
// name: FUN_004bea3e
// address: 0x4bea3e
// body: available
// range: 0x4bea3e-0x4beb3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bea3e(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *in_EAX;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int unaff_ESI;
  
  FUN_004beca7(unaff_ESI,(float)param_1,(float)*(int *)(unaff_ESI + 0x60),param_2);
  do {
    uVar1 = *(uint *)(unaff_ESI + 0x18);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x28);
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x20);
    if (0 < *(int *)(unaff_ESI + 0x24)) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x1c);
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + 1;
    }
    uVar2 = *(uint *)(unaff_ESI + 0x2c);
    *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + *(int *)(unaff_ESI + 0x34);
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
    if (0 < *(int *)(unaff_ESI + 0x38)) {
      *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x30);
      *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + 1;
    }
    piVar3 = *(int **)(unaff_ESI + 0x4c);
    uVar4 = FUN_004aacb6();
    uVar5 = FUN_004aacb6();
    if (((*(int *)(unaff_ESI + 0x54) == 0) || (*(uint *)(unaff_ESI + 0x58) <= uVar4)) ||
       (*(uint *)(unaff_ESI + 0x5c) <= uVar5)) {
      puVar6 = (undefined1 *)(piVar3[2] * uVar5 + piVar3[3] * uVar4 + *piVar3);
      *in_EAX = *puVar6;
      in_EAX[1] = puVar6[1];
      in_EAX[2] = puVar6[2];
    }
    else {
      FUN_004bed4c(unaff_ESI,in_EAX,uVar1 & 0xff,uVar2 & 0xff);
    }
    in_EAX = in_EAX + 3;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  return;
}

