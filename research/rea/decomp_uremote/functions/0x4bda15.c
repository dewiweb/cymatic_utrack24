// rea decompile_all
// name: FUN_004bda15
// address: 0x4bda15
// body: available
// range: 0x4bda15-0x4bdbaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bda15(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *_Dst;
  byte *_Src;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar6 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  _Dst = (byte *)(iVar6 + param_1[5]);
  iVar6 = param_1[2] * param_4 >> 8;
  if (iVar6 < 0xfe) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar2 = (uVar2 << 0x10 | uVar2) * iVar6;
      uVar4 = uVar2 >> 8 & 0xff00ff;
      iVar3 = 0x100 - (uVar2 >> 0x18);
      uVar2 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar3 >> 8 & 0xff00ff) + uVar4;
      iVar3 = ((uint)_Dst[1] * iVar3 >> 8) + uVar4;
      uVar2 = (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) & 0xff00ff;
      _Dst[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
      param_2 = param_2 + 1;
      _Dst[2] = (byte)(uVar2 >> 0x10);
      *_Dst = (byte)uVar2;
      _Dst = _Dst + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    param_4 = param_3;
    iVar6 = *(int *)(param_1[1] + 0xc);
    _Src = (byte *)(iVar6 * param_2 + param_1[6]);
    if (((iVar1 == iVar6) && (*(int *)(param_1[1] + 4) == 1)) && (*(int *)(*param_1 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar6 * param_3);
    }
    else {
      do {
        uVar2 = (uint)*_Src;
        uVar5 = uVar2 << 0x10 | uVar2;
        uVar4 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * (0x100 - uVar2) >> 8 & 0xff00ff) + uVar5;
        _Src = _Src + iVar6;
        iVar3 = ((uint)_Dst[1] * (0x100 - uVar2) >> 8) + uVar5;
        uVar2 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
        _Dst[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
        _Dst[2] = (byte)(uVar2 >> 0x10);
        *_Dst = (byte)uVar2;
        _Dst = _Dst + iVar1;
        param_4 = param_4 + -1;
      } while (0 < param_4);
    }
  }
  return;
}

