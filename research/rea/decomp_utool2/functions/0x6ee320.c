// rea decompile_all
// name: FUN_006ee320
// address: 0x6ee320
// body: available
// range: 0x6ee320-0x6ee3ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ee320(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_24 [8];
  
  local_24[7] = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_24[0] = 0x1003;
  local_24[1] = 0x1004;
  local_24[2] = 0x1005;
  local_24[3] = 0x1002;
  local_24[4] = 0x1006;
  puVar4 = local_24;
  iVar3 = param_1[2] + 7;
  local_24[5] = 0x1008;
  local_24[6] = 0x1009;
  if (param_1[1] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + param_1[2] + 0xf & 0xfffffff8);
  }
  iVar3 = 6;
  do {
    puVar1 = (uint *)(*param_1 + param_1[2] * 4);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = uVar2;
    }
    param_1[2] = param_1[2] + 1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  __security_check_cookie(local_24[7] ^ (uint)&stack0xfffffffc);
  return;
}

