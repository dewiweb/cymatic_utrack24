// rea decompile_all
// name: FUN_004a78d0
// address: 0x4a78d0
// body: available
// range: 0x4a78d0-0x4a7d26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004a78d0(HDC param_1,HRGN param_2,int param_3,int param_4)

{
  HRGN hrgnSrc2;
  DWORD DVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  HDC hdc;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  undefined1 local_209c [16];
  int local_208c;
  int local_2088;
  int local_2084;
  HRGN local_2080;
  undefined4 local_207c;
  undefined4 local_2078;
  int local_2074;
  int local_2070;
  HDC local_206c;
  int local_2068;
  LONG *local_2064;
  int local_2060;
  int local_205c;
  int local_2058;
  undefined4 local_2054;
  undefined4 *local_2050;
  int local_204c;
  RECT *local_2048;
  HDC local_2044;
  undefined4 local_2040;
  tagRECT local_203c;
  int local_2028;
  int local_2024;
  HRGN local_2020;
  int local_201c;
  byte local_2015;
  _RGNDATA local_2014;
  int local_1ff0 [2039];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703a36;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2044 = param_1;
  local_2020 = param_2;
  local_201c = *(int *)(param_4 + 8);
  local_2048 = (RECT *)(param_4 + 8);
  local_2024 = *(int *)(param_4 + 0xc);
  iVar6 = *(int *)(param_4 + 0x10) - local_201c;
  iVar8 = *(int *)(param_4 + 0x14) - local_2024;
  local_2015 = *(byte *)(*(int *)(in_ECX + 4) + 0x68) & 4;
  local_2054 = CONCAT31(local_2054._1_3_,local_2015 == 0);
  local_2028 = in_ECX;
  if (local_2015 == 0) {
    GetWindowRect(*(HWND *)(in_ECX + 0x38),&local_203c);
    iVar6 = local_203c.right - local_203c.left;
    iVar8 = local_203c.bottom - local_203c.top;
    local_2024 = 0;
    local_201c = 0;
  }
  if ((iVar6 < 1) || (iVar8 < 1)) goto LAB_004a7d09;
  local_2040 = FUN_004a69e0(local_2054,iVar6,iVar8);
  local_203c.top = 0;
  local_203c.right = 0;
  local_203c.bottom = 0;
  local_8 = 0;
  local_207c = 0;
  local_2078 = 0;
  local_2074 = iVar6;
  local_2070 = iVar8;
  if ((param_3 == 3) && (local_2015 != 0)) {
    hrgnSrc2 = CreateRectRgnIndirect(local_2048);
    CombineRgn(local_2020,local_2020,hrgnSrc2,1);
    DeleteObject(hrgnSrc2);
    DVar1 = GetRegionData(local_2020,0x2000,&local_2014);
    if ((((0x1fff < DVar1 - 1) || (local_2014.rdh.iType != 1)) ||
        (local_2014.rdh.rcBound.right - local_2014.rdh.rcBound.left < iVar6)) ||
       (local_2014.rdh.rcBound.bottom - local_2014.rdh.rcBound.top < iVar8)) goto LAB_004a7b5d;
    local_2048 = (RECT *)(local_2014.rdh.nCount - 1);
    if (-1 < (int)local_2048) {
      piVar3 = local_1ff0 + 1;
      local_2050 = (undefined4 *)(local_201c + iVar6);
      do {
        if (((int)local_2050 < *piVar3) ||
           (local_2020 = (HRGN)piVar3[1], local_2024 + iVar8 < (int)local_2020)) goto LAB_004a7b5d;
        local_208c = local_201c;
        if (local_201c < piVar3[-2]) {
          local_208c = piVar3[-2];
        }
        local_2080 = (HRGN)((int)local_2020 - piVar3[-1]);
        local_2084 = *piVar3 - local_208c;
        local_2088 = piVar3[-1] - local_2024;
        local_208c = local_208c - local_201c;
        local_2020 = local_2080;
        uVar2 = FUN_0044db90(local_209c,&local_207c);
        FUN_00471cb0(uVar2);
        piVar3 = piVar3 + 4;
        local_2048 = (RECT *)((int)&local_2048[-1].bottom + 3);
      } while (-1 < (int)local_2048);
    }
  }
  else {
LAB_004a7b5d:
    local_203c.bottom = 0;
    iVar5 = 0;
    if (local_203c.right < 1) {
      FUN_0040ede0(8);
      iVar5 = local_203c.bottom;
    }
    local_203c.bottom = iVar5 + 1;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + local_203c.top);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = iVar6;
      puVar4[3] = iVar8;
    }
  }
  iVar6 = local_2024;
  local_206c = local_2044;
  local_2064 = &local_203c.top;
  local_2060 = local_201c;
  local_2068 = local_2028;
  local_205c = local_2024;
  local_2058 = 0;
  EnumChildWindows(*(HWND *)(local_2028 + 0x38),FUN_004a76b0,(LPARAM)&local_206c);
  hdc = local_2044;
  if (local_203c.bottom != 0) {
    if (local_2015 == 0) {
      pvVar9 = (void *)(local_203c.bottom * 0x10 + local_203c.top);
      for (pvVar7 = (void *)local_203c.top; pvVar7 != pvVar9; pvVar7 = (void *)((int)pvVar7 + 0x10))
      {
        FUN_00672f60(pvVar7,0);
        iVar6 = local_2024;
      }
    }
    piVar3 = (int *)FUN_006e9580();
    iVar8 = local_201c;
    local_204c = -local_201c;
    local_2048 = (RECT *)-iVar6;
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(local_2040,&local_204c,&local_203c.top);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_2050 = puVar4;
    FUN_0068d650(puVar4);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    hdc = local_2044;
    FUN_004a54d0(*(undefined4 *)(local_2028 + 0x38),local_2044,local_2054,iVar8,iVar6,
                 *(undefined1 *)(local_2028 + 0x78));
  }
  if (local_2058 != 0) {
    RestoreDC(hdc,local_2058);
  }
  FID_conflict__free((void *)local_203c.top);
LAB_004a7d09:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

