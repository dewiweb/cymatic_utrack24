// rea decompile_all
// name: FUN_004a51b0
// address: 0x4a51b0
// body: available
// range: 0x4a51b0-0x4a53ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a51b0(int param_1,int param_2,int param_3,char param_4)

{
  void **ppvBits;
  HDC pHVar1;
  HBITMAP h;
  HGDIOBJ pvVar2;
  HDC pHVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint uVar5;
  
  iVar4 = *(int *)ThreadLocalStoragePointer;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = param_1;
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *in_ECX = juce::WindowsBitmapImage::vftable;
  if ((*(int *)(iVar4 + 4) < DAT_00d0000c) && (FUN_004c0391(&DAT_00d0000c), DAT_00d0000c == -1)) {
    pHVar3 = GetDC((HWND)0x0);
    iVar4 = GetDeviceCaps(pHVar3,0xc);
    ReleaseDC((HWND)0x0,pHVar3);
    DAT_00d00014 = 0x18 < iVar4;
    FUN_004c0352(&DAT_00d0000c);
  }
  if ((DAT_00d00014 != '\0') || (iVar4 = 3, param_1 == 2)) {
    iVar4 = 4;
  }
  in_ECX[0x2a] = iVar4;
  in_ECX[0x2b] = -(iVar4 * param_2 + 3U & 0xfffffffc);
  _memset(in_ECX + 0xd,0,0x6c);
  in_ECX[0xe] = param_2;
  *(undefined2 *)(in_ECX + 0x10) = 1;
  in_ECX[0x1b] = 1;
  in_ECX[0xd] = 0x6c;
  in_ECX[0xf] = param_3;
  *(short *)((int)in_ECX + 0x42) = *(short *)(in_ECX + 0x2a) << 3;
  if (param_1 == 2) {
    in_ECX[0x1a] = 0xff000000;
    in_ECX[0x17] = 0xff0000;
    in_ECX[0x18] = 0xff00;
    in_ECX[0x19] = 0xff;
    in_ECX[0x11] = 3;
  }
  else {
    in_ECX[0x11] = 0;
  }
  pHVar3 = GetDC((HWND)0x0);
  pHVar1 = CreateCompatibleDC(pHVar3);
  in_ECX[0x28] = pHVar1;
  ReleaseDC((HWND)0x0,pHVar3);
  SetMapMode((HDC)in_ECX[0x28],1);
  ppvBits = (void **)(in_ECX + 0x29);
  h = CreateDIBSection((HDC)in_ECX[0x28],(BITMAPINFO *)(in_ECX + 0xd),0,ppvBits,(HANDLE)0x0,0);
  in_ECX[0xb] = h;
  pvVar2 = SelectObject((HDC)in_ECX[0x28],h);
  in_ECX[0xc] = pvVar2;
  if ((param_1 == 2) && (param_4 != '\0')) {
    uVar5 = in_ECX[0x2b] * param_3 >> 0x1f;
    _memset(*ppvBits,0,(in_ECX[0x2b] * param_3 ^ uVar5) - uVar5);
  }
  in_ECX[0x2c] = (int)*ppvBits - (param_3 + -1) * in_ECX[0x2b];
  return;
}

