// rea decompile_all
// name: FUN_00405beb
// address: 0x405beb
// body: available
// range: 0x405beb-0x405cd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00405c6f) */

int FUN_00405beb(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  void *_Dst;
  int unaff_ESI;
  undefined4 *_Dst_00;
  int local_8;
  
  local_8 = 0;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x44088);
  iVar2 = FUN_00405519(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_00411976(0x10,*(undefined4 *)(unaff_ESI + 0x4408c),&local_8);
    *(int *)(unaff_ESI + 0x4408c) = iVar2;
    if (local_8 == 0) {
      _Dst_00 = (undefined4 *)(*(int *)(unaff_ESI + 0x44090) * 0x10 + iVar2);
      _memset(_Dst_00,0,0x10);
      sVar3 = _strlen(param_1);
      _Dst = (void *)FUN_00411976(1,0,&local_8);
      *_Dst_00 = _Dst;
      if (local_8 == 0) {
        _memcpy(_Dst,param_1,sVar3 + 1);
        _Dst_00[2] = 0;
        _Dst_00[1] = 1;
        local_8 = FUN_004054b3(*(int *)(unaff_ESI + 0x44090) + 0x53,uVar1);
        if (local_8 == 0) {
          *(int *)(unaff_ESI + 0x44090) = *(int *)(unaff_ESI + 0x44090) + 1;
        }
      }
    }
  }
  return local_8;
}

