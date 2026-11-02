// rea decompile_all
// name: FUN_0048a4e2
// address: 0x48a4e2
// body: available
// range: 0x48a4e2-0x48a59e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a4e2(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *_Dst;
  uint _Size;
  undefined1 *puVar5;
  void *pvVar6;
  int local_10;
  
  iVar2 = *param_4;
  iVar3 = *(int *)(param_1 + 0x1a0) + *(int *)((int)param_2 + 4);
  _Size = (uint)*(byte *)(iVar3 + 0x8c);
  uVar4 = (uint)*(byte *)(iVar3 + 0x96);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    param_2 = param_3;
    do {
      puVar5 = (undefined1 *)*param_2;
      _Dst = *(void **)(iVar2 + iVar3 * 4);
      pvVar6 = (void *)(*(int *)(param_1 + 0x5c) + (int)_Dst);
      param_4 = _Dst;
      while (_Dst < pvVar6) {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        local_10 = CONCAT31(local_10._1_3_,uVar1);
        if (_Size != 0) {
          _memset(_Dst,local_10,_Size);
          _Dst = (void *)((int)param_4 + _Size);
          param_4 = _Dst;
        }
      }
      if (1 < uVar4) {
        FUN_0048e6d5(iVar2,iVar3 + 1,*(undefined4 *)(param_1 + 0x5c));
      }
      iVar3 = iVar3 + uVar4;
      param_2 = param_2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x114));
  }
  return;
}

