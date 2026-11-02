// rea decompile_all
// name: FUN_00604560
// address: 0x604560
// body: available
// range: 0x604560-0x604664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604560(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  undefined4 *local_34;
  void *local_30;
  int local_28;
  undefined1 *local_24;
  undefined1 local_20;
  undefined1 *local_1c;
  int local_18;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0071bd66;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = (undefined1 *)(in_ECX + 0x3c);
  if (*(char *)(in_ECX + 0x3c) == '\0') {
    local_20 = 0;
    *local_24 = 1;
    local_8 = 0;
    iVar8 = 0;
    iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + 0x90);
    local_1c = local_24;
    local_18 = in_ECX;
    if (0 < iVar3) {
      do {
        uVar6 = FUN_00604670(&local_34,
                             *(int *)(*(int *)(*(int *)(local_18 + 0x18) + 0x88) + iVar8 * 4) + 0xc)
        ;
        local_8._0_1_ = 1;
        FUN_0063b440(uVar6);
        FUN_00446f20(uVar5);
        puVar4 = local_34;
        local_8 = (uint)local_8._1_3_ << 8;
        if ((0 < local_28) && (local_34 != (undefined4 *)0x0)) {
          local_14 = &local_34;
          uVar7 = FUN_00447770(&local_14);
          if (uVar7 < (uint)puVar4[0xb]) {
            FUN_00410320(uVar7);
          }
        }
        FID_conflict__free(local_30);
        if (local_34 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_34 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_34)(1);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
    }
    *local_1c = 0;
  }
  ExceptionList = local_10;
  return;
}

