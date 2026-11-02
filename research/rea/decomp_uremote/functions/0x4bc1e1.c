// rea decompile_all
// name: FUN_004bc1e1
// address: 0x4bc1e1
// body: available
// range: 0x4bc1e1-0x4bc369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc1e1(uint *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint3 *_Src;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint *_Dst;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  _Dst = (uint *)(iVar1 * param_2 + param_1[5]);
  param_2 = param_2 - param_1[3];
  iVar6 = (int)(param_1[2] * param_4) >> 8;
  if (iVar6 < 0xfe) {
    do {
      pbVar3 = (byte *)(*(int *)(param_1[1] + 0xc) * param_2 + param_1[6]);
      uVar2 = (pbVar3[1] | 0xff0000) * iVar6;
      iVar4 = 0x100 - (uVar2 >> 0x18);
      uVar2 = (uVar2 >> 8 & 0xff00ff) + ((*_Dst >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      uVar5 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar6 >> 8 & 0xff00ff) +
              ((*_Dst & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      param_2 = param_2 + 1;
      *_Dst = (((0x100 - (uVar2 >> 8 & 0xff00ff)) * 0x100 | uVar2 * 0x100) ^
              (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
              (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) << 8;
      _Dst = (uint *)((int)_Dst + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    param_4 = param_3;
    iVar6 = *(int *)(param_1[1] + 0xc);
    _Src = (uint3 *)(iVar6 * param_2 + param_1[6]);
    if (((iVar1 == iVar6) && (*(int *)(param_1[1] + 4) == 1)) && (*(int *)(*param_1 + 4) == 1)) {
      _memcpy(_Dst,_Src,iVar6 * param_3);
    }
    else {
      do {
        param_1 = _Dst;
        param_2 = (uint)*_Src;
        uVar2 = param_2;
        param_2._1_1_ = (byte)((ushort)(short)*_Src >> 8);
        *param_1 = ((*(byte *)((int)_Src + 2) | 0xffffff00) << 8 | (uint)param_2._1_1_) << 8 |
                   uVar2 & 0xff;
        _Src = (uint3 *)((int)_Src + iVar6);
        param_4 = param_4 + -1;
        _Dst = (uint *)((int)param_1 + iVar1);
      } while (0 < param_4);
    }
  }
  return;
}

