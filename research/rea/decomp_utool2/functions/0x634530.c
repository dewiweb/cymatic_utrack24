// rea decompile_all
// name: FUN_00634530
// address: 0x634530
// body: available
// range: 0x634530-0x634681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634530(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071ea00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = 0;
  FUN_00631430(in_ECX);
  local_8 = 0;
  local_14 = 1;
  iVar2 = FUN_0044ec90();
  if (0x80 < iVar2) {
    local_18 = iVar2;
    iVar3 = FUN_006215b0();
    iVar5 = 0;
    if (0 < iVar2 + -0xc) {
      iVar5 = iVar2 + -0xc;
    }
    if (iVar5 < iVar3) {
      FUN_00637a90(&local_20);
      local_8 = 1;
      FUN_006379a0(&stack0xffffffc8,0,(iVar3 - local_18) + 0x80);
      puVar4 = (undefined4 *)FUN_00637730();
      uVar1 = *in_ECX;
      *in_ECX = *puVar4;
      *puVar4 = uVar1;
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return;
      }
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    else {
      puVar4 = (undefined4 *)FUN_006379a0(&local_20,0);
      uVar1 = *in_ECX;
      *in_ECX = *puVar4;
      *puVar4 = uVar1;
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return;
      }
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

