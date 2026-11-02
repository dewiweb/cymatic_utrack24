// rea decompile_all
// name: FUN_0042ac58
// address: 0x42ac58
// body: available
// range: 0x42ac58-0x42acce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ac58(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  byte *pbVar3;
  
  iVar2 = *(int *)(in_EAX + 0x130);
  if (*(int *)(in_EAX + 0x10) < iVar2) {
    if (*(char *)(in_EAX + 0x231) != '\0') {
      *(undefined4 *)(in_EAX + 0xc) = 0x81;
    }
  }
  else {
    while (0 < iVar2) {
      *(int *)(in_EAX + 0x1c) = *(int *)(in_EAX + 0x1c) + -1;
      uVar1 = *(ushort *)(*(int *)(in_EAX + 0x18) + *(int *)(in_EAX + 0x1c) * 4);
      if (uVar1 < *(ushort *)(in_EAX + 0x98)) {
        pbVar3 = (byte *)((uint)uVar1 + *(int *)(in_EAX + 0xa8));
        *pbVar3 = *pbVar3 ^ 1;
      }
      else if (*(char *)(in_EAX + 0x231) != '\0') {
        *(undefined4 *)(in_EAX + 0xc) = 0x86;
        return;
      }
      *(int *)(in_EAX + 0x130) = *(int *)(in_EAX + 0x130) + -1;
      iVar2 = *(int *)(in_EAX + 0x130);
    }
  }
  *(undefined4 *)(in_EAX + 0x130) = 1;
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 0x1c);
  return;
}

