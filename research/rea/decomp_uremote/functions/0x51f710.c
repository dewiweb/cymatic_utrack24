// rea decompile_all
// name: FUN_0051f710
// address: 0x51f710
// body: available
// range: 0x51f710-0x51f84a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f710(int param_1)

{
  int iVar1;
  void *_Dst;
  int *in_ECX;
  
  if (param_1 != 0) {
    if (*(short *)((int)in_ECX + 6) == (short)in_ECX[1]) {
      if (*in_ECX == 0) {
        iVar1 = FUN_005b04d6(0x10);
        *in_ECX = iVar1;
        _memset((void *)*in_ECX,0,0x10);
        *(undefined2 *)(in_ECX + 1) = 4;
      }
      else {
        _Dst = (void *)FUN_005b04d6((*(ushort *)(in_ECX + 1) + 4) * 4);
        if (_Dst != (void *)0x0) {
          _memcpy(_Dst,(void *)*in_ECX,(uint)*(ushort *)(in_ECX + 1) << 2);
          _memset((void *)((int)_Dst + (uint)*(ushort *)(in_ECX + 1) * 4),0,0x10);
          FUN_005b13e8(*in_ECX);
          *in_ECX = (int)_Dst;
          *(short *)(in_ECX + 1) = (short)in_ECX[1] + 4;
        }
      }
    }
    if (*(ushort *)((int)in_ECX + 6) < *(ushort *)(in_ECX + 1)) {
      *(int *)(*in_ECX + (uint)*(ushort *)((int)in_ECX + 6) * 4) = param_1;
      *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
    }
  }
  return;
}

