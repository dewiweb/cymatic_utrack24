// rea decompile_all
// name: FUN_005cfd20
// address: 0x5cfd20
// body: available
// range: 0x5cfd20-0x5cfdda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cfd20(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint local_40 [15];
  
  local_40[0xe] = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_40[0] = 8000;
  local_40[1] = 0x2b11;
  local_40[2] = 12000;
  local_40[3] = 16000;
  *param_1 = 0;
  param_1[1] = 0;
  local_40[4] = 0x5622;
  local_40[5] = 32000;
  local_40[6] = 0xac44;
  local_40[7] = 48000;
  param_1[2] = 0xe;
  local_40[8] = 0x15888;
  local_40[9] = 96000;
  local_40[10] = 0x2b110;
  local_40[0xb] = 0x2ee00;
  local_40[0xc] = 0x56220;
  local_40[0xd] = 0x5dc00;
  if (param_1[1] != 0xe) {
    if (*param_1 == 0) {
      iVar1 = FUN_004c554b();
    }
    else {
      iVar1 = FUN_004c553b(*param_1,0x38);
    }
    *param_1 = iVar1;
    param_1[1] = 0xe;
  }
  iVar1 = 0;
  do {
    if ((undefined4 *)(*param_1 + iVar1) != (undefined4 *)0x0) {
      *(undefined4 *)(*param_1 + iVar1) = *(undefined4 *)((int)local_40 + iVar1);
    }
    puVar2 = (undefined4 *)(*param_1 + 4 + iVar1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)((int)local_40 + iVar1 + 4);
    }
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x38);
  __security_check_cookie(local_40[0xe] ^ (uint)&stack0xfffffffc);
  return;
}

