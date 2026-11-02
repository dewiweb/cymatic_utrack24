// rea decompile_all
// name: FUN_004f6082
// address: 0x4f6082
// body: available
// range: 0x4f6082-0x4f60fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6082(void)

{
  uint uVar1;
  uint in_EAX;
  void *_Dst;
  uint in_ECX;
  int iVar2;
  int *unaff_EDI;
  void *_Src;
  undefined1 local_8 [4];
  
  if ((in_ECX != in_EAX) && (uVar1 = unaff_EDI[2], in_ECX < uVar1)) {
    if (uVar1 <= in_EAX) {
      in_EAX = uVar1 - 1;
    }
    _memcpy(local_8,(void *)(*unaff_EDI + in_ECX * 4),4);
    if ((int)in_ECX < (int)in_EAX) {
      iVar2 = in_EAX - in_ECX;
      _Dst = (void *)(*unaff_EDI + in_ECX * 4);
      _Src = (void *)((int)_Dst + 4);
    }
    else {
      iVar2 = in_ECX - in_EAX;
      _Src = (void *)(*unaff_EDI + in_EAX * 4);
      _Dst = (void *)((int)_Src + 4);
    }
    _memmove(_Dst,_Src,iVar2 * 4);
    _memcpy((void *)(*unaff_EDI + in_EAX * 4),local_8,4);
  }
  return;
}

