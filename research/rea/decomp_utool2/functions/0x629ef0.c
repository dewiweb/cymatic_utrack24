// rea decompile_all
// name: FUN_00629ef0
// address: 0x629ef0
// body: available
// range: 0x629ef0-0x62a069 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629ef0(void)

{
  uint uVar1;
  uint uVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dcf1;
  uVar1 = *(uint *)(in_ECX + 8);
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      ExceptionList = local_10;
      return;
    }
    FUN_00627bf0();
    local_8 = 0;
    uVar2 = *(uint *)(in_ECX + 8);
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      FUN_00627bf0();
      local_8._0_1_ = 1;
      if ((uVar1 != uVar2) &&
         (((cVar4 = FUN_00635500(), cVar4 != '\0' || (local_1c == local_14)) ||
          (iVar5 = FUN_0045c1e0(local_1c), iVar5 == 0)))) {
        if (uVar1 < *(uint *)(in_ECX + 8)) {
          FUN_004179e0();
        }
        piVar6 = (int *)(local_14 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        break;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    piVar6 = (int *)(local_1c + -8);
    local_8 = 0xffffffff;
    ppvVar3 = ExceptionList;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      ppvVar3 = ExceptionList;
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
        ppvVar3 = ExceptionList;
      }
    }
  } while( true );
}

