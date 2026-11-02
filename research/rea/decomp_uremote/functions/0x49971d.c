// rea decompile_all
// name: FUN_0049971d
// address: 0x49971d
// body: available
// range: 0x49971d-0x4997fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049971d(int param_1,void *param_2)

{
  undefined1 uVar1;
  int iVar2;
  void *_Dst;
  void *_Dst_00;
  int unaff_EDI;
  
  if (param_1 == 0) {
    return;
  }
  if (unaff_EDI == 0) {
    return;
  }
  if (param_2 == (void *)0x0) {
    return;
  }
  iVar2 = FUN_004916cf(param_1,*(undefined4 *)(unaff_EDI + 0xec),0x14);
  if (iVar2 == 0) {
LAB_004997d3:
    FUN_004914c8(1);
  }
  else {
    FUN_00491789(param_1,*(undefined4 *)(unaff_EDI + 0xec));
    *(uint *)(unaff_EDI + 0xe8) = *(uint *)(unaff_EDI + 0xe8) | 0x200;
    *(int *)(unaff_EDI + 0xec) = iVar2;
    _Dst_00 = (void *)(iVar2 + *(int *)(unaff_EDI + 0xf0) * 0x14);
    _memcpy(_Dst_00,param_2,5);
    *(undefined1 *)((int)_Dst_00 + 4) = 0;
    uVar1 = FUN_004996e4();
    *(undefined1 *)((int)_Dst_00 + 0x10) = uVar1;
    if (*(int *)((int)param_2 + 0xc) == 0) {
      *(undefined4 *)((int)_Dst_00 + 8) = 0;
      *(undefined4 *)((int)_Dst_00 + 0xc) = 0;
    }
    else {
      _Dst = (void *)FUN_0049167e();
      *(void **)((int)_Dst_00 + 8) = _Dst;
      if (_Dst == (void *)0x0) goto LAB_004997d3;
      _memcpy(_Dst,*(void **)((int)param_2 + 8),*(size_t *)((int)param_2 + 0xc));
      *(undefined4 *)((int)_Dst_00 + 0xc) = *(undefined4 *)((int)param_2 + 0xc);
    }
    *(int *)(unaff_EDI + 0xf0) = *(int *)(unaff_EDI + 0xf0) + 1;
  }
  return;
}

