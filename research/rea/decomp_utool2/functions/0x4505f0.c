// rea decompile_all
// name: FUN_004505f0
// address: 0x4505f0
// body: available
// range: 0x4505f0-0x4506a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004505f0(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_14 [4];
  byte local_10;
  undefined1 local_f [7];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar4 = *(int *)(*param_1 + 4) + 1;
  if (*(code **)(*param_2 + 0x48) == FUN_006205c0) {
    iVar2 = 0;
    for (uVar3 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f); uVar3 != 0; uVar3 = uVar3 >> 8
        ) {
      local_f[iVar2] = (char)uVar3;
      iVar2 = iVar2 + 1;
    }
    local_10 = (byte)iVar2;
    if ((int)uVar4 < 0) {
      local_10 = local_10 | 0x80;
    }
    (**(code **)(*param_2 + 0x10))(&local_10,iVar2 + 1);
  }
  else {
    (**(code **)(*param_2 + 0x48))(uVar4);
  }
  pcVar1 = *(code **)(*param_2 + 0x14);
  if (pcVar1 == FUN_0062c8e0) {
    local_14[0] = 8;
    (**(code **)(*param_2 + 0x10))(local_14,1);
  }
  else {
    (*pcVar1)(8);
  }
  iVar2 = ((undefined4 *)*param_1)[1];
  if (iVar2 != 0) {
    (**(code **)(*param_2 + 0x10))(*(undefined4 *)*param_1,iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

