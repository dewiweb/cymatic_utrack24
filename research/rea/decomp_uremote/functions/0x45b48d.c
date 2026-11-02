// rea decompile_all
// name: FUN_0045b48d
// address: 0x45b48d
// body: available
// range: 0x45b48d-0x45b4ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b48d(void)

{
  void *_Dst;
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + -1;
  iVar2 = *(int *)(in_EAX + 0x20) - in_EDX;
  _Dst = (void *)(*(int *)(in_EAX + 0x18) + in_EDX * 4);
  if (0 < iVar2) {
    _memmove(_Dst,(void *)((int)_Dst + 4),iVar2 * 4);
  }
  uVar1 = *(undefined4 *)(in_EAX + 0x20);
  iVar2 = *(int *)(in_EAX + 0x1c);
  iVar3 = FUN_00439b5a(0);
  if (iVar3 < iVar2) {
    FUN_00439b5a(0);
    iVar3 = FUN_00439b5a(uVar1);
    if (iVar3 < iVar2) {
      FUN_0045b4eb();
    }
  }
  return;
}

