// rea decompile_all
// name: FUN_0042f6a2
// address: 0x42f6a2
// body: available
// range: 0x42f6a2-0x42f78e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042f6a2(int param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar4 = *(int **)(in_EAX + 0x214);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
    piVar4 = (int *)0x0;
  }
  if (*(int *)(param_1 + 8) == 10) {
    (**(code **)(param_1 + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      piVar2 = (int *)&stack0xfffffff8;
      if (piVar4 != (int *)0x0) {
        piVar2 = piVar4 + 0x24;
      }
      goto LAB_0042f758;
    }
    if (iVar1 == 4) {
      piVar2 = (int *)&stack0xfffffff8;
      if (piVar4 != (int *)0x0) {
        piVar2 = piVar4 + 0x35;
      }
      goto LAB_0042f758;
    }
    if (iVar1 == 5) {
      piVar2 = (int *)&stack0xfffffff8;
      if (piVar4 != (int *)0x0) {
        piVar2 = piVar4 + 0x47;
      }
      goto LAB_0042f758;
    }
  }
  piVar2 = (int *)&stack0xfffffff8;
LAB_0042f758:
  if (*piVar2 == 0) {
    uVar3 = 0;
  }
  else if ((*(int *)(param_1 + 8) == 8) || (*(int *)(param_1 + 8) == 9)) {
    uVar3 = (**(code **)(unaff_ESI + 0x44))();
  }
  else {
    uVar3 = (**(code **)(unaff_ESI + 0x40))();
  }
  return uVar3;
}

