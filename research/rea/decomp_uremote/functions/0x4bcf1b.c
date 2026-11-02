// rea decompile_all
// name: FUN_004bcf1b
// address: 0x4bcf1b
// body: available
// range: 0x4bcf1b-0x4bd0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bcf1b(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *_Dst;
  uint uVar6;
  uint *_Src;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar5 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  _Dst = (byte *)(iVar5 + param_1[5]);
  iVar5 = param_1[2] * param_4 >> 8;
  if (iVar5 < 0xfe) {
    do {
      uVar3 = *(uint *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar6 = (uVar3 >> 8 & 0xff00ff) * iVar5;
      iVar2 = 0x100 - (uVar6 >> 0x18);
      iVar4 = ((uint)_Dst[1] * iVar2 >> 8) + (uVar6 >> 8 & 0xff00ff);
      uVar3 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar2 >> 8 & 0xff00ff) +
              ((uVar3 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
      uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
      _Dst[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
      param_2 = param_2 + 1;
      _Dst[2] = (byte)(uVar3 >> 0x10);
      *_Dst = (byte)uVar3;
      _Dst = _Dst + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    iVar5 = *(int *)(param_1[1] + 0xc);
    _Src = (uint *)(iVar5 * param_2 + param_1[6]);
    param_2 = param_3;
    if (((iVar1 == iVar5) && (*(int *)(param_1[1] + 4) == 1)) && (*(int *)(*param_1 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar5 * param_3);
    }
    else {
      do {
        iVar2 = 0x100 - (uint)*(byte *)((int)_Src + 3);
        uVar6 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar2 >> 8 & 0xff00ff) + (*_Src & 0xff00ff)
        ;
        uVar3 = *_Src;
        _Src = (uint *)((int)_Src + iVar5);
        iVar2 = ((uint)_Dst[1] * iVar2 >> 8) + (uVar3 >> 8 & 0xff00ff);
        uVar3 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
        _Dst[1] = -(char)((uint)iVar2 >> 8) | (byte)iVar2;
        _Dst[2] = (byte)(uVar3 >> 0x10);
        *_Dst = (byte)uVar3;
        _Dst = _Dst + iVar1;
        param_2 = param_2 + -1;
      } while (0 < param_2);
    }
  }
  return;
}

