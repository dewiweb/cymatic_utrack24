// rea decompile_all
// name: FUN_004f100b
// address: 0x4f100b
// body: available
// range: 0x4f100b-0x4f10d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HICON FUN_004f100b(BOOL param_1,DWORD param_2,DWORD param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int nWidth;
  HBITMAP ho;
  HICON pHVar4;
  UINT nPlanes;
  UINT nBitCount;
  undefined4 uVar5;
  void *lpBits;
  ICONINFO local_38;
  undefined1 local_24 [16];
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x4f1017;
  iVar1 = FUN_005af82d(0xb4);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    uVar5 = 1;
    uVar2 = FUN_0047e371(1);
    uVar3 = FUN_0047e366(uVar2);
    local_14 = FUN_004f0ca1(2,uVar3,uVar2,uVar5);
  }
  FUN_0047e2f2();
  local_8 = 0;
  FUN_0047cc87();
  local_8._0_1_ = 1;
  FUN_0047d915(local_24,0,0,0);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0047cca3();
  lpBits = (void *)0x0;
  nBitCount = 1;
  nPlanes = 1;
  iVar1 = FUN_0047e371();
  nWidth = FUN_0047e366();
  ho = CreateBitmap(nWidth,iVar1,nPlanes,nBitCount,lpBits);
  local_38.fIcon = param_1;
  local_38.xHotspot = param_2;
  local_38.yHotspot = param_3;
  local_38.hbmColor = *(HBITMAP *)(local_14 + 0x2c);
  local_38.hbmMask = ho;
  pHVar4 = CreateIconIndirect(&local_38);
  DeleteObject(ho);
  FUN_004c4d7a();
  return pHVar4;
}

