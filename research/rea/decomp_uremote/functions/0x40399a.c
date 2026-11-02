// rea decompile_all
// name: FUN_0040399a
// address: 0x40399a
// body: available
// range: 0x40399a-0x403aa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040399a(int param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_EDX;
  int iVar6;
  int *piVar7;
  uint local_8;
  
  piVar1 = (int *)(param_1 * 0x154 + 0x28 + in_EDX);
  if (param_1 == 0) {
    iVar6 = *(int *)(in_EAX + 4);
    iVar2 = *(int *)(in_EAX + 0xc);
  }
  else {
    iVar6 = *(int *)(in_EAX + 8);
    iVar2 = *(int *)(in_EAX + 0x10);
  }
  if ((piVar1[0x53] != iVar6) || (piVar1[0x54] != iVar2)) {
    piVar1[0x53] = iVar6;
    piVar1[0x54] = iVar2;
    *piVar1 = iVar6;
    piVar1[1] = iVar2;
    local_8 = 0;
    if (piVar1[0x36] != 0) {
      piVar7 = piVar1 + 0x3a;
      do {
        iVar3 = FUN_00401000(piVar7[-3],iVar6);
        piVar7[-2] = iVar3 + iVar2;
        piVar7[-1] = iVar3 + iVar2;
        iVar3 = FUN_00401000(*piVar7,iVar6);
        piVar7[3] = piVar7[3] & 0xfffffffe;
        piVar7[1] = iVar3 + iVar2;
        piVar7[2] = iVar3 + iVar2;
        iVar3 = FUN_00401000(piVar7[-3] - *piVar7,iVar6);
        if (iVar3 + 0x30U < 0x61) {
          piVar7[-1] = piVar7[-2] + 0x20U & 0xffffffc0;
          iVar4 = FUN_0040d2d8();
          iVar4 = iVar4 - *piVar7;
          iVar3 = iVar4;
          if (iVar4 < 0) {
            iVar3 = -iVar4;
          }
          iVar3 = FUN_00401000(iVar3,iVar6);
          if (iVar3 < 0x20) {
            uVar5 = 0;
          }
          else {
            uVar5 = iVar3 + 0x20U & 0xffffffc0;
          }
          if (iVar4 < 0) {
            uVar5 = -uVar5;
          }
          piVar7[3] = piVar7[3] | 1;
          piVar7[2] = piVar7[-1] - uVar5;
        }
        local_8 = local_8 + 1;
        piVar7 = piVar7 + 7;
      } while (local_8 < (uint)piVar1[0x36]);
    }
  }
  return;
}

