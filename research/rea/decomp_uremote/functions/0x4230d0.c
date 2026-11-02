// rea decompile_all
// name: FUN_004230d0
// address: 0x4230d0
// body: available
// range: 0x4230d0-0x423157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004230d0(void)

{
  undefined1 *in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint *puVar5;
  
  FUN_00423096();
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  iVar1 = FUN_004228d4();
  if (iVar1 == 0) {
    puVar5 = *(uint **)(in_ECX + 0x20);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar3 = (uint)CONCAT21(CONCAT11(in_EAX[4],in_EAX[5]),in_EAX[6]);
      iVar1 = (byte)in_EAX[7] + 1;
      do {
        *puVar5 = uVar3;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      in_EAX = in_EAX + 4;
    }
    *puVar5 = 0;
    uVar2 = *(undefined4 *)(in_ECX + 0x20);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

