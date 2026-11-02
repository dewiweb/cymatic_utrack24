// rea decompile_all
// name: FUN_00686700
// address: 0x686700
// body: available
// range: 0x686700-0x68699c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00686700(void)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  HWND hWnd;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  float in_XMM1_Da;
  tagRECT *ptVar8;
  LONG local_cc;
  LONG LStack_c8;
  LONG LStack_c4;
  LONG LStack_c0;
  tagRECT local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  double local_9c;
  undefined1 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  double local_6c;
  double local_64;
  char local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  double local_44;
  float local_34;
  void *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720da6;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = in_XMM1_Da;
  FUN_00687880(local_14);
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 0;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_006869a0,(LPARAM)&local_30);
  FUN_00687880();
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x5a);
  iVar2 = GetDeviceCaps(hdc,0x58);
  local_44 = (double)(iVar1 + iVar2) * 0.5;
  ReleaseDC((HWND)0x0,hdc);
  if (local_28 == 0) {
    hWnd = GetDesktopWindow();
    GetWindowRect(hWnd,&local_bc);
    local_cc = local_bc.left;
    LStack_c8 = local_bc.top;
    LStack_c4 = local_bc.right;
    LStack_c0 = local_bc.bottom;
    FUN_00687970();
    local_ac = local_54;
    local_a8 = local_50;
    local_a4 = local_4c;
    local_a0 = local_48;
    local_9c = local_44;
    local_94 = 1;
    FUN_004ad680(&local_ac);
  }
  uVar7 = 1;
  if (1 < (int)local_28) {
    iVar1 = 0x20;
    uVar3 = local_28;
    pvVar6 = local_30;
    do {
      if (((*(char *)(iVar1 + 0x18 + (int)pvVar6) != '\0') && (uVar7 < uVar3)) && (uVar3 != 0)) {
        FUN_004b26d0();
        uVar3 = local_28;
        pvVar6 = local_30;
      }
      uVar7 = uVar7 + 1;
      iVar1 = iVar1 + 0x20;
    } while ((int)uVar7 < (int)uVar3);
  }
  SystemParametersInfoW(0x30,0,local_24,0);
  iVar1 = 0;
  if (0 < (int)local_28) {
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)FUN_004b2690(&local_cc);
      local_84 = puVar4[2];
      local_8c = *puVar4;
      local_88 = puVar4[1];
      local_80 = puVar4[3];
      local_64 = *(double *)(iVar2 + 0x10 + (int)local_30);
      local_5c = *(char *)(iVar2 + 0x18 + (int)local_30);
      if (local_64 == 0.0) {
        local_6c = (double)local_34;
        local_64 = local_44;
      }
      else {
        local_6c = local_64 / 96.0;
      }
      local_7c = local_8c;
      local_78 = local_88;
      local_74 = local_84;
      local_70 = local_80;
      if (local_5c != '\0') {
        ptVar8 = &local_bc;
        FUN_00687970(ptVar8);
        uVar5 = FUN_004b2690(ptVar8);
        puVar4 = (undefined4 *)FUN_0044db90(&local_9c,uVar5);
        local_8c = *puVar4;
        local_88 = puVar4[1];
        local_84 = puVar4[2];
        local_80 = puVar4[3];
      }
      FUN_004af100(&local_8c);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar1 < (int)local_28);
  }
  FID_conflict__free(local_30);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

