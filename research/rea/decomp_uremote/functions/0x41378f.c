// rea decompile_all
// name: FUN_0041378f
// address: 0x41378f
// body: available
// range: 0x41378f-0x41394b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041378f(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int *in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)(param_1 + 0x4c);
  *piVar8 = *in_EAX << 2;
  *(int *)(param_1 + 0x50) = in_EAX[1] << 2;
  *(int *)(param_1 + 0x54) = *in_ECX << 2;
  *(int *)(param_1 + 0x58) = in_ECX[1] << 2;
  *(int *)(param_1 + 0x5c) = *in_EDX << 2;
  iVar1 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = in_EDX[1] << 2;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x68) = iVar2;
  iVar6 = iVar4;
  if (iVar1 < iVar4) {
    iVar6 = iVar1;
  }
  if (iVar4 < iVar1) {
    iVar4 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 < iVar6) {
    iVar6 = iVar1;
  }
  if (iVar4 < iVar1) {
    iVar4 = iVar1;
  }
  if (iVar2 < iVar6) {
    iVar6 = iVar2;
  }
  if (iVar4 < iVar2) {
    iVar4 = iVar2;
  }
  if ((iVar6 >> 8 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x10) <= iVar4 >> 8))
  goto LAB_00413835;
LAB_00413819:
  FUN_0041334b(*piVar8,piVar8[1]);
  if (piVar8 == (int *)(param_1 + 0x4c)) {
    return;
  }
  piVar8 = piVar8 + -6;
LAB_00413835:
  do {
    iVar1 = piVar8[6];
    iVar6 = iVar1 - *piVar8;
    iVar2 = piVar8[7] - piVar8[1];
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = -iVar6;
    }
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = -iVar2;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar4 * 0xec + iVar3 * 0x61;
    }
    else {
      iVar4 = iVar3 * 0xec + iVar4 * 0x61;
    }
    if (iVar4 >> 8 < 0x8000) {
      iVar4 = (iVar4 >> 8) * 0x2a;
      iVar9 = piVar8[2] - *piVar8;
      iVar5 = iVar9 * iVar2;
      iVar3 = (piVar8[3] - piVar8[1]) * iVar6;
      iVar7 = iVar5 - iVar3;
      if (iVar7 < 0) {
        iVar7 = iVar3 - iVar5;
      }
      if (iVar7 <= iVar4) {
        iVar3 = (piVar8[4] - *piVar8) * iVar2;
        iVar7 = (piVar8[5] - piVar8[1]) * iVar6;
        iVar5 = iVar3 - iVar7;
        if (iVar5 < 0) {
          iVar5 = iVar7 - iVar3;
        }
        if ((((iVar5 <= iVar4) && (-1 < (piVar8[3] - piVar8[1]) * iVar2 + iVar9 * iVar6)) &&
            (-1 < (piVar8[5] - piVar8[1]) * iVar2 + (piVar8[4] - *piVar8) * iVar6)) &&
           ((-1 < (piVar8[7] - piVar8[3]) * iVar2 + (iVar1 - piVar8[2]) * iVar6 &&
            (-1 < (piVar8[7] - piVar8[5]) * iVar2 + (iVar1 - piVar8[4]) * iVar6))))
        goto LAB_00413819;
      }
    }
    FUN_004136df();
    piVar8 = piVar8 + 6;
  } while( true );
}

