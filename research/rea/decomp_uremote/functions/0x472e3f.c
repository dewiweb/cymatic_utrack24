// rea decompile_all
// name: FUN_00472e3f
// address: 0x472e3f
// body: available
// range: 0x472e3f-0x472e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472e3f(void)

{
  int *piVar1;
  int *_Dst;
  int iVar2;
  undefined4 *puVar3;
  int *in_EAX;
  uint unaff_EBX;
  
  if (unaff_EBX < (uint)in_EAX[2]) {
    _Dst = (int *)(*in_EAX + unaff_EBX * 4);
    puVar3 = (undefined4 *)*_Dst;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
    in_EAX[2] = in_EAX[2] + -1;
    if (0 < (int)(in_EAX[2] - unaff_EBX)) {
      _memmove(_Dst,_Dst + 1,(in_EAX[2] - unaff_EBX) * 4);
    }
    if ((in_EAX[2] * 2 < in_EAX[1]) && (in_EAX[2] < in_EAX[1])) {
      FUN_004f8197();
    }
  }
  return;
}

