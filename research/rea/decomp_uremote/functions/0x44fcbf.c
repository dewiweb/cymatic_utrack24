// rea decompile_all
// name: FUN_0044fcbf
// address: 0x44fcbf
// body: available
// range: 0x44fcbf-0x44fde9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044fcbf(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  
  if (*(uint *)(unaff_EBX + 0x6154) != in_EAX) {
    FUN_004509e7(0);
    thunk_FUN_00450a2e();
    uVar1 = *(uint *)(unaff_EBX + 0x6154);
    if (uVar1 < *(uint *)(unaff_EBX + 0x2240)) {
      iVar2 = *(int *)(*(int *)(unaff_EBX + 0x2238) + uVar1 * 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (uVar1 < *(uint *)(unaff_EBX + 0x2240)) {
        piVar3 = *(int **)(*(int *)(unaff_EBX + 0x2238) + uVar1 * 4);
      }
      else {
        piVar3 = (int *)0x0;
      }
      (**(code **)(*piVar3 + 0x28))(0);
    }
    if (*(int *)(unaff_EBX + 0x6154) < 3) {
      FUN_00450801();
    }
    *(uint *)(unaff_EBX + 0x6154) = in_EAX;
    if (in_EAX < *(uint *)(unaff_EBX + 0x2240)) {
      iVar2 = *(int *)(*(int *)(unaff_EBX + 0x2238) + in_EAX * 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (in_EAX < *(uint *)(unaff_EBX + 0x2240)) {
        piVar3 = *(int **)(*(int *)(unaff_EBX + 0x2238) + in_EAX * 4);
      }
      else {
        piVar3 = (int *)0x0;
      }
      (**(code **)(*piVar3 + 0x28))(1);
      FUN_004c052f(1);
      if (*(uint *)(unaff_EBX + 0x6154) < *(uint *)(unaff_EBX + 0x2240)) {
        iVar2 = *(int *)(*(int *)(unaff_EBX + 0x2238) + *(uint *)(unaff_EBX + 0x6154) * 4);
      }
      else {
        iVar2 = 0;
      }
      FUN_0043f879(iVar2 + 0x78,0);
    }
    if ((*(byte *)(unaff_EBX + 0x6030) & 2) != 0) {
      FUN_004c052f(0);
    }
    if ((*(byte *)(unaff_EBX + 0x5f9c) & 2) != 0) {
      FUN_004c052f(0);
    }
  }
  return;
}

