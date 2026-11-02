// rea decompile_all
// name: FUN_00502720
// address: 0x502720
// body: available
// range: 0x502720-0x50281f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00502720(char *param_1)

{
  ushort uVar1;
  size_t sVar2;
  void *_Dst;
  int *in_ECX;
  
  if (param_1 != (char *)0x0) {
    if (*(short *)((int)in_ECX + 6) == 0) {
      FUN_00501f30(param_1);
    }
    else {
      sVar2 = _strlen(param_1);
      uVar1 = *(short *)((int)in_ECX + 6) + 1 + (short)sVar2;
      if ((*(ushort *)(in_ECX + 1) < uVar1) &&
         (_Dst = (void *)FUN_005b04d6(uVar1), _Dst != (void *)0x0)) {
        _memcpy(_Dst,(void *)*in_ECX,(uint)*(ushort *)((int)in_ECX + 6));
        FUN_005b13e8(*in_ECX);
        *in_ECX = (int)_Dst;
        *(ushort *)(in_ECX + 1) = uVar1;
      }
      _memcpy((void *)((uint)*(ushort *)((int)in_ECX + 6) + *in_ECX),param_1,(sVar2 & 0xffff) + 1);
      *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + (short)sVar2;
    }
  }
  return in_ECX;
}

