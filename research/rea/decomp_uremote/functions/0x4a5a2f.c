// rea decompile_all
// name: FUN_004a5a2f
// address: 0x4a5a2f
// body: available
// range: 0x4a5a2f-0x4a5af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5a2f(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = in_EAX[2];
  if (iVar1 < 2) {
    iVar4 = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)*in_EAX;
      *param_1 = *piVar2;
      param_1[1] = piVar2[1];
      iVar1 = piVar2[3];
      param_1[2] = piVar2[2];
      param_1[3] = iVar1;
      return;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    piVar2 = (int *)*in_EAX;
    iVar3 = piVar2[1];
    iVar4 = *piVar2;
    iVar5 = piVar2[2] + iVar4;
    iVar6 = piVar2[3] + iVar3;
    while (iVar1 = iVar1 + -1, 0 < iVar1) {
      iVar4 = FUN_00440367(iVar4);
      iVar3 = FUN_00440367(iVar3);
      iVar5 = FUN_00439b5a(iVar5);
      iVar6 = FUN_00439b5a(iVar6);
    }
    param_1[3] = iVar6 - iVar3;
    param_1[2] = iVar5 - iVar4;
    param_1[1] = iVar3;
  }
  *param_1 = iVar4;
  return;
}

