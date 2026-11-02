// rea decompile_all
// name: FUN_004bd0bc
// address: 0x4bd0bc
// body: available
// range: 0x4bd0bc-0x4bd255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd0bc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *_Src;
  int iVar5;
  byte *_Dst;
  uint uVar6;
  byte local_8;
  
  piVar2 = param_1;
  iVar3 = *param_1;
  iVar1 = *(int *)(iVar3 + 0xc);
  iVar5 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  _Dst = (byte *)(iVar5 + param_1[5]);
  if (param_1[2] < 0xfe) {
    do {
      uVar4 = *(uint *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar6 = (uVar4 >> 8 & 0xff00ff) * param_1[2];
      iVar5 = 0x100 - (uVar6 >> 0x18);
      iVar3 = ((uint)_Dst[1] * iVar5 >> 8) + (uVar6 >> 8 & 0xff00ff);
      uVar4 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar5 >> 8 & 0xff00ff) +
              ((uVar4 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
      local_8 = (byte)iVar3;
      uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
      _Dst[1] = -(char)((uint)iVar3 >> 8) | local_8;
      param_2 = param_2 + 1;
      _Dst[2] = (byte)(uVar4 >> 0x10);
      *_Dst = (byte)uVar4;
      _Dst = _Dst + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    param_1 = (int *)param_3;
    iVar5 = *(int *)(piVar2[1] + 0xc);
    _Src = (uint *)(iVar5 * param_2 + piVar2[6]);
    if (((iVar1 == iVar5) && (*(int *)(piVar2[1] + 4) == 1)) && (*(int *)(iVar3 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar5 * param_3);
    }
    else {
      do {
        iVar3 = 0x100 - (uint)*(byte *)((int)_Src + 3);
        uVar4 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar3 >> 8 & 0xff00ff) + (*_Src & 0xff00ff)
        ;
        uVar6 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
        uVar4 = *_Src;
        _Src = (uint *)((int)_Src + iVar5);
        iVar3 = ((uint)_Dst[1] * iVar3 >> 8) + (uVar4 >> 8 & 0xff00ff);
        _Dst[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
        _Dst[2] = (byte)(uVar6 >> 0x10);
        *_Dst = (byte)uVar6;
        _Dst = _Dst + iVar1;
        param_1 = (int *)((int)param_1 + -1);
      } while (0 < (int)param_1);
    }
  }
  return;
}

