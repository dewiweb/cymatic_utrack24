// rea decompile_all
// name: FUN_0041f665
// address: 0x41f665
// body: available
// range: 0x41f665-0x41f765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041f665(char param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  int in_EAX;
  
  while( true ) {
    while( true ) {
      if (*(int *)(in_EAX + 0x400) < 0) {
        return 0;
      }
      *(int *)(in_EAX + 0x50) =
           (int)*(short *)(in_EAX + 0x3c2 + *(int *)(in_EAX + 0x400) * 4) * *(int *)(in_EAX + 4);
      *(int *)(in_EAX + 0x4c) =
           (int)*(short *)(in_EAX + 0x3c0 + *(int *)(in_EAX + 0x400) * 4) * *(int *)(in_EAX + 4);
      *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_EAX + 0x1c);
      *(undefined4 *)(in_EAX + 0x2c) = 0;
      cVar5 = FUN_0041ed76((int)param_1);
      if (cVar5 != '\0') break;
      if ((*(int *)(in_EAX + 0x5c) != 0) && (cVar5 = FUN_0041f3a3(), cVar5 != '\0')) {
        return *(undefined4 *)(in_EAX + 0x2c);
      }
      *(int *)(in_EAX + 0x400) = *(int *)(in_EAX + 0x400) + -1;
    }
    if (*(int *)(in_EAX + 0x2c) != 0x62) {
      return 1;
    }
    iVar3 = *(int *)(in_EAX + 0x400);
    *(undefined4 *)(in_EAX + 0x2c) = 0;
    sVar1 = *(short *)(in_EAX + 0x3c0 + iVar3 * 4);
    sVar2 = *(short *)(in_EAX + 0x3c2 + iVar3 * 4);
    sVar4 = (short)(((int)sVar2 + (int)sVar1) / 2);
    if ((6 < iVar3) || (sVar4 < sVar1)) break;
    *(short *)(in_EAX + 0x3c4 + iVar3 * 4) = sVar4;
    *(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x400) * 4) = sVar2;
    *(short *)(in_EAX + 0x3c2 + *(int *)(in_EAX + 0x400) * 4) = sVar4 + -1;
    *(int *)(in_EAX + 0x400) = *(int *)(in_EAX + 0x400) + 1;
  }
  *(undefined4 *)(in_EAX + 0x400) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0x14;
  return 0x14;
}

