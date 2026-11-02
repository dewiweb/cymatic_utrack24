// rea decompile_all
// name: FUN_005d1630
// address: 0x5d1630
// body: available
// range: 0x5d1630-0x5d1745 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005d1630(int *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_38 [13];
  
  local_38[0xc] = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_38[0] = 8000;
  local_38[1] = 0x2b11;
  local_38[2] = 12000;
  local_38[3] = 16000;
  *param_1 = 0;
  param_1[1] = 0;
  local_38[4] = 0x5622;
  local_38[5] = 32000;
  local_38[6] = 0xac44;
  local_38[7] = 48000;
  param_1[2] = 0xc;
  local_38[8] = 0x15888;
  local_38[9] = 96000;
  local_38[10] = 0x2b110;
  local_38[0xb] = 0x2ee00;
  if (param_1[1] != 0xc) {
    if (*param_1 == 0) {
      iVar3 = FUN_004c554b();
    }
    else {
      iVar3 = FUN_004c553b(*param_1,0x30);
    }
    *param_1 = iVar3;
    param_1[1] = 0xc;
  }
  puVar2 = local_38 + 1;
  iVar3 = 0;
  do {
    if ((undefined4 *)(*param_1 + iVar3) != (undefined4 *)0x0) {
      *(undefined4 *)(*param_1 + iVar3) = *(undefined4 *)((int)local_38 + iVar3);
    }
    puVar4 = (undefined4 *)(*param_1 + 4 + iVar3);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *(undefined4 *)((int)local_38 + iVar3 + 4U);
    }
    iVar1 = iVar3 + -0x34;
    puVar4 = (undefined4 *)(*param_1 + 0x3c + iVar1);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *(undefined4 *)((int)local_38 + iVar3 + 8U);
    }
    puVar4 = (undefined4 *)((int)local_38 + (*param_1 - (int)puVar2) + iVar1 + 0x44U);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *(undefined4 *)((int)local_38 + iVar3 + 0xcU);
    }
    puVar4 = (undefined4 *)((int)local_38 + (*param_1 - (int)puVar2) + iVar1 + 0x48U);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *(undefined4 *)((int)local_38 + iVar3 + 0x10U);
    }
    puVar4 = (undefined4 *)((int)local_38 + (*param_1 - (int)puVar2) + iVar1 + 0x4cU);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *(undefined4 *)((int)local_38 + iVar3 + 0x14U);
    }
    iVar3 = iVar3 + 0x18;
  } while (iVar3 < 0x30);
  __security_check_cookie(local_38[0xc] ^ (uint)&stack0xfffffffc);
  return;
}

