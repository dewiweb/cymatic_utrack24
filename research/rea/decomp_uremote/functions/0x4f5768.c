// rea decompile_all
// name: FUN_004f5768
// address: 0x4f5768
// body: available
// range: 0x4f5768-0x4f57fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f5768(int param_1,short *param_2,undefined4 *param_3)

{
  short *psVar1;
  undefined4 uVar2;
  SIZE_T dwBytes;
  LPVOID _Src;
  HGLOBAL _Dst;
  
  psVar1 = *(short **)(param_1 + 0xc);
  if ((((*(uint *)(param_2 + 8) & *(uint *)(psVar1 + 8)) != 0) && (*param_2 == *psVar1)) &&
     (*(int *)(param_2 + 4) == *(int *)(psVar1 + 4))) {
    uVar2 = *(undefined4 *)(psVar1 + 8);
    param_3[2] = 0;
    *param_3 = uVar2;
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 1) {
      dwBytes = GlobalSize(*(HGLOBAL *)(*(int *)(param_1 + 0x10) + 4));
      _Src = GlobalLock(*(HGLOBAL *)(*(int *)(param_1 + 0x10) + 4));
      _Dst = GlobalAlloc(0,dwBytes);
      _memcpy(_Dst,_Src,dwBytes);
      GlobalUnlock(*(HGLOBAL *)(*(int *)(param_1 + 0x10) + 4));
      param_3[1] = _Dst;
      return 0;
    }
  }
  return 0x80040064;
}

