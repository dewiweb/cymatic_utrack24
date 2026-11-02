// rea decompile_all
// name: FUN_006ca170
// address: 0x6ca170
// body: available
// range: 0x6ca170-0x6ca297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ca170(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007261c1;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar5 = *(int *)(in_ECX + 0x14) + -1;
  local_1c = 0;
  if (-1 < iVar5) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + iVar5 * 4);
      iVar7 = iVar6;
      if ((*(char *)(iVar1 + 0x40) != '\0') && (iVar7 = iVar6 + 1, iVar6 == 0)) {
        iVar5 = *(int *)(iVar1 + 0x2c);
        if (iVar5 == 0) {
          return 0;
        }
        ExceptionList = &local_10;
        if (DAT_00c8a678 == 0) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_0040de70(DAT_00c8a678);
        }
        if (local_18 != 0) {
          LOCK();
          *(int *)(local_18 + 4) = *(int *)(local_18 + 4) + 1;
          UNLOCK();
        }
        local_8 = 0;
        local_11 = '\0';
        puVar4 = operator_new(0xc);
        puVar4[1] = &local_1c;
        puVar4[2] = &local_11;
        *puVar4 = juce::ModalComponentManager::ReturnValueRetriever::vftable;
        FUN_006ca640(iVar5,puVar4);
        goto joined_r0x006ca239;
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar7;
    } while (-1 < iVar5);
  }
  return 0;
  while( true ) {
    if (DAT_00c8a658 == 0) {
      operator_new(0x28);
      DAT_00c8a658 = FUN_0063dab0();
      FUN_0063c010();
    }
    cVar2 = FUN_0063d930(DAT_00c8a658);
    if (cVar2 == '\0') break;
joined_r0x006ca239:
    if (local_11 != '\0') break;
  }
  FUN_0048d360(uVar3);
  ExceptionList = local_10;
  return local_1c;
}

