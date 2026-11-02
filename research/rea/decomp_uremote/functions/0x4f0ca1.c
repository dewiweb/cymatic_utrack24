// rea decompile_all
// name: FUN_004f0ca1
// address: 0x4f0ca1
// body: available
// range: 0x4f0ca1-0x4f0e32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0ca1(int param_1,int param_2,int param_3,char param_4)

{
  BITMAPINFO *lpbmi;
  short sVar1;
  uint uVar2;
  HDC pHVar3;
  int iVar4;
  HDC pHVar5;
  HBITMAP h;
  HGDIOBJ pvVar6;
  size_t _Size;
  undefined4 *unaff_ESI;
  
  FUN_0047dc21(param_2,param_3);
  uVar2 = _DAT_0095dcbc & 1;
  *unaff_ESI = juce::WindowsBitmapImage::vftable;
  if (uVar2 == 0) {
    _DAT_0095dcbc = _DAT_0095dcbc | 1;
    pHVar3 = GetDC((HWND)0x0);
    iVar4 = GetDeviceCaps(pHVar3,0xc);
    ReleaseDC((HWND)0x0,pHVar3);
    DAT_0095dcb8 = 0x18 < iVar4;
  }
  if ((DAT_0095dcb8 == '\0') && (param_1 != 2)) {
    iVar4 = 3;
  }
  else {
    iVar4 = 4;
  }
  unaff_ESI[0x2a] = iVar4;
  lpbmi = (BITMAPINFO *)(unaff_ESI + 0xd);
  unaff_ESI[0x2b] = -(iVar4 * param_2 + 3U & 0xfffffffc);
  _memset(lpbmi,0,0x6c);
  unaff_ESI[0xe] = param_2;
  unaff_ESI[0xf] = param_3;
  unaff_ESI[0x1b] = 1;
  sVar1 = *(short *)(unaff_ESI + 0x2a);
  (lpbmi->bmiHeader).biSize = 0x6c;
  *(undefined2 *)(unaff_ESI + 0x10) = 1;
  *(short *)((int)unaff_ESI + 0x42) = sVar1 << 3;
  if (param_1 == 2) {
    unaff_ESI[0x1a] = 0xff000000;
    unaff_ESI[0x17] = 0xff0000;
    unaff_ESI[0x18] = 0xff00;
    unaff_ESI[0x19] = 0xff;
    unaff_ESI[0x11] = 3;
  }
  else {
    unaff_ESI[0x11] = 0;
  }
  pHVar3 = GetDC((HWND)0x0);
  pHVar5 = CreateCompatibleDC(pHVar3);
  unaff_ESI[0x28] = pHVar5;
  ReleaseDC((HWND)0x0,pHVar3);
  SetMapMode((HDC)unaff_ESI[0x28],1);
  h = CreateDIBSection((HDC)unaff_ESI[0x28],lpbmi,0,(void **)(unaff_ESI + 0x29),(HANDLE)0x0,0);
  unaff_ESI[0xb] = h;
  pvVar6 = SelectObject((HDC)unaff_ESI[0x28],h);
  unaff_ESI[0xc] = pvVar6;
  if ((param_1 == 2) && (param_4 != '\0')) {
    _Size = FUN_005af9e1(unaff_ESI[0x2b] * param_3);
    _memset((void *)unaff_ESI[0x29],0,_Size);
  }
  unaff_ESI[0x2c] = unaff_ESI[0x29] - (param_3 + -1) * unaff_ESI[0x2b];
  return;
}

