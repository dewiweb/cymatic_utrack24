// rea decompile_all
// name: FUN_00585860
// address: 0x585860
// body: available
// range: 0x585860-0x585aa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00585860(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Dst;
  int *in_ECX;
  int local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5b61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 4))(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_005af82d(8);
  local_8 = 0;
  if (iVar2 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_00501870(param_1);
  }
  local_8 = 0xffffffff;
  if ((local_44 == 0) || (in_ECX[0x37] == 0)) {
    uVar3 = 0;
  }
  else if ((iVar1 + 1U & 0xfffffffe) + (uint)(ushort)(*(short *)(local_44 + 6) + 2) < 0x401) {
    if (*(short *)((int)in_ECX + 0xce) == (short)in_ECX[0x35]) {
      _Dst = (void *)FUN_005b04d6((*(ushort *)(in_ECX + 0x35) + 10) * 4);
      if (_Dst == (void *)0x0) {
        if (local_44 != 0) {
          FUN_00501900();
          FUN_005af7b6(local_44);
        }
        ExceptionList = local_10;
        return 0;
      }
      _memcpy(_Dst,(void *)in_ECX[0x37],(uint)*(ushort *)(in_ECX + 0x35) << 2);
      FUN_005af7b6(in_ECX[0x37]);
      in_ECX[0x37] = (int)_Dst;
      *(short *)(in_ECX + 0x35) = (short)in_ECX[0x35] + 10;
    }
    *(int *)(in_ECX[0x37] + (uint)*(ushort *)((int)in_ECX + 0xce) * 4) = local_44;
    *(short *)((int)in_ECX + 0xce) = *(short *)((int)in_ECX + 0xce) + 1;
    *(undefined1 *)(in_ECX + 0x45) = 1;
    uVar3 = 1;
  }
  else {
    if (local_44 != 0) {
      FUN_00501900();
      FUN_005af7b6(local_44);
    }
    uVar3 = 0;
  }
  ExceptionList = local_10;
  return uVar3;
}

