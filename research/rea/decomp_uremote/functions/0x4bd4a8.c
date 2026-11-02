// rea decompile_all
// name: FUN_004bd4a8
// address: 0x4bd4a8
// body: available
// range: 0x4bd4a8-0x4bd601 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd4a8(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  byte *_Dst;
  byte *pbVar5;
  undefined2 *_Src;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = *(int *)(*param_1 + 0xc);
  iVar4 = iVar3 * param_2;
  param_2 = param_2 - param_1[3];
  _Dst = (byte *)(iVar4 + param_1[5]);
  iVar4 = param_1[2] * param_4 >> 8;
  if (iVar4 < 0xfe) {
    do {
      pbVar5 = (byte *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar8 = (pbVar5[1] | 0xff0000) * iVar4;
      iVar6 = 0x100 - (uVar8 >> 0x18);
      iVar7 = ((uint)_Dst[1] * iVar6 >> 8) + (uVar8 >> 8 & 0xff00ff);
      uVar8 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar4 >> 8 & 0xff00ff) +
              (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar6 >> 8 & 0xff00ff);
      uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
      _Dst[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
      param_2 = param_2 + 1;
      _Dst[2] = (byte)(uVar8 >> 0x10);
      *_Dst = (byte)uVar8;
      _Dst = _Dst + iVar3;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    param_4 = param_3;
    iVar4 = *(int *)(param_1[1] + 0xc);
    _Src = (undefined2 *)(iVar4 * param_2 + param_1[6]);
    if (((iVar3 == iVar4) && (*(int *)(param_1[1] + 4) == 1)) && (*(int *)(*param_1 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar4 * param_3);
    }
    else {
      do {
        uVar2 = *_Src;
        bVar1 = *(byte *)(_Src + 1);
        param_2._0_1_ = (byte)uVar2;
        *_Dst = (byte)param_2;
        param_2._1_1_ = (byte)((ushort)uVar2 >> 8);
        _Dst[1] = param_2._1_1_;
        _Dst[2] = bVar1;
        _Dst = _Dst + iVar3;
        _Src = (undefined2 *)((int)_Src + iVar4);
        param_4 = param_4 + -1;
      } while (0 < param_4);
    }
  }
  return;
}

