// rea decompile_all
// name: FUN_0047000a
// address: 0x47000a
// body: available
// range: 0x47000a-0x470051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047000a(void)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte in_DL;
  undefined1 *unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)piVar1[9] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)piVar1[0xd];
    }
    if (iVar3 < 1) {
      uVar4 = (**(code **)(*piVar1 + 4))(in_DL);
    }
    else {
      *(int *)piVar1[0xd] = *(int *)piVar1[0xd] + -1;
      pbVar2 = *(byte **)piVar1[9];
      *(byte **)piVar1[9] = pbVar2 + 1;
      *pbVar2 = in_DL;
      uVar4 = (uint)in_DL;
    }
    if (uVar4 != 0xffffffff) {
      return;
    }
  }
  *unaff_ESI = 1;
  return;
}

