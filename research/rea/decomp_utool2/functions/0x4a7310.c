// rea decompile_all
// name: FUN_004a7310
// address: 0x4a7310
// body: available
// range: 0x4a7310-0x4a75dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a7310(void)

{
  HINSTANCE hInstance;
  char cVar1;
  HWND pHVar2;
  LONG LVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  BOOL BVar6;
  int *in_ECX;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  tagWINDOWINFO local_50;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007039be;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar11 = in_ECX[2];
  if ((uVar11 >> 3 & 1) == 0) {
    uVar10 = 0x86080000;
    if (in_ECX[0xf] != 0) {
      uVar10 = 0x46000000;
    }
  }
  else {
    uVar7 = (uVar11 & 0x80 | 0x6000) << 0xc;
    uVar10 = uVar7 | 0x40000;
    if ((uVar11 & 0x10) == 0) {
      uVar10 = uVar7;
    }
  }
  uVar7 = in_ECX[2];
  uVar9 = 0x80;
  if ((uVar11 & 1) != 0) {
    uVar9 = 0x40000;
  }
  uVar11 = uVar10 | 0x20000;
  if ((uVar7 & 0x20) == 0) {
    uVar11 = uVar10;
  }
  uVar10 = uVar11 | 0x10000;
  if ((uVar7 & 0x40) == 0) {
    uVar10 = uVar11;
  }
  uVar11 = uVar9 | 0x20;
  if ((uVar7 & 4) == 0) {
    uVar11 = uVar9;
  }
  if (((int)uVar7 < 0) && (cVar1 = FUN_00687a20(local_14), cVar1 != '\0')) {
    uVar11 = uVar11 | 0x80000;
  }
  if (DAT_00c8a64c == (HINSTANCE)0x0) {
    DAT_00c8a64c = GetModuleHandleA((LPCSTR)0x0);
  }
  hInstance = DAT_00c8a64c;
  if (DAT_00c8a69c == 0) {
    operator_new(8);
    local_8 = 0;
    DAT_00c8a69c = FUN_004a6b50();
    local_8 = 0xffffffff;
  }
  pHVar2 = CreateWindowExW(uVar11,(LPCWSTR)(uint)*(ushort *)(DAT_00c8a69c + 4),
                           (LPCWSTR)&PTR_00c1dcf8,uVar10,0,0,0,0,(HWND)in_ECX[0xf],(HMENU)0x0,
                           hInstance,(LPVOID)0x0);
  in_ECX[0xe] = (int)pHVar2;
  if (pHVar2 == (HWND)0x0) goto LAB_004a75c2;
  SetWindowLongW(pHVar2,0,0);
  SetWindowLongW((HWND)in_ECX[0xe],8,(LONG)in_ECX);
  pHVar2 = (HWND)in_ECX[0xe];
  LVar3 = FUN_00462d70();
  SetWindowLongW(pHVar2,-0x15,LVar3);
  if (in_ECX[0x1d] == 0) {
    piVar12 = (int *)0x0;
    if ((char)in_ECX[0xd] != '\0') {
      pHVar2 = (HWND)in_ECX[0xf];
      if (pHVar2 != (HWND)0x0) {
        LVar3 = GetWindowLongW(pHVar2,-0x15);
        iVar4 = FUN_00462d70();
        if (LVar3 == iVar4) {
          piVar12 = (int *)GetWindowLongW(pHVar2,8);
          goto LAB_004a74a9;
        }
      }
      piVar12 = (int *)0x0;
    }
LAB_004a74a9:
    operator_new(0xc);
    local_8 = 1;
    piVar8 = in_ECX;
    if (piVar12 != (int *)0x0) {
      piVar8 = piVar12;
    }
    iVar4 = FUN_004a64c0(piVar8);
    local_8 = 0xffffffff;
    in_ECX[0x1d] = iVar4;
  }
  RegisterDragDrop((HWND)in_ECX[0xe],(LPDROPTARGET)in_ECX[0x1d]);
  cVar1 = FUN_00687990();
  if (cVar1 != '\0') {
    (*DAT_00c8a690)(in_ECX[0xe],0);
  }
  FUN_00687880();
  hModule = GetModuleHandleA("user32.dll");
  pFVar5 = GetProcAddress(hModule,"ChangeWindowMessageFilterEx");
  if (pFVar5 != (FARPROC)0x0) {
    (*pFVar5)(in_ECX[0xe],0x233,1,0);
    (*pFVar5)(in_ECX[0xe],0x4a,1,0);
    (*pFVar5)(in_ECX[0xe],0x49,1,0);
  }
  local_50.cbSize = 0x3c;
  BVar6 = GetWindowInfo((HWND)in_ECX[0xe],&local_50);
  if (BVar6 != 0) {
    in_ECX[0x18] = local_50.rcClient.top - local_50.rcWindow.top;
    in_ECX[0x19] = local_50.rcClient.left - local_50.rcWindow.left;
    in_ECX[0x1a] = local_50.rcWindow.bottom - local_50.rcClient.bottom;
    in_ECX[0x1b] = local_50.rcWindow.right - local_50.rcClient.right;
  }
  GetSystemMenu((HWND)in_ECX[0xe],0);
  fVar13 = (float)(int)(0xff - (uint)*(byte *)(in_ECX[1] + 0x6c)) / 255.0;
  if (fVar13 < 1.0) {
    (**(code **)(*in_ECX + 0x78))(fVar13);
  }
LAB_004a75c2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

