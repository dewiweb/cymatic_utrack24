// rea decompile_all
// name: FUN_004a54d0
// address: 0x4a54d0
// body: available
// range: 0x4a54d0-0x4a55cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a54d0(HWND param_1,HDC param_2,char param_3,int param_4,int param_5,undefined1 param_6)

{
  uint uVar1;
  int in_ECX;
  tagRECT local_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007037d0;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  SetMapMode(param_2,1);
  if (param_3 != '\0') {
    GetWindowRect(param_1,&local_3c);
    local_1c = -param_4;
    local_18 = -param_5;
    local_2c = local_3c.left;
    local_24 = local_3c.right - local_3c.left;
    local_28 = local_3c.top;
    local_20 = local_3c.bottom - local_3c.top;
    local_11 = 1;
    local_12 = param_6;
    local_14 = 0;
    (*DAT_00c8a694)(param_1,0,&local_2c,&local_24,*(undefined4 *)(in_ECX + 0xa0),&local_1c,0,
                    &local_14,2,uVar1);
    ExceptionList = local_10;
    return;
  }
  StretchDIBits(param_2,param_4,param_5,*(int *)(in_ECX + 0xc),*(int *)(in_ECX + 0x10),0,0,
                *(int *)(in_ECX + 0xc),*(int *)(in_ECX + 0x10),*(void **)(in_ECX + 0xa4),
                (BITMAPINFO *)(in_ECX + 0x34),0,0xcc0020);
  ExceptionList = local_10;
  return;
}

