// rea decompile_all
// name: FUN_006b9420
// address: 0x6b9420
// body: available
// range: 0x6b9420-0x6b953b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b9420(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072448e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00458890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
  if (((DVar4 & 0x10) == 0) || (DVar4 == 0xffffffff)) {
    if (in_ECX + -0x70 == 0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = (undefined4 *)FUN_0040de70(in_ECX + -0x70);
    }
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    local_8 = 1;
    FUN_004b0b00(&param_1,FUN_00410548,uVar2);
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = param_1 + 1;
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*param_1)(1);
      }
    }
  }
  else {
    FUN_006b9d70(uVar2);
    if (((*(uint *)(in_ECX + 0x34) & 8) != 0) && ((*(uint *)(in_ECX + 0x34) & 0x100) == 0)) {
      param_1 = (undefined4 *)&DAT_00bfe12c;
      local_8 = 0;
      FUN_006e55f0(&param_1,1);
      piVar5 = (int *)((int)param_1 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
          ExceptionList = local_10;
          return;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

