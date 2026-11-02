// rea decompile_all
// name: FUN_0069a6a0
// address: 0x69a6a0
// body: available
// range: 0x69a6a0-0x69a826 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a6a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007221c4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_006e85c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar5 = 0;
  if (0 < *(int *)(local_14 + 0x90)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(local_14 + 0x88) + iVar5 * 4);
      if (*(char *)*puVar1 == '\0') {
        if ((0 < param_1[2]) && (*(char *)(*(int *)(*param_1 + -4 + param_1[2] * 4) + 0x26) == '\0')
           ) {
          local_40 = &DAT_00bfe12c;
          local_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = &DAT_00bfe12c;
          local_20 = 0;
          local_1c = 0x10001;
          local_8 = 0;
          operator_new(0x28);
          local_8 = CONCAT31(local_8._1_3_,1);
          uVar3 = FUN_006a0770(&local_40);
          iVar2 = param_1[2];
          iVar4 = iVar2 + 1;
          if (param_1[1] < iVar4) {
            if (iVar4 < 0) {
              iVar4 = iVar2 + 2;
            }
            FUN_00409cf0((iVar4 >> 1) + iVar2 + 9 & 0xfffffff8);
          }
          iVar2 = param_1[2];
          param_1[2] = iVar2 + 1;
          local_8 = 0xffffffff;
          *(undefined4 *)(*param_1 + iVar2 * 4) = uVar3;
          FUN_004abe20();
        }
      }
      else if ((*(byte *)(puVar1 + 2) & 2) == 0) {
        FUN_006d13b0(puVar1[1],puVar1,*(byte *)(puVar1 + 2) & 1,puVar1[1] == local_18);
      }
      else {
        FUN_006a04c0(puVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_14 + 0x90));
  }
  if (*(int *)(local_14 + 0x90) == 0) {
    FUN_006d13b0(1,local_14 + 0xc4,0,0);
  }
  ExceptionList = local_10;
  return;
}

