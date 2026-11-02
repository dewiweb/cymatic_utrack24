// rea decompile_all
// name: FUN_0047f542
// address: 0x47f542
// body: available
// range: 0x47f542-0x47f623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0047f542(int param_1,char param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    if (*(int *)(in_EAX + 0x514) <= *(int *)(in_EAX + 0x510) + param_1) {
      if (*(char *)(in_EAX + 0x50e) != '\0') {
        return 0xffffffff;
      }
      iVar1 = *(int *)(in_EAX + 0x518) + in_EAX;
      *(undefined1 *)(in_EAX + 8) = *(undefined1 *)(iVar1 + 6);
      *(undefined1 *)(in_EAX + 9) = *(undefined1 *)(iVar1 + 7);
      iVar1 = FUN_0047f1bb(in_EAX + 10);
      if (iVar1 == 0) {
        *(undefined1 *)(in_EAX + 0x50e) = 1;
      }
      *(int *)(in_EAX + 0x510) = *(int *)(in_EAX + 0x510) + (0x10 - *(int *)(in_EAX + 0x514));
      *(int *)(in_EAX + 0x518) = iVar1 + 2;
      *(int *)(in_EAX + 0x514) = (iVar1 + 2) * 8;
    }
    iVar2 = 0;
    _param_2 = 0;
    iVar1 = *(int *)(in_EAX + 0x510);
    if (0 < param_1) {
      do {
        _param_2 = _param_2 |
                   (uint)((*(byte *)((iVar1 >> 3) + 8 + in_EAX) & (byte)(1 << ((byte)iVar1 & 7))) !=
                         0) << ((byte)iVar2 & 0x1f);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    *(int *)(in_EAX + 0x510) = *(int *)(in_EAX + 0x510) + param_1;
  }
  else {
    *(undefined4 *)(in_EAX + 0x510) = 0;
    *(undefined4 *)(in_EAX + 0x514) = 0;
    *(undefined1 *)(in_EAX + 0x50e) = 0;
    _param_2 = 0;
  }
  return _param_2;
}

