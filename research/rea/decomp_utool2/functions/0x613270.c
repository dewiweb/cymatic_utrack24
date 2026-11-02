// rea decompile_all
// name: FUN_00613270
// address: 0x613270
// body: available
// range: 0x613270-0x6133d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613270(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_EDX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cb79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)FUN_00621010();
  local_8 = 0;
  FUN_00635720(*puVar4);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  FUN_0062c6c0();
  uVar2 = *(uint *)(in_EDX + 8);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    cVar3 = FUN_00629eb0();
    if ((cVar3 == '\0') && (uVar2 < *(uint *)(in_EDX + 8))) {
      FUN_004179e0();
    }
  }
  iVar1 = *(int *)(in_EDX + 8);
joined_r0x0061332a:
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      ExceptionList = local_10;
      return;
    }
    do {
      iVar5 = FUN_00443260();
      iVar6 = FUN_00443260();
      if ((iVar5 - iVar6 != 0) && ((iVar5 - iVar6 >> 0x1f & 0xfffffffeU) != 0xffffffff))
      goto joined_r0x0061332a;
    } while (iVar5 != 0);
    FUN_0045c990();
    FUN_00459080();
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  } while( true );
}

