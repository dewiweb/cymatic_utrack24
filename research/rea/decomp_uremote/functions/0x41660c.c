// rea decompile_all
// name: FUN_0041660c
// address: 0x41660c
// body: available
// range: 0x41660c-0x416680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041660c(undefined4 param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  void *unaff_EBX;
  void *_Dst;
  bool bVar2;
  int local_8;
  
  uVar1 = 0;
  _Dst = (void *)0x0;
  local_8 = 0;
  if ((in_EAX != 0) && (*(char *)((int)unaff_EBX + (in_EAX - 1)) == '\0')) {
    in_EAX = in_EAX - 1;
  }
  bVar2 = in_EAX != 0;
  if (in_EAX != 0) {
    do {
      if ((*(byte *)(uVar1 + (int)unaff_EBX) < 0x20) || (0x7f < *(byte *)(uVar1 + (int)unaff_EBX)))
      {
        bVar2 = false;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EAX);
  }
  if ((bVar2) && (_Dst = (void *)FUN_00411912(in_EAX + 1,&local_8), local_8 == 0)) {
    _memcpy(_Dst,unaff_EBX,in_EAX);
    *(undefined1 *)((int)_Dst + in_EAX) = 0;
  }
  *param_2 = _Dst;
  return local_8;
}

