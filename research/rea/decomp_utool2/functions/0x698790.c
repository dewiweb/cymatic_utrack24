// rea decompile_all
// name: FUN_00698790
// address: 0x698790
// body: available
// range: 0x698790-0x69892b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00698790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  char extraout_DL;
  int iVar6;
  undefined1 local_3c [16];
  int local_2c [2];
  int local_24;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721fe3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_14 = (int *)(iVar4 + 0x4c);
  (**(code **)(*local_14 + 4))(param_1);
  FUN_0067faa0(local_2c);
  iVar4 = 0;
  param_1 = (undefined4 *)0x0;
  local_18 = 0;
  iVar6 = local_2c[0];
  if (0 < *(int *)(in_ECX + 0x80)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + local_18 * 4);
      if ((*(byte *)(iVar1 + 8) & 1) != 0) {
        if ((iVar6 < *(int *)(iVar1 + 0xc) + iVar4) &&
           (((*(int *)(iVar1 + 4) != *(int *)(in_ECX + 0xa0) || (*(int *)(in_ECX + 0x90) == 0)) ||
            ((*(byte *)(*(int *)(in_ECX + 0x90) + 0x68) & 2) == 0)))) {
          local_1c = puVar2;
          if (*(char *)(puVar2 + 2) != '\0') {
            *(undefined1 *)(puVar2 + 2) = 0;
            (**(code **)(*(int *)*puVar2 + 0x34))();
            iVar4 = (int)param_1;
          }
          *(undefined1 *)(puVar2 + 2) = 1;
          local_8 = 0;
          FUN_006773f0(iVar4,0);
          FUN_00472d90(0,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(in_ECX + 0x1c));
          if (*(char *)(puVar2 + 2) != extraout_DL) {
            *(char *)(puVar2 + 2) = extraout_DL;
            (**(code **)(*(int *)*puVar2 + 0x34))();
          }
          (**(code **)(*(int *)*puVar2 + 0x14))(local_3c);
          if ((*(int *)(iVar1 + 4) == *(int *)(in_ECX + 0xa8)) &&
             (cVar3 = FUN_006e2bd0(), cVar3 != '\0')) {
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
          (**(code **)(*local_14 + 8))
                    (puVar2,iVar1,*(int *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0xc),
                     *(undefined4 *)(in_ECX + 0x1c),*(int *)(iVar1 + 4) == *(int *)(in_ECX + 0xa8),
                     uVar5,*(undefined4 *)(iVar1 + 8));
          local_8 = 1;
          if (*(char *)(puVar2 + 2) == '\0') {
            (**(code **)(*(int *)*puVar2 + 0x38))();
          }
          else {
            *(undefined1 *)(puVar2 + 2) = 0;
          }
          local_8 = 0xffffffff;
          iVar4 = (int)param_1;
          iVar6 = local_2c[0];
        }
        iVar4 = iVar4 + *(int *)(iVar1 + 0xc);
        param_1 = (undefined4 *)iVar4;
        if (local_24 + iVar6 <= iVar4) {
          ExceptionList = local_10;
          return;
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_ECX + 0x80));
  }
  ExceptionList = local_10;
  return;
}

