// rea decompile_all
// name: FUN_00559080
// address: 0x559080
// body: available
// range: 0x559080-0x55922f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00559080(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *_Dst;
  int in_ECX;
  undefined1 local_5;
  
  local_5 = 0;
  *param_2 = 0;
  cVar1 = FUN_00558ea0(param_1);
  if (cVar1 == '\0') {
    if (*(short *)(in_ECX + 0x10) == *(short *)(in_ECX + 0xc)) {
      *param_2 = 0x17;
    }
    else {
      if (*(short *)(in_ECX + 0x10) == *(short *)(in_ECX + 0xe)) {
        if (*(int *)(in_ECX + 8) == 0) {
          uVar3 = FUN_005b04d6(0x10);
          *(undefined4 *)(in_ECX + 8) = uVar3;
          _memset(*(void **)(in_ECX + 8),0,0x10);
          *(undefined2 *)(in_ECX + 0xe) = 2;
        }
        else {
          _Dst = (void *)FUN_005b04d6((*(ushort *)(in_ECX + 0xe) + 2) * 8);
          if (_Dst == (void *)0x0) {
            return 0;
          }
          _memcpy(_Dst,*(void **)(in_ECX + 8),(uint)*(ushort *)(in_ECX + 0xe) << 3);
          _memset((void *)((int)_Dst + (uint)*(ushort *)(in_ECX + 0xe) * 8),0,0x10);
          FUN_005b13e8(*(undefined4 *)(in_ECX + 8));
          *(void **)(in_ECX + 8) = _Dst;
          *(short *)(in_ECX + 0xe) = *(short *)(in_ECX + 0xe) + 2;
        }
      }
      uVar2 = FUN_0055b050(param_1);
      *(undefined2 *)(*(int *)(in_ECX + 8) + (uint)*(ushort *)(in_ECX + 0x10) * 8) = uVar2;
      *(undefined2 *)(*(int *)(in_ECX + 8) + 2 + (uint)*(ushort *)(in_ECX + 0x10) * 8) =
           *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(*(int *)(in_ECX + 8) + 4 + (uint)*(ushort *)(in_ECX + 0x10) * 8) = 0;
      *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + 1;
      local_5 = 1;
    }
  }
  return local_5;
}

