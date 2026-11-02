// rea decompile_all
// name: FUN_00413065
// address: 0x413065
// body: available
// range: 0x413065-0x4130f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413065(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int *piVar5;
  
  piVar1 = *(int **)(in_EAX + 0x3d8);
  if (*(short *)(in_EAX + 0x3d6) < 1) {
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
  }
  else {
    iVar2 = *piVar1;
    *(int *)(in_EAX + 0xc) = iVar2;
    *(int *)(in_EAX + 8) = iVar2;
    iVar2 = piVar1[1];
    *(int *)(in_EAX + 0x14) = iVar2;
    *(int *)(in_EAX + 0x10) = iVar2;
    piVar4 = piVar1;
    while (piVar5 = piVar4 + 2, piVar5 < piVar1 + *(short *)(in_EAX + 0x3d6) * 2) {
      iVar2 = *piVar5;
      iVar3 = piVar4[3];
      if (iVar2 < *(int *)(in_EAX + 8)) {
        *(int *)(in_EAX + 8) = iVar2;
      }
      if (*(int *)(in_EAX + 0xc) < iVar2) {
        *(int *)(in_EAX + 0xc) = iVar2;
      }
      if (iVar3 < *(int *)(in_EAX + 0x10)) {
        *(int *)(in_EAX + 0x10) = iVar3;
      }
      piVar4 = piVar5;
      if (*(int *)(in_EAX + 0x14) < iVar3) {
        *(int *)(in_EAX + 0x14) = iVar3;
      }
    }
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) >> 6;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) >> 6;
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 0x3f >> 6;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 0x3f >> 6;
  }
  return;
}

