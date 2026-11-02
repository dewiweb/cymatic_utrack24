// rea decompile_all
// name: FUN_004a8a20
// address: 0x4a8a20
// body: available
// range: 0x4a8a20-0x4a8c5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8a20(uint param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  BOOL BVar5;
  UINT wScanCode;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  tagMSG local_160;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  char local_131;
  BYTE local_130 [260];
  WCHAR local_2c;
  undefined4 local_2a;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  undefined8 local_1a;
  undefined4 local_12;
  undefined2 local_e;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar3 = GetAsyncKeyState(0x10);
  uVar4 = GetAsyncKeyState(0x11);
  uVar9 = uVar3 >> 0xf | 2;
  if ((uVar4 & 0x8000) == 0) {
    uVar9 = (uint)(uVar3 >> 0xf);
  }
  uVar3 = GetAsyncKeyState(0x12);
  uVar8 = uVar9 | 4;
  if ((uVar3 & 0x8000) == 0) {
    uVar8 = uVar9;
  }
  uVar3 = GetAsyncKeyState(0xa5);
  uVar9 = local_138;
  uVar7 = uVar8 & 0xfffffff9;
  if ((uVar3 & 0x8000) == 0) {
    uVar7 = uVar8;
  }
  DAT_00c8a9dc = uVar7 | DAT_00c8a9dc & 0x70;
  switch(param_1) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x90:
  case 0x91:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
    if (DAT_00c8a9b0 != DAT_00c8a9dc) {
      DAT_00c8a9b0 = DAT_00c8a9dc;
      FUN_0068d130();
    }
    goto LAB_004a8c3b;
  default:
    local_131 = FUN_0068d1f0(1);
    BVar5 = PeekMessageW(&local_160,*(HWND *)(uVar9 + 0x38),0x102,0x103,0);
    cVar1 = local_131;
    if (BVar5 == 0) {
      local_138 = MapVirtualKeyW(param_1,2);
      wScanCode = MapVirtualKeyW(param_1,0);
      GetKeyboardState(local_130);
      local_2c = L'\0';
      local_12 = 0;
      local_e = 0;
      local_1a = 0;
      local_2a = 0;
      uStack_26 = 0;
      uStack_22 = 0;
      uStack_1e = 0;
      iVar6 = ToUnicode(param_1,wScanCode,local_130,&local_2c,8,0);
      if (iVar6 != 1) {
        local_2c = L'\0';
      }
      DAT_00c8a9c8 = DAT_00c8a9dc;
      local_140 = DAT_00c8a9dc & 0xffffff8f;
      local_13c = (uint)(ushort)local_2c;
      local_144 = local_138 & 0xffff;
      cVar2 = FUN_0068d370(&local_144);
      cVar1 = local_131;
      goto joined_r0x004a8b25;
    }
    break;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2d:
  case 0x2e:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    cVar1 = FUN_0068d1f0(1);
    DAT_00c8a9c8 = DAT_00c8a9dc;
    local_140 = DAT_00c8a9dc & 0xffffff8f;
    local_13c = 0;
    local_144 = param_1 | 0x10000;
    cVar2 = FUN_0068d370(&local_144);
joined_r0x004a8b25:
    if (cVar2 != '\0') goto LAB_004a8b2f;
  }
  if (cVar1 == '\0') {
LAB_004a8c3b:
    iVar6 = FUN_006cecc0();
    if (iVar6 == 0) {
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_004a8b2f:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

