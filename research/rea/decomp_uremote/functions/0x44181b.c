// rea decompile_all
// name: FUN_0044181b
// address: 0x44181b
// body: available
// range: 0x44181b-0x4418e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044181b(int param_1,int param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(in_EAX + 0xa0) < 1) {
LAB_004418e0:
    uVar2 = 0;
  }
  else {
    if (*(int *)(in_EAX + 0x78) < 1) {
      if (*(int *)(in_EAX + 0x80) < 1) goto LAB_004418e0;
      param_2 = *(int *)(in_EAX + 0x98) + param_2;
      piVar1 = (int *)(in_EAX + 0x9c);
      *piVar1 = param_2;
      *(float *)(in_EAX + 0xa8) = (float)(*(int *)(in_EAX + 0x84) * *(int *)(in_EAX + 0x80));
      if (0 < param_2) {
        *piVar1 = 0;
      }
      if (*piVar1 < *(int *)(in_EAX + 0x94)) {
        *piVar1 = *(int *)(in_EAX + 0x94);
      }
      iVar3 = *piVar1;
      uVar2 = *(undefined4 *)(*(int *)(in_EAX + 0xac) + 0x10);
    }
    else {
      param_1 = *(int *)(in_EAX + 0x8c) + param_1;
      *(int *)(in_EAX + 0x90) = param_1;
      *(float *)(in_EAX + 0xa4) = (float)(*(int *)(in_EAX + 0x7c) * *(int *)(in_EAX + 0x78));
      if (0 < param_1) {
        *(undefined4 *)(in_EAX + 0x90) = 0;
      }
      if (*(int *)(in_EAX + 0x90) < *(int *)(in_EAX + 0x88)) {
        *(int *)(in_EAX + 0x90) = *(int *)(in_EAX + 0x88);
      }
      iVar3 = *(int *)(*(int *)(in_EAX + 0xac) + 0x14);
      uVar2 = *(undefined4 *)(in_EAX + 0x90);
    }
    FUN_004c0bf7(uVar2,iVar3);
    uVar2 = 1;
  }
  return uVar2;
}

