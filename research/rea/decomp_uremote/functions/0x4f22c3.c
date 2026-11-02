// rea decompile_all
// name: FUN_004f22c3
// address: 0x4f22c3
// body: available
// range: 0x4f22c3-0x4f24bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f22c3(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  HINSTANCE hInstance;
  HWND pHVar5;
  LONG dwNewLong;
  int *piVar6;
  code *pcVar7;
  int *unaff_EDI;
  float10 fVar8;
  LPVOID lpParam;
  DWORD local_18;
  uint local_14;
  
  uVar2 = unaff_EDI[2];
  local_14 = 0x6000000;
  if ((uVar2 >> 3 & 1) == 0) {
    local_14 = (-(uint)(unaff_EDI[0xf] != 0) & 0xbff80000) + 0x86080000;
  }
  else {
    if ((char)uVar2 < '\0') {
      local_14 = 0x6080000;
    }
    if ((uVar2 & 0x10) != 0) {
      local_14 = local_14 | 0x40000;
    }
  }
  local_18 = (-(uint)((uVar2 & 1) != 0) & 0x3ff80) + 0x80;
  if ((uVar2 & 0x20) != 0) {
    local_14 = local_14 | 0x20000;
  }
  if ((uVar2 & 0x40) != 0) {
    local_14 = local_14 | 0x10000;
  }
  if ((uVar2 & 4) != 0) {
    local_18 = local_18 | 0x20;
  }
  if (((int)uVar2 < 0) && (cVar3 = FUN_004f0a6e(), cVar3 != '\0')) {
    local_18 = local_18 | 0x80000;
  }
  if (DAT_0095d6c8 == 0) {
    iVar4 = FUN_005af82d(8);
    if (iVar4 == 0) {
      DAT_0095d6c8 = 0;
    }
    else {
      DAT_0095d6c8 = FUN_004f1fb2();
    }
  }
  uVar1 = *(ushort *)(DAT_0095d6c8 + 4);
  lpParam = (LPVOID)0x0;
  hInstance = (HINSTANCE)FUN_0046d650();
  pHVar5 = CreateWindowExW(local_18,(LPCWSTR)(uint)uVar1,L"",local_14,0,0,0,0,(HWND)unaff_EDI[0xf],
                           (HMENU)0x0,hInstance,lpParam);
  unaff_EDI[0xe] = (int)pHVar5;
  if (pHVar5 != (HWND)0x0) {
    SetWindowLongW(pHVar5,0,0);
    SetWindowLongW((HWND)unaff_EDI[0xe],8,(LONG)unaff_EDI);
    pHVar5 = (HWND)unaff_EDI[0xe];
    dwNewLong = FUN_00474944();
    SetWindowLongW(pHVar5,-0x15,dwNewLong);
    if (unaff_EDI[0x1d] == 0) {
      if (((char)unaff_EDI[0xd] == '\0') || (piVar6 = (int *)FUN_004f1ae2(), piVar6 == (int *)0x0))
      {
        piVar6 = unaff_EDI;
      }
      iVar4 = FUN_005af82d(0xc);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004f1bc2(iVar4,piVar6);
      }
      unaff_EDI[0x1d] = iVar4;
    }
    RegisterDragDrop((HWND)unaff_EDI[0xe],(LPDROPTARGET)unaff_EDI[0x1d]);
    cVar3 = FUN_004f0a9c();
    if (cVar3 != '\0') {
      (*DAT_0095d6ac)(unaff_EDI[0xe],0);
    }
    FUN_004f0b6e();
    pcVar7 = (code *)FUN_0046d4a0("ChangeWindowMessageFilterEx");
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(unaff_EDI[0xe],0x233,1,0);
      (*pcVar7)(unaff_EDI[0xe],0x4a,1,0);
      (*pcVar7)(unaff_EDI[0xe],0x49,1,0);
    }
    FUN_004f1315();
    GetSystemMenu((HWND)unaff_EDI[0xe],0);
    fVar8 = (float10)FUN_004c1582();
    if ((float)fVar8 < 1.0) {
      (**(code **)(*unaff_EDI + 0x78))((float)fVar8);
    }
  }
  return;
}

