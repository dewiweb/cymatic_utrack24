// rea decompile_all
// name: FUN_0056eee0
// address: 0x56eee0
// body: available
// range: 0x56eee0-0x56f083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0056eee0(short param_1,int param_2)

{
  ushort uVar1;
  void *_Dst;
  ushort *in_ECX;
  uint uVar2;
  
  if (param_2 == 1) {
    in_ECX[6] = *in_ECX + 1 & 0xfffe;
  }
  else if (param_2 == 2) {
    in_ECX[6] = *in_ECX + 3 & 0xfffc;
  }
  else if (param_2 == 3) {
    in_ECX[6] = *in_ECX + 3 & 0xfffc;
  }
  else {
    in_ECX[6] = *in_ECX;
  }
  in_ECX[6] = in_ECX[6] + param_1;
  if (in_ECX[1] <= in_ECX[6]) {
    uVar1 = in_ECX[1];
    _Dst = (void *)FUN_005b04d6(uVar1 + 0x100);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(int *)(in_ECX + 2) != 0) {
      _memcpy(_Dst,*(void **)(in_ECX + 2),(uint)*in_ECX);
      FUN_005b13e8(*(undefined4 *)(in_ECX + 2));
    }
    *(void **)(in_ECX + 2) = _Dst;
    *(uint *)(in_ECX + 4) = (uint)*in_ECX + *(int *)(in_ECX + 2);
    in_ECX[1] = uVar1 + 0x100;
  }
  if (*(int *)(in_ECX + 2) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*in_ECX + *(int *)(in_ECX + 2);
    if (param_2 == 1) {
      uVar2 = uVar2 + 1 & 0xfffffffe;
    }
    else if (param_2 == 2) {
      uVar2 = uVar2 + 3 & 0xfffffffc;
    }
    else if (param_2 == 3) {
      uVar2 = uVar2 + 3 & 0xfffffffc;
    }
  }
  return uVar2;
}

