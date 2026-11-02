// rea decompile_all
// name: FUN_004bca46
// address: 0x4bca46
// body: available
// range: 0x4bca46-0x4bcc32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bca46(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *_Src;
  uint uVar5;
  uint *_Dst;
  uint uVar6;
  
  piVar2 = param_1;
  iVar1 = *(int *)(*param_1 + 0xc);
  _Dst = (uint *)(iVar1 * param_2 + param_1[5]);
  param_2 = param_2 - param_1[3];
  if (param_1[2] < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar3 = (uVar3 << 0x10 | uVar3) * param_1[2];
      uVar5 = uVar3 >> 8 & 0xff00ff;
      iVar4 = 0x100 - (uVar3 >> 0x18);
      uVar3 = uVar5 + ((*_Dst >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      uVar5 = ((*_Dst & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + uVar5;
      param_2 = param_2 + 1;
      *_Dst = (((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100) ^
              (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
              ((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100);
      _Dst = (uint *)((int)_Dst + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    param_1 = (int *)param_3;
    iVar4 = *(int *)(piVar2[1] + 0xc);
    _Src = (byte *)(iVar4 * param_2 + piVar2[6]);
    if (((iVar1 == iVar4) && (*(int *)(piVar2[1] + 4) == 1)) && (*(int *)(*piVar2 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar4 * param_3);
    }
    else {
      do {
        uVar5 = (uint)*_Src;
        uVar6 = uVar5 << 0x10 | uVar5;
        uVar3 = uVar6 + ((*_Dst >> 8 & 0xff00ff) * (0x100 - uVar5) >> 8 & 0xff00ff);
        uVar6 = ((*_Dst & 0xff00ff) * (0x100 - uVar5) >> 8 & 0xff00ff) + uVar6;
        _Src = _Src + iVar4;
        *_Dst = (((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100) ^
                (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6)) & 0xff00ff ^
                ((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100);
        _Dst = (uint *)((int)_Dst + iVar1);
        param_1 = (int *)((int)param_1 + -1);
      } while (0 < (int)param_1);
    }
  }
  return;
}

