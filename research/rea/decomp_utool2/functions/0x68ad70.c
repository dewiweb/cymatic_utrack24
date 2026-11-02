// rea decompile_all
// name: FUN_0068ad70
// address: 0x68ad70
// body: available
// range: 0x68ad70-0x68af25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068ad70(undefined4 param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00721274;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0xac) == '\0') {
    *(undefined1 *)(in_ECX + 0xac) = 1;
    local_8 = 0;
    if (*(int *)(in_ECX + 0x90) != *param_3) {
      local_38 = *(undefined4 *)(in_ECX + 0x90);
      local_3c = 0x68ade0;
      iVar1 = FUN_00448730();
      if (iVar1 != 0) {
        piVar2 = (int *)(*param_3 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        LOCK();
        iVar1 = *(int *)(in_ECX + 0x90);
        *(int *)(in_ECX + 0x90) = *param_3;
        UNLOCK();
        piVar2 = (int *)(iVar1 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            local_38 = 0x68ae1e;
            FID_conflict__free(piVar2);
          }
        }
        local_44 = (undefined1 *)&local_40;
        local_48 = 0x68ae2c;
        FUN_006e6400();
        local_44 = (undefined1 *)0x1;
        local_48 = 0x68ae35;
        FUN_006ce9f0();
      }
    }
    local_44 = (undefined1 *)&local_40;
    if (*(int *)(in_ECX + 0xc) == 0) {
      local_48 = param_1;
      local_44 = param_2;
      if (DAT_00c8a67c == 0) {
        operator_new(0xd0);
        local_8._0_1_ = 2;
        DAT_00c8a67c = FUN_006cb960();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      puVar3 = (undefined4 *)FUN_006cac60();
      local_40 = *puVar3;
      local_3c = puVar3[1];
      local_38 = puVar3[2];
      local_48 = param_1;
      local_44 = param_2;
      FUN_0068af30(param_3);
      local_38 = 0x506;
      local_3c = 0x68af06;
      FUN_006e9aa0();
    }
    else {
      local_48 = 0x68ae48;
      FUN_006e6400();
      local_8._0_1_ = 1;
      FUN_006e1ae0(&local_48,0,param_1,param_2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0068af30(param_3);
    }
    local_38 = 0x68af0f;
    FUN_006e9910();
    *(undefined1 *)(in_ECX + 0xac) = 0;
  }
  ExceptionList = local_10;
  return;
}

