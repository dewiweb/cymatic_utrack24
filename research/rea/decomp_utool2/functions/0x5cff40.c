// rea decompile_all
// name: FUN_005cff40
// address: 0x5cff40
// body: available
// range: 0x5cff40-0x5d0079 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cff40(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b548;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0062af90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0045c1e0(*(undefined4 *)(iVar1 + 0xc),"ebucore:ebuCoreMain");
    if (iVar2 == 0) {
      iVar2 = FUN_00633010("ebucore:coreMetadata");
      if (iVar2 != 0) {
        iVar2 = FUN_00633010("ebucore:identifier");
        if (iVar2 != 0) {
          iVar2 = FUN_00633010("dc:identifier");
          if (iVar2 != 0) {
            uVar3 = 0x5cfff4;
            FUN_00634a80(local_1c);
            local_8._0_1_ = 1;
            FUN_00634090(&local_14,"ISRC:",uVar3,1);
            local_8 = CONCAT31(local_8._1_3_,3);
            FUN_00637c10();
            if (*local_14 != '\0') {
              FUN_0045c990(&DAT_00a9351c);
              FUN_00631980(local_18,&local_14);
              FUN_00637c10();
            }
            FUN_00637c10();
          }
        }
      }
    }
    FUN_00634ec0();
    FUN_004bfe14(iVar1,0x10);
  }
  ExceptionList = local_10;
  return;
}

