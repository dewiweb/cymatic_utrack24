// rea decompile_all
// name: FUN_006869a0
// address: 0x6869a0
// body: available
// range: 0x6869a0-0x686a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006869a0(HMONITOR param_1)

{
  int iVar1;
  byte bVar2;
  double dVar3;
  undefined1 auStack_74 [4];
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double dStack_48;
  byte bStack_40;
  tagMONITORINFO local_34;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_74;
  local_34.rcMonitor.left = 0;
  local_34.rcMonitor.top = 0;
  local_34.rcMonitor.right = 0;
  local_34.rcMonitor.bottom = 0;
  local_34.dwFlags = 0;
  local_34.rcWork.left = 0;
  local_34.rcWork.top = 0;
  local_34.rcWork.right = 0;
  local_34.rcWork.bottom = 0;
  local_34.cbSize = 0x28;
  GetMonitorInfoW(param_1,&local_34);
  dVar3 = 0.0;
  bVar2 = (byte)local_34.dwFlags & 1;
  if (DAT_00c8a680 != (code *)0x0) {
    local_70 = 0;
    local_6c = 0;
    iVar1 = (*DAT_00c8a680)(param_1,0,&local_70,&local_6c);
    if (iVar1 < 0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = ((double)(local_6c + local_70) +
              (double)(&DAT_00c24bb0)[-(local_6c + local_70 >> 0x1f)]) * 0.5;
    }
  }
  FUN_00687970();
  uStack_58 = local_68;
  uStack_54 = uStack_64;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  dStack_48 = dVar3;
  bStack_40 = bVar2;
  FUN_004ad680(&uStack_58);
  __security_check_cookie(local_c ^ (uint)auStack_74);
  return;
}

