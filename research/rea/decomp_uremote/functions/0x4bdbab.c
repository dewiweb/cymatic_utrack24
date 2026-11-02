// rea decompile_all
// name: FUN_004bdbab
// address: 0x4bdbab
// body: available
// range: 0x4bdbab-0x4bdd34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdbab(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *_Dst;
  byte *_Src;
  
  piVar2 = param_1;
  iVar4 = *param_1;
  iVar1 = *(int *)(iVar4 + 0xc);
  iVar7 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  _Dst = (byte *)(iVar7 + param_1[5]);
  if (param_1[2] < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar3 = (uVar3 << 0x10 | uVar3) * param_1[2];
      uVar5 = uVar3 >> 8 & 0xff00ff;
      iVar4 = 0x100 - (uVar3 >> 0x18);
      uVar3 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * iVar4 >> 8 & 0xff00ff) + uVar5;
      iVar4 = ((uint)_Dst[1] * iVar4 >> 8) + uVar5;
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
    param_1 = (int *)param_3;
    iVar7 = *(int *)(piVar2[1] + 0xc);
    _Src = (byte *)(iVar7 * param_2 + piVar2[6]);
    if (((iVar1 == iVar7) && (*(int *)(piVar2[1] + 4) == 1)) && (*(int *)(iVar4 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar7 * param_3);
    }
    else {
      do {
        uVar3 = (uint)*_Src;
        uVar6 = uVar3 << 0x10 | uVar3;
        uVar5 = (((uint)_Dst[2] << 0x10 | (uint)*_Dst) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar6;
        _Src = _Src + iVar7;
        iVar4 = ((uint)_Dst[1] * (0x100 - uVar3) >> 8) + uVar6;
        uVar3 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
        _Dst[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
        _Dst[2] = (byte)(uVar3 >> 0x10);
        *_Dst = (byte)uVar3;
        _Dst = _Dst + iVar1;
        param_1 = (int *)((int)param_1 + -1);
      } while (0 < (int)param_1);
    }
  }
  return;
}

