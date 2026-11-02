// rea decompile_all
// name: FUN_005853f0
// address: 0x5853f0
// body: available
// range: 0x5853f0-0x58573e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005853f0(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Dst;
  void *_Dst_00;
  int *in_ECX;
  int local_58;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5b15;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 4))(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_005af82d(8);
  local_8 = 0;
  if (iVar2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_00501870(param_2);
  }
  local_8 = 0xffffffff;
  if (((local_58 == 0) || (in_ECX[0x36] == 0)) || (in_ECX[0x37] == 0)) {
    uVar3 = 0;
  }
  else if ((iVar1 + 1U & 0xfffffffe) + 2 + (uint)(ushort)(*(short *)(local_58 + 6) + 2) < 0x401) {
    if (*(short *)((int)in_ECX + 0xce) == (short)in_ECX[0x35]) {
      _Dst = (void *)FUN_005b04d6((*(ushort *)((int)in_ECX + 0xd2) + 10) * 2);
      _Dst_00 = (void *)FUN_005b04d6((*(ushort *)(in_ECX + 0x35) + 10) * 4);
      if ((_Dst == (void *)0x0) || (_Dst_00 == (void *)0x0)) {
        if (_Dst != (void *)0x0) {
          FUN_005b13e8(_Dst);
        }
        if (_Dst_00 != (void *)0x0) {
          FUN_005b13e8(_Dst_00);
        }
        if (local_58 != 0) {
          FUN_00501900();
          FUN_005af7b6(local_58);
        }
        ExceptionList = local_10;
        return 0;
      }
      _memcpy(_Dst,(void *)in_ECX[0x36],(uint)*(ushort *)((int)in_ECX + 0xd2) << 1);
      _memcpy(_Dst_00,(void *)in_ECX[0x37],(uint)*(ushort *)(in_ECX + 0x35) << 2);
      FUN_005af7b6(in_ECX[0x36]);
      FUN_005af7b6(in_ECX[0x37]);
      in_ECX[0x36] = (int)_Dst;
      in_ECX[0x37] = (int)_Dst_00;
      *(short *)((int)in_ECX + 0xd2) = *(short *)((int)in_ECX + 0xd2) + 10;
      *(short *)(in_ECX + 0x35) = (short)in_ECX[0x35] + 10;
    }
    *(undefined2 *)(in_ECX[0x36] + (uint)*(ushort *)(in_ECX + 0x33) * 2) = param_1;
    *(short *)(in_ECX + 0x33) = (short)in_ECX[0x33] + 1;
    *(int *)(in_ECX[0x37] + (uint)*(ushort *)((int)in_ECX + 0xce) * 4) = local_58;
    *(short *)((int)in_ECX + 0xce) = *(short *)((int)in_ECX + 0xce) + 1;
    *(undefined1 *)(in_ECX + 0x45) = 1;
    uVar3 = 1;
  }
  else {
    if (local_58 != 0) {
      FUN_00501900();
      FUN_005af7b6(local_58);
    }
    uVar3 = 0;
  }
  ExceptionList = local_10;
  return uVar3;
}

