// rea decompile_all
// name: FUN_004f273c
// address: 0x4f273c
// body: available
// range: 0x4f273c-0x4f2bc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004f273c(HDC param_1,HRGN__ *param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HRGN__ *pHVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  HDC local_207c [2];
  HRGN *local_2074;
  int local_2070;
  int local_206c;
  int local_2068;
  int local_2064;
  int local_2060;
  int local_205c;
  int local_2058;
  int local_2054;
  undefined1 *local_2050;
  int local_204c;
  int local_2048;
  HRGN local_2044;
  int local_2040;
  int local_203c;
  HDC local_2038;
  int local_2034;
  undefined4 local_2030;
  HRGN__ *local_202c;
  undefined4 local_2028;
  int local_2024;
  int local_2020;
  RECT *local_201c;
  HRGN__ *local_2018;
  _RGNDATA local_2014;
  HRGN__ local_1fec [2038];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005de354;
  local_10 = ExceptionList;
  local_14 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2038 = param_1;
  local_2018 = param_2;
  local_2024 = *(int *)(param_4 + 0xc);
  local_201c = (RECT *)(param_4 + 8);
  local_2020 = local_201c->left;
  iVar6 = *(int *)(param_4 + 0x14) - local_2024;
  iVar5 = *(int *)(param_4 + 0x10) - local_2020;
  local_204c = in_ECX;
  local_2034 = iVar6;
  cVar1 = FUN_004c04c2();
  cVar1 = '\x01' - (cVar1 != '\0');
  local_2028 = CONCAT31(local_2028._1_3_,cVar1);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_004f0b41(&local_2064);
    local_2024 = 0;
    local_2020 = 0;
    local_2048 = *piVar2;
    local_2044 = (HRGN)piVar2[1];
    local_2040 = piVar2[2];
    local_203c = piVar2[3];
    iVar5 = local_2040 - local_2048;
    iVar6 = local_203c - (int)local_2044;
    local_2034 = iVar6;
  }
  if ((iVar5 < 1) || (iVar6 < 1)) goto LAB_004f2baa;
  local_2030 = FUN_004f1efc(in_ECX + 0x88);
  local_2044 = (HRGN__ *)0x0;
  local_2040 = 0;
  local_203c = 0;
  local_8 = 0;
  if ((param_3 == 3) && ((char)local_2028 == '\0')) {
    local_201c = (RECT *)CreateRectRgnIndirect(local_201c);
    CombineRgn(local_2018,local_2018,(HRGN)local_201c,1);
    DeleteObject(local_201c);
    DVar3 = GetRegionData(local_2018,0x2000,&local_2014);
    if ((((0x1fff < DVar3 - 1) || (local_2014.rdh.iType != 1)) ||
        (local_2014.rdh.rcBound.right - local_2014.rdh.rcBound.left < iVar5)) ||
       (local_2014.rdh.rcBound.bottom - local_2014.rdh.rcBound.top < iVar6)) goto LAB_004f2a0a;
    local_201c = (RECT *)(local_2014.rdh.nCount - 1);
    if (-1 < (int)local_201c) {
      local_2018 = local_1fec;
      do {
        local_202c = (HRGN__ *)local_2018->unused;
        if ((local_2020 + iVar5 < (int)local_202c) ||
           (local_2050 = (undefined1 *)local_2018[1].unused, local_2024 + iVar6 < (int)local_2050))
        goto LAB_004f2a0a;
        local_2064 = FUN_00439b5a();
        local_205c = (int)local_202c - local_2064;
        local_2064 = local_2064 - local_2020;
        local_2058 = (int)local_2050 - local_2018[-1].unused;
        local_2060 = local_2018[-1].unused - local_2024;
        FUN_004a4c72();
        cVar1 = FUN_004a4bf9();
        if (cVar1 == '\0') {
          FUN_004a7151();
          in_ECX = local_204c;
        }
        local_2018 = local_2018 + 4;
        local_201c = (RECT *)((int)&local_201c[-1].bottom + 3);
        iVar6 = local_2034;
      } while (-1 < (int)local_201c);
    }
  }
  else {
LAB_004f2a0a:
    local_203c = 0;
    local_2064 = 0;
    local_2060 = 0;
    local_205c = iVar5;
    local_2058 = iVar6;
    FUN_004a7151();
    in_ECX = local_204c;
  }
  iVar5 = local_2020;
  iVar6 = local_2024;
  local_2068 = 0;
  local_207c[0] = local_2038;
  local_2074 = &local_2044;
  local_2070 = local_2020;
  local_206c = local_2024;
  EnumChildWindows(*(HWND *)(in_ECX + 0x38),FUN_004f255a,(LPARAM)local_207c);
  if (local_203c != 0) {
    if ((char)local_2028 != '\0') {
      local_202c = local_2044 + local_203c * 4;
      local_2018 = local_2044;
      if (local_2044 != local_202c) {
        do {
          local_2050 = &stack0xffffdf50;
          FUN_0047604f();
          FUN_0047e88a(local_2030,local_2018);
          local_2018 = local_2018 + 4;
        } while (local_2018 != local_202c);
      }
    }
    piVar2 = (int *)thunk_FUN_004c1d58();
    local_2054 = -iVar5;
    local_2050 = (undefined1 *)-iVar6;
    pHVar4 = (HRGN__ *)(**(code **)(*piVar2 + 0x28))(local_2030,&local_2054);
    local_8._0_1_ = 1;
    local_202c = pHVar4;
    FUN_004ed690();
    local_8 = (uint)local_8._1_3_ << 8;
    if (pHVar4 != (HRGN__ *)0x0) {
      (**(code **)pHVar4->unused)();
    }
    FUN_004f0efc(*(undefined4 *)(in_ECX + 0x38),local_2038,local_2028,local_2020,local_2024);
  }
  if (local_2068 != 0) {
    RestoreDC(local_2038,local_2068);
  }
  local_8 = 0xffffffff;
  _free(local_2044);
LAB_004f2baa:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

