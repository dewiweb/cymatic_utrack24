// rea decompile_all
// name: FUN_006029f0
// address: 0x6029f0
// body: available
// range: 0x6029f0-0x602bc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006029f0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  void *_Memory;
  int in_ECX;
  uint uVar2;
  int iVar3;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071bb54;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (0 < param_3) {
    iVar1 = *param_1;
    if (iVar1 < 3) {
      *(undefined1 *)(param_1 + 0x25) = 0;
      iVar3 = *(int *)param_1[3] + param_2 * 4;
      if (iVar1 < 2) {
        uVar2 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x25) = 0;
        uVar2 = *(int *)(param_1[3] + 4) + param_2 * 4;
      }
      local_1c = -(uint)(1 < *(uint *)(in_ECX + 0x20)) & uVar2;
      local_18 = 0;
      local_20 = iVar3;
      FUN_006031f0(&local_20,2,param_4,param_5,param_3,1);
      if ((1 < iVar1) && ((local_20 == 0 || (local_1c == 0)))) {
        FUN_004c2c30(uVar2,iVar3,param_3 * 4);
      }
    }
    else if (iVar1 < 0x41) {
      FUN_00602bd0(param_1,param_2,param_3,param_4,param_5,iVar1);
    }
    else {
      _Memory = (void *)FUN_004c554b(iVar1 * 4 + 4,local_14);
      local_8 = 0;
      FUN_00602bd0(param_1,param_2,param_3,param_4,param_5,iVar1);
      FID_conflict__free(_Memory);
    }
    if ((*(char *)(in_ECX + 0x24) == '\0') && (iVar3 = 0, 0 < iVar1)) {
      do {
        *(undefined1 *)(param_1 + 0x25) = 0;
        if (*(int *)(param_1[3] + iVar3 * 4) + param_2 * 4 != 0) {
          FUN_005c6580(param_3);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

