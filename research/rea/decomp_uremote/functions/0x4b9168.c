// rea decompile_all
// name: FUN_004b9168
// address: 0x4b9168
// body: available
// range: 0x4b9168-0x4b9367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9168(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint *_Src;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *_Dst;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  _Dst = (uint *)(iVar1 * param_2 + param_1[5]);
  iVar3 = param_2 - param_1[3];
  iVar4 = param_1[2] * param_4 >> 8;
  param_2 = iVar3;
  if (iVar4 < 0xfe) {
    do {
      uVar5 = *(uint *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar2 = (uVar5 >> 8 & 0xff00ff) * iVar4;
      iVar3 = 0x100 - (uVar2 >> 0x18);
      uVar2 = (uVar2 >> 8 & 0xff00ff) + ((*_Dst >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      uVar5 = ((*_Dst & 0xff00ff) * iVar3 >> 8 & 0xff00ff) +
              ((uVar5 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      param_2 = param_2 + 1;
      *_Dst = (((0x100 - (uVar2 >> 8 & 0xff00ff)) * 0x100 | uVar2 * 0x100) ^
              (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
              (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) << 8;
      _Dst = (uint *)((int)_Dst + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    param_2 = param_3;
    iVar4 = *(int *)(param_1[1] + 0xc);
    _Src = (uint *)(iVar4 * iVar3 + param_1[6]);
    if (((iVar1 == iVar4) && (*(int *)(param_1[1] + 4) == 1)) && (*(int *)(*param_1 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar4 * param_3);
    }
    else {
      do {
        uVar5 = *_Src;
        iVar3 = 0x100 - (uVar5 >> 0x18);
        uVar2 = (uVar5 >> 8 & 0xff00ff) + ((*_Dst >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
        uVar5 = ((*_Dst & 0xff00ff) * iVar3 >> 8 & 0xff00ff) + (uVar5 & 0xff00ff);
        _Src = (uint *)((int)_Src + iVar4);
        *_Dst = (((0x100 - (uVar2 >> 8 & 0xff00ff)) * 0x100 | uVar2 * 0x100) ^
                (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
                (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) << 8;
        _Dst = (uint *)((int)_Dst + iVar1);
        param_2 = param_2 + -1;
      } while (0 < param_2);
    }
  }
  return;
}

