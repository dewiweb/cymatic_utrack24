// rea decompile_all
// name: FUN_004a8370
// address: 0x4a8370
// body: available
// range: 0x4a8370-0x4a84aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8370(undefined4 param_1,char param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined4 local_34;
  float local_14;
  float local_10;
  undefined2 local_c;
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_34 = 0x4a8390;
  uVar1 = GetAsyncKeyState(0x10);
  local_34 = 0x4a839d;
  uVar2 = GetAsyncKeyState(0x11);
  uVar4 = uVar1 >> 0xf | 2;
  if ((uVar2 & 0x8000) == 0) {
    uVar4 = (uint)(uVar1 >> 0xf);
  }
  local_34 = 0x4a83ae;
  uVar1 = GetAsyncKeyState(0x12);
  uVar5 = uVar4 | 4;
  if ((uVar1 & 0x8000) == 0) {
    uVar5 = uVar4;
  }
  local_34 = 0x4a83c2;
  uVar1 = GetAsyncKeyState(0xa5);
  uVar4 = uVar5 & 0xfffffff9;
  if ((uVar1 & 0x8000) == 0) {
    uVar4 = uVar5;
  }
  DAT_00c8a9dc = uVar4 | DAT_00c8a9dc & 0x70;
  fVar6 = (float)(int)(short)((uint)param_1 >> 0x10) * 0.5;
  local_10 = -1000.0;
  if ((-1000.0 <= fVar6) && (local_10 = 1000.0, fVar6 <= 1000.0)) {
    local_10 = fVar6;
  }
  if (param_2 == '\0') {
    local_14 = local_10 * -0.00390625;
    local_10 = 0.0;
  }
  else {
    local_10 = local_10 * 0.00390625;
    local_14 = 0.0;
  }
  local_c = 0;
  local_a = 0;
  local_34 = 0x4a8463;
  iVar3 = FUN_004a82b0();
  if (iVar3 != 0) {
    pfVar8 = &local_14;
    local_34 = 0;
    uVar7 = FUN_00687700(&local_34,pfVar8);
    FUN_0068d840(extraout_ECX,uVar7,pfVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

