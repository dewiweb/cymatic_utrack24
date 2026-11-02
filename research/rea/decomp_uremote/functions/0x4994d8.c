// rea decompile_all
// name: FUN_004994d8
// address: 0x4994d8
// body: available
// range: 0x4994d8-0x4995b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004994d8(void *param_1,size_t param_2,undefined4 *param_3)

{
  int in_EAX;
  void *_Dst;
  int iVar1;
  int unaff_EBX;
  
  if ((in_EAX != 0) && (unaff_EBX != 0)) {
    if (param_1 != (void *)0x0) {
      FUN_0048f0ec();
      _Dst = (void *)FUN_0049174b();
      *(void **)(unaff_EBX + 0x9c) = _Dst;
      *(void **)(in_EAX + 0x168) = _Dst;
      if (param_2 - 1 < 0x100) {
        _memcpy(_Dst,param_1,param_2);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      iVar1 = 1 << (*(byte *)(unaff_EBX + 0x18) & 0x1f);
      if (((*(char *)(unaff_EBX + 0x19) == '\0') && (iVar1 < (int)(uint)*(ushort *)(param_3 + 2)))
         || ((*(char *)(unaff_EBX + 0x19) == '\x02' &&
             (((iVar1 < (int)(uint)*(ushort *)((int)param_3 + 2) ||
               (iVar1 < (int)(uint)*(ushort *)(param_3 + 1))) ||
              (iVar1 < (int)(uint)*(ushort *)((int)param_3 + 6))))))) {
        FUN_00491216();
      }
      *(undefined4 *)(unaff_EBX + 0xa0) = *param_3;
      *(undefined4 *)(unaff_EBX + 0xa4) = param_3[1];
      *(undefined2 *)(unaff_EBX + 0xa8) = *(undefined2 *)(param_3 + 2);
      if (param_2 == 0) {
        param_2 = 1;
      }
    }
    *(short *)(unaff_EBX + 0x16) = (short)param_2;
    if (param_2 != 0) {
      *(uint *)(unaff_EBX + 8) = *(uint *)(unaff_EBX + 8) | 0x10;
      *(uint *)(unaff_EBX + 0xe8) = *(uint *)(unaff_EBX + 0xe8) | 0x2000;
    }
  }
  return;
}

